#include<stdio.h>
int main()
{
    int n,d,oc=0,ec=0,dc=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(d%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
        dc++;
        n=n/10;
    }
    if(dc==oc)
    {
        printf("Odd");
    }
    else if(dc==ec)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
}