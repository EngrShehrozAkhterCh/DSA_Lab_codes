#ifndef RECORD_H
#define RECORD_H

struct record {
    char *name;
    int age;
    char *gender;
};
typedef struct record Record;

// Function declaration
Record *create_record(char *name, int age, char *gender);

#endif


