#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main () {
    srand(time(NULL));
    char yourName[30] ;
    char crushName[30];
    printf("What's your name? :");
    fgets(yourName, sizeof(yourName),stdin );
    yourName[strlen(yourName)-1] = '\0';
    printf("Your Your Crush's Name :");
    fgets(crushName, sizeof(crushName),stdin );
    crushName[strlen(crushName)-1] = '\0';
    int p =rand();
    int max = 100 ;
    int min = 0;
    int r =( p % (max - min + 1)) + min ;
    if (r >= 80) {
        printf("Great \n");
        printf("%s and your %s's love score is %d",yourName,crushName,r);
    }
    else if ( r >= 40 && r < 80) {
        printf("Nice .. Make sure to work hard \n");
        printf("%s and your %s's love score is %d",yourName,crushName,r);
    }
    else {
          printf("sadly ...\n");
        printf("%s and your %s's love score is %d",yourName,crushName,r);
    }

    return 0;
}