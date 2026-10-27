#include<stdio.h>
int main()
{
float a,b;
char op;
printf("====MODERN CALCULATOR====\n");
printf("enter expression:");
scanf("%f%c%f",&a,&op,&b);
switch(op)
{
case'+':
printf("result=%2f\n",a+b);
break;
case'-':
printf("result=%2f\n",a-b);
break;
case'*':
printf("reult=%2f\n",a*b);
break;
case'/':
if(b!=0)
printf("result=%2f\n",a/b);
else
printf("error:division by zero!\n");
break;
default:
printf("invalid operator!\n");
}
return 0;
}