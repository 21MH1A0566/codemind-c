#include<stdio.h>
int main()
{
    int i,N,a[50],j,count=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(a[i]>a[j])
            {
                count=count+1;
            }
            
        }
        printf("%d ",count);
        count=0;
    }
    return 0;
}