#include <stdio.h>

// Returns a^b ...just like pow but it's only for int...
int power(int a , int b){
    for (int i = 0; i <= b; i++) {
        a = a* a;
    }
    // since we are returning an i .. we used int instead of void
    return a;
}

int main () {
    int r =  power(2, 5);
    printf("The value is %d",r);
    return 0;
}