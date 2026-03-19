#include <stdio.h>

int main(){

    char a[] = {'W', 'o', 'r', 'l', 'd', '\0'};
    printf("%s\n", a);

    char b[5];
    
    b[0] = 'H';
    b[1] = 'e';
    b[2] = 'l';
    b[3] = 'l';
    b[4] = 'o';

    printf("%s\n", b);

    char c[5];

    printf("Enter string :\n");
    scanf("%s",&c);

    printf("%s",c);


    return 0;
}