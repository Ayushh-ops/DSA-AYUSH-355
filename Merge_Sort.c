#include<stdio.h>
void merge(int a[], int l, int mid, int h)
{
   if(l<h)
   {
    int mid=(l+h)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,h);
        
   } 
}
