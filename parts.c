

#include <stdio.h>
#include "parts.h"
#include "utils.h"

#define NAME_LEN 60 // Max part name
#define MAX_PARTS_NUM 100

typedef struct {
    char name[NAME_LEN + 1]; // (+1) to account for the null character
    int number;
    int on_hand;
} Part;


Part parts[MAX_PARTS_NUM];
int parts_count = 0;

void insert_part() {
    // Check if database is full

    if (parts_count == MAX_PARTS_NUM) {
        puts("The inventory is full, you cant add more parts");
        return;
    }

    printf("Enter part number: ");
    int num = read_int();
    printf("num: %d\n", num);
}
