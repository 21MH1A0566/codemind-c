#include<stdio.h>
int main()
{
    int i,j,a[50][50],r,c,count=0;
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            count=count+a[i][j];
        }
    }
    printf("%d",count);
    return 0;
}