#include<stdio.h>
int main()
{
    int a[100],b[100],c[100];
    int n,m,i=0,j=0,k=0;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n);
    printf("Enter the sorted array:");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the number of elements in second array: ");
        scanf("%d", &m);
        printf("Enter the sorted array:");
        scanf("%d",&b[j]);
            for(int j=0;j<m;j++)
        {
            scanf("%d",&b[j]);
        }
        while(i<n&&j<m)
        {
            if(a[i]<=b[j])
        {
            i++;
            k++;
        }
        if(b[j]<a[i])
        {
            j++;
            k++;
        }
    }
        while(i<m)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m)
   {
    c[k]=b[j];
    j++;
    k++;
   }
   return 0;

    
}