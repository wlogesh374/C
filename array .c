#include <stdio.h>
int main ()

{
int a[10][10];
int i,j;
for (i=0;i<10;i++)
{
for ( j=0;j<10;j++)
{
scanf("%d",&a[i][j]);


}
}

for (i=0;i<10;i++)
{
for ( j=0;j<10;j++)
{
printf("%d",a[i][j]);


}
}



}
