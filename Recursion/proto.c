#include<stdio.h>
//int a=1;
int recur(int value)
{
    static int a=1;

    //printf("%d\t",value);
    if(value==0)
    {
        return;
    }
    //value=value-1;
    recur(value-1);
    //printf("%d\t",value);
    return a=a*value;

}
int main()
{
    int value=5,y;
    //y=recur(value);
    printf("%d",recur(value));
    return 0;

}
