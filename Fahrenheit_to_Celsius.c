#include<stdio.h>
int main()
{
    float f;
    float celsius;
    scanf("%f",&f);
    celsius=(f-32)*5/9;
    printf("%.2f",celsius);
    return 0;
    
}