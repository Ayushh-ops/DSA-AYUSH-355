#include<stdio.h>
int main()
{
    int arr[5]={22,34,12,3,45};
    int a,n;
    scanf("%d %d",&a,&n);
    for(int i=6;i>=a;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[a]=n;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}