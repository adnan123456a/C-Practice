#include <stdio.h>
void happyBirthday(char name[]) {
    printf("Happy Birthday To You \n");
    printf("Happy Birthday To You\n");
    printf("Happy Birthday To You Dear %s \n", name);
    printf("Happy Birthday To You\n \n");
}
int main () {
    char name[] = "Adnan";
    happyBirthday(name);
    happyBirthday(name);//perammeters can be used to insert an value inside the function
    happyBirthday(name);
    return 0;
}
