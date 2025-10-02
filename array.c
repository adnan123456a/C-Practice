#include <stdio.h>

int main () {
    //arrray 
    int number[] = {1,2,5,7,1,4,676,2,4,3};
    number[4] = 18;
    printf("%d\n",number[4]);
    printf("%lu\n",sizeof(number));
     printf("%lu\n",sizeof(number[0]));
     //sizeof returns in byte 
    //  if i give number 5 in the first place than i would have to use %d 

    //multi-array

    char names[][3] = {{'a','b','d'},
                    {'e','c','f'}};
// [][1] MEANS HOW MANY extra array we are going to push after first 
 printf("%c\n",names[0][0]);

    return 0;
}