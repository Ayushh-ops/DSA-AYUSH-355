#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *left, *right;
};
void inorderTraversal(struct Node* root) {
    if (root == NULL)
    return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
void postorderTraversal(struct Node* root) {
    if(root==NULL)
    return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}
void preorderTraversal(struct Node* root) {
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}  
Node* buildTree(vector<int>& values, int start, int end) {
    if (start > end)
    return NULL;

    int mid = start + (end - start) / 2;
    Node* root = new Node();
    root->data = values[mid];
    root->left = buildTree(values, start, mid - 1);
    root->right = buildTree(values, mid + 1, end);

    return root;
} 

int main(){
    cout<<"Enter the number of nodes:"<<endl;
    int n;
    cin>>n;
    vector<int>values;
    cout<<"Enter the values of nodes:"<<endl;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        values.push_back(val);
    }
    sort(values.begin(),values.end());
    Node* root = buildTree(values, 0, n - 1);
    cout<<"Inorder Traversal:"<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"Preorder Traversal:"<<endl;
    preorderTraversal(root);
    cout<<endl;
    cout<<"Postorder Traversal:"<<endl;
    postorderTraversal(root);
    cout<<endl;
    return 0;
}
