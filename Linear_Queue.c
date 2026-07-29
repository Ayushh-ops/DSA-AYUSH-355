#include<stdio.h>
int queue[100];
int f=-1,r=-1;
void enqueue(int queue[],int n,int ele)
{
  if(f==0&&r>=n-1)
  printf("Overflow\n");
  if(f==-1&&r==-1)
  {
    f=r=0;
  }
  else {
    r=r+1;
  }
queue[r]=ele;
}
int dequeue(int queue[],int n)
{
    if (f==-1)
    printf("Underflow\n");
    else{
    int ele=queue[f];
    }
    if (f==r)
    {
        f=r=-1;
    }
    else {
        f=f+1;
    }
}
int main()
{
    int n,ele,ch;
    printf("Enter the size of the queue:");
    scanf("%d",&n);
    do {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the element to be enqueued:");
                scanf("%d",&ele);
                enqueue(queue,n,ele);
                break;
            case 2:
                ele=dequeue(queue,n);
                printf("Dequeued element is:%d\n",ele);
                break;
            case 3:
                if(f==-1)
                {
                    printf("Queue is empty\n");
                }
                else {
                    printf("Elements in the queue are:\n");
                    for(int i=f;i<=r;i++)
                    {
                        printf("%d ",queue[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }while(ch!=4);
    return 0;
}
   