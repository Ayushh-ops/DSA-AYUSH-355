#include<stdio.h>
void counting_sort(int a[], int n)
{
    int max=a[0];
    int count[100];
    int b[n];
    for(int i=0;i<=n-1;i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }    
    }
    for(int i=0;i<=max;i++)
    {
        count[i]=0;
    }
   for(int i=0;i<=n-1;i++)
   {
         count[a[i]]++;
   }
   for(int i=1;i<=max;i++)
   {
        count[i]=count[i]+count[i-1];
   }
   for(int i=n-1;i>=0;i--)
   {
        b[count[a[i]]-1]=a[i];
        count[a[i]]--;
   }
    for(int i=0;i<=n-1;i++)
    {
          a[i]=b[i];
    }
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    counting_sort(a,n);
    printf("Sorted array is:");
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}