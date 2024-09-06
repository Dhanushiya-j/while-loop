#include<stdio.h>
int main()
{
    int num,max=0,min=9,rem;
    printf("number");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        if(max<rem)
        max=rem;
        if(min>rem)
        min=rem;
        num=num/10;

    }
        printf("%d",max-min);
        return 0;
}
