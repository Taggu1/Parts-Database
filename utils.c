
#include <stdio.h>
#include <ctype.h>

#include "utils.h"


int power(int num, int pow);


// TODO FIX
int read_int() {
    int number = 0;
    int current_pow = 0;

    char ch;

    while ((ch = (char)getchar()) != '\n') {
        if (isdigit(ch)) {
            number += (ch - '0') * power(10, current_pow++);
        }
    }

    return number;
}


int power(int num, int pow) {
    int final_num = 1;
    for (int i = 0; i < pow; i++) {
        final_num *= num;
    }
    return final_num;
}