#include<stdio.h>
int main()
{
    int i,a[50],N,p;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    p=N/2;
    for(i=N-1;i>=p;i--)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<p;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}