#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

#define max 100000
using namespace std;


int main()
{
    char input[max];
    int flag;
    
    //input*************************************

    fgets(input,100000,stdin);
    

    // traitment*************************************
    flag = 0;
    for (int i = 1; i <strlen(input) ; i++)
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
        for (int i = 0; i < strlen(input); i++)
        {
          cout << input[i];
        }
    }else
    {
        cout << "kinda impossible";
    }
    
    
    
    
    

    return 0;
}