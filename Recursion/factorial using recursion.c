#include<stdio.h>
int fact(int value)
{
    static int a=1,m;
    if(value==0) return m;
    fact(value-1);
    //printf("%d\n",value);
    a=a*value;
}

int main()
{
    int value,x;
    scanf("%d",&value);
    x=fact(value);
    printf("%d",x);
    return 0;
}
