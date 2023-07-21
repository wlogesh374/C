#include<stdio.h>
int main()
{
    int n,d,temp,rev=0;
    printf("enter the number=");
    scanf("%d",&n);
    temp=n;

    while(temp>0)
    {
        d=temp%10;
        rev=(rev*10)+d;
        temp=temp/10;
    }
    if(n==rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
