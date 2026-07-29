#include<stdio.h>
int queue[100];
int f=-1,r=-1;
int currsize=0;
void Cir_Enqueue(int queue[],int n,int ele)
{
  
  if (currsize==n)
  {
        printf("Overflow\n");
  } 
  if(f==-1)
  f=0;
    r=(r+1)%n;
    queue[r]=ele;
    currsize++;
}
int Cir_Dequeue(int queue[],int n)
{
    if (currsize==0)
    {
        printf("Underflow\n");
    }
    int ele=queue[f];
    f=(f+1)%n;
    currsize--;
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
                Cir_Enqueue(queue,n,ele);
                break;
            case 2:
                ele=Cir_Dequeue(queue,n);
                printf("Dequeued element is:%d\n",ele);
                break;
            case 3:
                if(currsize==0)
                {
                    printf("Queue is empty\n");
                }
                else {
                    printf("Elements in the queue are:\n");
                    for(int i=0;i<currsize;i++)
                    {
                        printf("%d ",queue[(f+i)%n]);
                    }
                    printf("\n");
                }
                break;
        }
    }while(ch!=4);
    return 0;
}