//Week 6: Recursive Descent Parser
//grammar
/*
E->TE'
E'->+TE'|NULL
T->FT'
T'->*FT'|NULL
F->(E)|a
*/
#include<stdio.h>
#include<string.h>
void E();
void T();
void F();
void Eds();
void Tds();
char input[1000];
int i,error;
int main()
{
    printf("Enter the input:\n");
    gets(input);
    E();
    if(i==strlen(input)&&error==0)
    {
        printf("String is accepted");
    }
    else
    {
        printf("string is rejected");
    }
}
void E()
{
    T();
    Eds();
}
void T()
{
    F();
    Tds();
}
void Eds()
{
    if(input[i]=='+')
    {
        i++;
        T();
        Eds();
    }

}
void Tds()
{
    if(input[i]=='*')
    {
        i++;
        F();
        Tds();
    }
}
void F()
{
    if(input[i]=='a')
    {
        i++;
    }
    else if(input[i]=='(')
    {
        i++;
        E();
        if(input[i]==')')
        {
            i++;
        }
        else
        {
            error=1;
        }
    }
    else
    {
        error=1;
    }
}
