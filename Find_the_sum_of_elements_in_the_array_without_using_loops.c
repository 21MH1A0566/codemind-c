#include<stdio.h>
int main()
{
    int N,a[50],i,count=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        count=count+a[i];
    }
    printf("%d",count);
    return 0;
}