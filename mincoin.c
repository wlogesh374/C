#include<stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int coins[n];
    printf("\nEnter the denominations");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&coins[i]);
    }
    printf("Enter the amount ");
    int sum;
    scanf("%d",&sum);
    for(int i=n-1;i>=0;i--)
    {
        if(sum>=coins[i] && sum!=0)
        {
            sum=sum-coins[i];
            printf("%d ",coins[i]);
            i++;
        }
    }
    if(sum>0)
    {
        printf("%d not have any denominations",sum);}
}
