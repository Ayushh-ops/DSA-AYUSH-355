#include<stdio.h>
int main()
{
  int arr[5]={2,4,8,23,5},flag=0,n;
  printf("Element to search for:");
  scanf("%d",&n);
  for(int i=0;i<5;i++)
  {
    if(arr[i]==n){
    flag=1;
    break;
  }
}
   if(flag==1)
   printf("Element Found");
   else 
   printf("Not Found %d",flag);

}
