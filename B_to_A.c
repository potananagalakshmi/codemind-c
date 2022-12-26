#include<stdio.h>
int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=n2;i>=n1;i--)
    {
        printf("%d ",i);
    }
}