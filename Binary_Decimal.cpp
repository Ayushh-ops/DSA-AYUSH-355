#include<iostream>
# define MAX 100
using namespace std;
int top=-1;
int stack[MAX];
int num;
int decimal=0;
void push()
{
    if(top>=MAX-1)
       cout<<"Overflow";
    else
    {
        int rem,power=1,decimal=0;
        while(num>0)
        {
            rem=num%10;
            num=num/10;
            decimal+=rem*power;
            power=power*2;
        }    
            stack[++top]=decimal;
        
    }   
}
void pop()
{
    if(top==-1)
    cout<<"underflow";
    else
    cout<<"The decimal number is:"<<stack[top]<<endl;
}
int main()
{
    cout<<"Enter the number:";
    cin>>num;
    push();
    pop();
}