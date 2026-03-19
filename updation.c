
#include <stdio.h>


int main(){

    char modification1[] = "Red And White Skill Education";

    modification1[4] = 'a';



    printf("%s\n",modification1);


    char modification2[] = "Red And White Skill Education Bhavnagar";
   
    modification2[5] = 'e';


   
    for (int i = 0; modification2[i] != '\0'; i++)
    {
        printf("%c\n", modification2[i]);
    }
    
    return 0;
}