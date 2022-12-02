/*
e. Recognize a string with three consecutive 0’s
*/
%option noyywrap
%{
#include<stdio.h>
%}
%%
[0-1]*000[0-1]* {printf("Given string has three 
consecutive zeros");}
[0-1]* {printf("Given string does not have three 
consecutive zeros");}
%%
int main()
{
printf("Enter the string:");
yylex();
getch();
return 0;
}
