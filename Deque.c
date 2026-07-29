#include<stdio.h>
int queue[100];
int f=-1,r=-1;
int InsertionFront(int queue[],int n,int ele)
{
    if((f==0&&r==n-1)||(f=r+1))
    {
        printf("Overflow\n");
    }
    if(r==n-1)
    {
        r=0;
    }
    else{
        r=r+1;
    }
    queue[r]=ele;

}   