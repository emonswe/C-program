#include<stdio.h>
int arr[5]= {4,5,2,1,9};
int max(int i, int n, int *arr)
{
    int m;
    if(i==n-1)
    {
        return arr[i];
    }
    m=max(i+1, n, arr);
    return ((arr[i]<m)?arr[i]:m);

}
int main()
{
    int i=0,m;
    //scanf("%d",&n);
    m=max(0,5,arr);
    printf("%d",m);
    return 0;
}
