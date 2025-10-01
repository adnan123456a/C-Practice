//instead of if we will use switch 
#include <stdio.h>
int main () {
    int day = 5 ;

    switch (day) {
        case 1:
        printf("It's Saturday");
        break;
        case 0:
        printf("It's Friday");
        default:
        printf("Please Enter 1 or 0");
    }
//it's like giving a param in function and checking it with 
// if , else if ... 

    return 0;
}