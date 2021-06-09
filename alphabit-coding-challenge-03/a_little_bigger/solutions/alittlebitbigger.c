#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100000

int main()
{
    char input[max];
    int flag;
    int i;
    
    //input*************************************

    fgets(input,100000,stdin);
    

    // traitment*************************************
    flag = 0;
    for (i = 1; i <strlen(input) ; i++)
    {
        if (input[strlen(input)-i]>input[strlen(input)-i-1]) {
            char tmp = input[strlen(input)-i];
            input[strlen(input)-i] = input[strlen(input)-i-1];
            input[strlen(input)-i-1] = tmp;
            i=strlen(input);
            flag = 1;
        }
    }
    // output*************************************
    
    if (flag)
    {
        for (i = 0; i < strlen(input); i++)
        {
            printf("%c",input[i]);
        }
    }else
    {
        printf("kinda impossible");
    }
    
    
    
    
    

    return 0;
}