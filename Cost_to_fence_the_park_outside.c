#include <stdio.h>
int main()
{
    int l,b,d,e,c,A1,A2;
    scanf("%d%d%d%d",&l,&b,&d,&c);
    A1=l*b;
    A2=(l+2*d)*(b+2*d);
    e=c*(A2-A1);
    printf("%d",e);
    return 0;
}