#include<stdio.h>
int InsertionPriorityQueue(int A[],int* n,int PRN)
{
    int i=0;
    while(i<*n&&PRN>=A[i]) 
    {
        i++;
    }
    
        for (int j = *n; j > i; j--)

       {
        A[j]=A[j-1]; 
       }
         A[i]=PRN;
         (*n)++; 
} 
    int main()
    {
        int A[100],n,PRN;
        printf("Enter the number of elements in the Priority Queue\n");
        scanf("%d",&n);
        printf("Enter the elements in the Priority Queue\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        printf("Enter the element to be inserted\n");
        scanf("%d",&PRN);
        InsertionPriorityQueue(A,&n,PRN);
        printf("The new Priority Queue is\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",A[i]);
        }
        return 0;
    }