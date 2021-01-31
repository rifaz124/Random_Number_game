#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int r,a;
while(1)
{
printf("Enter a Number : ");
scanf("%d",&a);
r = rand() %10;
if(a==r)
{

printf("congragulation you won the match \n\n");
break;
}
else
{
if(r<a)
{
printf("%d",a);
printf(" is very high\n");
printf("the genarated number is %d \n",r);
printf("please try again.....\n\n");
}
else
{
printf("%d",a);
printf(" is very low\n");
printf("the genarated number is %d \n",r);
printf("please try again.....\n\n");
}}}
return(0);
}
