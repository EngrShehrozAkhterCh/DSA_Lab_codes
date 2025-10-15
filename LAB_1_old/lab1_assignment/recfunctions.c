#include <stdlib.h>
#include <string.h>
#include "record.h"

// Function to create a record dynamically
Record *create_record(char *name, int age, char *gender) {
    Record *rec = (Record *)malloc(sizeof(Record));  // allocate memory dynamically
    rec->name = name;
    rec->age = age;
    rec->gender = gender;
    return rec;
}

