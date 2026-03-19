#include <stdio.h>

int main(){

    char Words[6] = {'T', 'i','r','t','h','\0'};

    printf("%c\n", Words[0]);
    printf("%c\n", Words[1]);
    printf("%c\n", Words[2]);
    printf("%c\n", Words[3]);
    printf("%c\n", Words[4]);

    char Words2[5];   

    printf("Enter 5 characters:\n");

    for (int i = 0; i < 5; i++)
    {
       scanf(" %c", &Words2[i]);  
    }

    printf("\nOutput:\n");

    for (int i = 0; i < 5; i++)
    {
       printf("%c\n", Words2[i]);
    }

    return 0;
}