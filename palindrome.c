#include<stdio.h>
int main()
{
int n,d,sum=0,temp;
scanf("%d",&n);
temp=n;
while(n>0)
{
d=n%10;
sum=sum+(d*d*d);
n=n/10;
}
if(temp==n)
{
printf("amstrong number");
}
else
{
printf("not amstrong");
}
}
