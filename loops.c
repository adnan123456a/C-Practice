#include <stdio.h>
#include <unistd.h>//for linux 
int main () {  
   /*  int n = 1;
     while (1 == 1) {
        printf("%d Hey I love you \n",n);
         n++;
     }
         never ending loop
*/

    int num = 0;
    while (num >= 0) {
        printf("Print a number smaller than 0 :- ");
        scanf("%d",&num);
    }
   

    for (int i = 0; num <= 10; num++) {
        printf("%d \n",num);
        sleep(1);//unistd.h       
    } 
    printf("Happy Birthday Bro\n");
    
    for (int i = 10; i <= 20; i++) {
        if (i == 17) {
            break;
        }
        if (i == 13) {
            continue;
        }
        printf("%d\n",i);
    }
    
    
    
    
    return 0;
}