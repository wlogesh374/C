#include<stdio.h>
int main()
{
int n,j,m,i,flag=0;
scanf("%d",&n);
scanf("%d",&m);


/*for(i=2;i<n;i++)
{
 if(n%i!=0)
 {
     flag=0;
 // printf("the number is prime\n");
  }
  else
  {
      flag=1;
 // printf("not prime\n");
      break;
  }
}
if(flag==0)
  printf("the number is prime\n");
else
  printf("the number is not prime\n
         */

for(i=n;i<=m;i++)
{
    for(j=2;j<i;j++)
    {
        if(i%j!=0)
 {
     flag=0;
  }
  else
  {
      flag=1;
      break;
  }

    }
    if(flag==0)
        printf("%d ",i);
}

}
