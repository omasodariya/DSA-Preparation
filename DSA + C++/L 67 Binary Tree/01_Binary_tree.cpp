#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new node(data);

    cout<<"Enter data for left of data "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for right of data "<<data<<endl;
    root->right=buildTree(root->right);

    return root;

}

void levelOrderTraversal(node* root){//Bredth first search
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
        cout<<temp->data<<" ";
        if(temp->left)
        q.push(temp->left);

        if(temp->right)
        q.push(temp->right);

        }
    }
}

void inorder(node* root){
    //base case
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

    return;
}

void preorder(node* root){
    //base case
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

    return;
}

void postorder(node* root){
    //base case
    if(root==NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

    return;
}

void BuildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root: ";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }

    }
}

int main()
{
 node* root=NULL;
 // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
 BuildFromLevelOrder(root);
// root=buildTree(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
cout<<endl;
levelOrderTraversal(root);
// cout<<endl;
// cout<<"Inorder: ";
// inorder(root);
// cout<<endl;
// cout<<"Preorder: ";
// preorder(root);
// cout<<endl;
// cout<<"Postorder: ";
// postorder(root);
return 0;
}