#include <stdio.h>
int main () {
    int age = 18;
    if (age>=21) {
        printf("You are an Adult");
    }
    else if ( age == 0) {
        printf("Are you sure ? ");
    }
    else {
        printf("You are a child");
    }

    return 0;
}