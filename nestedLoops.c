#include <stdio.h>
int main () {
    for (int i = 0; i <3 ; i++ ) {
        for (int l = 1; l<=10; l++) {
            switch (l) {
                case 10:
                printf("%d\n",l);
                break;
                default:
                 printf("%d ",l);
            }
            
        }
    }
    return 0;
}