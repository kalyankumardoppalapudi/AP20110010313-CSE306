//b. Lab Assignment: Set of all strings ending with two symbols of same type.

#include<stdio.h>
int main()
{
char state='a';
int length, i;
char n[20];
printf("Enter the String: ");
scanf("%s",n);
for(i=0;n[i]!='\0';i++)
{
switch(state)
{
case 'a':
if(n[i]=='0'||n[i]=='1'||n[i]=='2'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='6'||n[i]=='7'||n[i]=='8'||n[i]=='9')
state='a';
else if(n[i]=='.')
state='b';
else
state='d';
break;
case 'b':
if(n[i]=='0'|n[i]=='1'||n[i]=='2'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='6'||n[i]=='7'||n[i]=='8'||n[i]=='9')
state='c';
else
state='d';
break;
case 'c':
if(n[i]=='0'||n[i]=='1'||n[i]=='2'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='6'||n[i]=='7'||n[i]=='8'||n[i]=='9')
state='c';
else
state='d';
break;
case 'd':
state='d';
break; }
}
if(state=='c'||state=='a')
printf("The given String is accepted");
else
printf("The given String is not accepted");
return 0;
}
