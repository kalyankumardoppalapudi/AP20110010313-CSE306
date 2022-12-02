/*
d. Recognize strings ending with 00
*/
%option noyywrap
%{
#include<stdio.h>
%}
%%
[0-1]*00 {printf("Given string ends with 00");}
[0-1]* {printf("Given string does not ends with 00");}
%%
int main()
{
printf("Enter the string:");
yylex();
getch();
return 0;
}
