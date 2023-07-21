#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
    scanf("%c",&a[i]);
    scanf("%d",&b[i]);
    }
    int ans;
    ans=(n-1)*(n-1);
    printf("The total number of derangements !%d is %d",n,ans);
}
