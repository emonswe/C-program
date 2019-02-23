#include<stdio.h>
int value;
void recurs(int value)
{


    if(value>5)
    {
    return;
    }
    printf("forward: %d\t",value);
    printf("\n");
    recurs(value+1);

    printf("return: %d\t",value);
    }
int main()
{
    //int value;//,y;
    scanf("%d",&value);
    recurs(value);
    //printf("\n");
    //y=recurs(value);
    //printf("%d\n",y);
    return 0;
}
