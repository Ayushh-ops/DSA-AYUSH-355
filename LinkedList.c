#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
 struct Node* next;
};
struct Node* head = NULL;
void insertAtEnd(int n) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = n;
 newNode->next = NULL;
 if(head == NULL) head = newNode;
 else {
 struct Node* temp = head;
 while(temp->next != NULL) temp = temp->next;
 temp->next = newNode;
 }
}
void deleteFromFront() {
 if(head == NULL) printf("List is empty\n");
 else {
 struct Node* temp = head;
 head = head->next;
 free(temp);
 }
}
void display() {
 if(head == NULL) printf("List is empty\n");
 else {
 struct Node* temp = head;
 while(temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
 }
}
int main() {
 int choice, n;
 while(1) {
 printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
 scanf("%d", &choice);
 switch(choice) {
 case 1: scanf("%d", &n); 
       insertAtEnd(n); 
       break;
 case 2: deleteFromFront();
         break;
 case 3: display(); 
         break;
 case 4: return 0;
 default: printf("Invalid\n");
 }
 }
}