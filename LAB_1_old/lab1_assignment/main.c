#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 6
#include "record.h"

// Function declarations
void bubblesort(Record rec[]);
void sort1(Record rec[]);
void swap(Record *recj, Record *recjplusone);

int female = 0;
int male = 0;

int main() {
    Record recs[SIZE];

    // Create records (names, ages, genders)
    recs[0] = *create_record("Ali", 15, "M");
    recs[1] = *create_record("Momina", 29, "F");
    recs[2] = *create_record("Zain", 20, "M");
    recs[3] = *create_record("Ayesha", 18, "F");
    recs[4] = *create_record("Sara", 19, "F");
    recs[5] = *create_record("Ahmed", 22, "M");

    // Print before sorting
    printf("Before Sorting:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%-8s %-2s %d\n", recs[i].name, recs[i].gender, recs[i].age);
    }

    // Sort and print again
    printf("\nAfter Sorting:\n");
    bubblesort(recs);

    for (int i = 0; i < SIZE; i++) {
        printf("%-8s %-2s %d\n", recs[i].name, recs[i].gender, recs[i].age);
    }

    getchar();
    return 0;
}

// Bubble sort by gender and age
void bubblesort(Record rec[]) {
    int pass, j;
    sort1(rec); // separate females and males first

    // Sort females by age
    for (pass = 1; pass <= female - 1; pass++) {
        for (j = 0; j <= female - 2; j++) {
            if (rec[j].age > rec[j + 1].age)
                swap(&rec[j], &rec[j + 1]);
        }
    }

    // Sort males by age
    for (pass = 1; pass <= male - 1; pass++) {
        for (j = female; j < female + male - 1; j++) {
            if (rec[j].age > rec[j + 1].age)
                swap(&rec[j], &rec[j + 1]);
        }
    }
}

// Separate females and males
void sort1(Record rec[]) {
    Record recf[SIZE], recm[SIZE];
    int s;

    for (s = 0; s < SIZE; s++) {
        if (strcmp(rec[s].gender, "F") == 0) {
            recf[female++] = rec[s];
        } else {
            recm[male++] = rec[s];
        }
    }

    // Combine back (females first, then males)
    for (s = 0; s < SIZE; s++) {
        if (s < female)
            rec[s] = recf[s];
        else
            rec[s] = recm[s - female];
    }
}

// Swap two records
void swap(Record *recj, Record *recjplusone) {
    Record hold = *recj;
    *recj = *recjplusone;
    *recjplusone = hold;
}
