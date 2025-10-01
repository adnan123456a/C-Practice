#include <stdio.h>

int main () {
    char oparator = '\0';
    double num1 = 0;
    double num2 = 0;
    double r = 0 ;
    printf("enter A Number :- "); 
    scanf("%lf",&num1);
    printf("What Do you want to do ? [+,-,/,*] :");
    scanf(" %c",&oparator);
    printf("enter second Number :- "); 
    scanf(" %lf",&num2);
    switch (oparator) {
        case '+':
        r = num1 + num2;
        break;
         case '-':
        r = num1 - num2;
        break;
         case '/':
        r = num1 / num2;
        break;
         case '*':
        r = num1 * num2;
        break;
        default:
            printf("Please Enter an Valid Operator");
    }
    printf("the total is %.2lf",r);
    return 0;
}