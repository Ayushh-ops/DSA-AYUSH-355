#include<iostream>
using namespace std;
struct LinkedList{
    int data;
    LinkedList* next;
};
void traverse(struct LinkedList* start)
{
    struct LinkedList* Temp=start;
    int count=0;
    cout<<"Linked List\t";
    while(Temp!=NULL)
    {
        cout<<Temp->data<<" ";
        Temp=Temp->next;
        count+=1;
    }
    cout<<endl<<"Length of Linked List is\t "<<count<<endl;
}
LinkedList*InsAtBegin(struct LinkedList* start,int x)
{
    struct LinkedList* new_node=new LinkedList();
    new_node->next=start;
    new_node->data=x;
    return new_node;
}
LinkedList*InsAfter(struct LinkedList* start)
{
    if(start==NULL)
    {
        cout<<"No Insertion"<<endl;
        return NULL;
    }
    struct LinkedList* new_node=new LinkedList();
    int x;
    cout<<"Element to be inserted\t"<<endl;
    cin>>x;
    new_node->data=x;
    new_node->next=start->next;
    start->next=new_node;
    return start;
}
LinkedList*InsAtEnd(struct LinkedList*start,int x)
{
    struct LinkedList* new_node=new LinkedList();
    new_node->data=x;
    new_node->next=NULL;
    if(start==NULL)
    {
        return new_node;
    }
    struct LinkedList* temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    return start;
}
LinkedList*DelAtBegin(struct LinkedList*start)
{
    if(start==NULL)
    {
    cout<<"Linked List does not exist\t"<<endl;
    return NULL;
    }
    else
    {
        struct LinkedList* temp=start;
        start=start->next;
        delete temp;
        return start;
    }
}
LinkedList*DelAfter(struct LinkedList*start)
{
   if(start->next=NULL)
   {
    cout<<"No Deletion"<<endl;
    return start;
   }
   else if(start==NULL)
   {
    cout<<"No Deletion\t"<<endl;
    return NULL;
   }
   else
   {
    struct LinkedList* temp=start;
    struct LinkedList* temp1=start->next;
    start->next=temp1->next;
    delete temp1;
    return start;
   }
}
int DelAtEnd(struct LinkedList* start,int x)
{
    if(start==NULL)
    {
        cout<<"Linked List does not exist\t"<<endl;
        return -1;
    }
    else if(start->next==NULL)
    {
        int del=start->data;
        delete start;
        start=NULL;
        return del;
    }
    struct LinkedList* temp=start;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    int del=temp->next->data;
    delete temp->next;
    temp->next=NULL;
    return del;
}
int main()
{
    struct LinkedList* start=NULL;
    int choice, x;

    do
    {
        cout<<"\n--- Menu ---"<< endl;
        cout<<"1. Insert at Beginning"<<endl;
        cout<<"2. Insert After a Node"<<endl;
        cout<<"3. Insert at End"<<endl;
        cout<<"4. Delete at Beginning"<<endl;
        cout<<"5. Delete After a Node"<<endl;
        cout<<"6. Delete at End"<<endl;
        cout<<"7. Traverse"<<endl;
        cout<<"8. Exit"<<endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Element to be inserted: ";
                cin >> x;
                start=InsAtBegin(start,x);
                break;

            case 2:
                start=InsAfter(start);
                break;    

            case 3:
                cout << "Element to be inserted: ";
                cin >> x;
                start=InsAtEnd(start,x);
                break;

            case 4:
                start=DelAtBegin(start);
                break;

            case 5:
                start=DelAfter(start);
                break;    

            case 6:
                x=DelAtEnd(start,x);
                break;

            case 7:
                traverse(start);
                break;

            case 8:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "You have entered wrong choice" << endl;
        }
    } while(choice != 6);

    return 0;
}
