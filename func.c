#include <stdio.h>

// we can't call the function before it's assigned 
//so we use function prototype

void happyBirthday(char name[]);
int main () {
    char name[] = "Adnan";
    happyBirthday(name);
    happyBirthday(name);//perammeters can be used to insert an value inside the function
    happyBirthday(name);
    return 0;
}

void happyBirthday(char name[]) {
    printf("Happy Birthday To You \n");
    printf("Happy Birthday To You\n");
    printf("Happy Birthday To You Dear %s \n", name);
    printf("Happy Birthday To You\n \n");
}