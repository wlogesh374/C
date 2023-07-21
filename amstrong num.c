#include<stdio.h>
int main()
{
int n,d,sum=0,temp_num;
scanf("%d",&n);
temp_num=n;
while(n>0)
{
d=n%10;
sum=sum+(d*d*d);
n=n/10;
}
if(temp_num==sum)
 {
   printf("amstrong number");
 }
else
 {
   printf("not amstrong");
 }
  return 0;
 }
