/*1. Write a program in C that recognizes the following languages.
a. Set of all strings over binary alphabet containing even number of 0’s and even
*/
#include<stdio.h>
int main()
{
    int state=0,i=0;
    char token,input[20];
    printf("Enter input string \t :");
    scanf("%s",input);
    while((token=input[i++])!='\0')
    {
        switch(state)
        {
            case 0: if(token=='0')
                        state=1;
                    else if(token=='1')
                        state=2;
                    else
                    {
                        printf("Invalid token");
                    }
                    break;
            case 1: if(token=='0')
                        state=0;
                    else if(token=='1')
                        state=3;
                    else
                    {
                        printf("Invalid token");
                    }
                    break;
            case 2: if(token=='0')
                        state=3;
                    else if(token=='1')
                        state=0;
                    else
                    {
                        printf("Invalid token");
                    }
                    break;
            case 3: if(token=='0')
                        state=2;
                    else if(token=='1')
                        state=1;
                    else
                    {
                        printf("Invalid token");
                    }
                    break;
        }
    }
    if(state==0)
        printf("\n\nString accepted\n\n");
    else
        printf("\n\nString not accepted\n\n");
}
