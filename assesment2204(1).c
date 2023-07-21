#include<stdio.h>
int main()
{
int i,t,n,p,sum=0,flag=0;
printf("Test cases");
scanf("%d",&t);
for(int j=1;j<=t;j++)
{
printf("Size");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}

printf("partitions");
scanf("%d",&p);
if(sum%p!=0)
    flag=0;
else
{
 flag=1;
 int s=sum/p;

for(i=0;i<n;i++)
{
    if(a[i]>s)
 {
     flag=0;
    break;
}
else
    flag=1;
}





if(flag==1)
printf("True\n");
else
    printf("False\n");

}
}
}
