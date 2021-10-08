//SakhinetiPraveena
//Given array 1 2 3 4 5, code for constructing a balanced binary search tree .
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
// As the given array is sorted, to construct balanced BST the mid element is taken as root

Node* ConstructBST(int arr[],int start, int end_){
    if(start>end_) return NULL;
    int mid=(start+end_)/2;
    Node * root=new Node(arr[mid]);
    root->left=ConstructBST(arr,start,mid-1);
    root->right=ConstructBST(arr,mid+1,end_);
    return root;
}

// function to print the inorder of BST
void print_inorder(Node* root){
    if(root==NULL) return;
    if (root != NULL){
        print_inorder(root->left);
        cout << root->data <<" ";
        print_inorder(root->right);
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    Node* root=ConstructBST(arr,0,4);
    cout<<"Inorder for the BST is :";
    print_inorder(root);
}
