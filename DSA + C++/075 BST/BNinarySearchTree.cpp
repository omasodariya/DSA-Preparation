#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};



Node* CreateNode(Node* root,int data){

    if(root==NULL){
        root=new Node(data);
        return root;
    }

    if(data < root->data)
        root->left=CreateNode(root->left,data);
    else
        root->right=CreateNode(root->right,data);

    return root;
}

void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=CreateNode(root,data);
        cin>>data;
    }
}

void PrintTree(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        }

    }
}

Node* minval(Node* root){
    Node* temp=root;
        while(temp->left!=NULL)
        temp=temp->left;
    return temp;
 }

Node* deleteNode(Node* &root,int data){
    if(root==NULL){
        return root;
    }
    if(root->data == data){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //1 child

        //left child
        if(root->left!=NULL && root->right==NULL){
             Node* temp=root->left;
             delete root;
             return temp;   
        }
        //right child
        if(root->left==NULL && root->right!=NULL){
             Node* temp=root->right;
             delete root;
             return temp;   
        }

        //2 child
        if(root->right!=NULL && root->left!=NULL){
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deleteNode(root->right,mini);
            return root; 
        }

    }
    else if(data < root->data){
        root->left=deleteNode(root->left,data);
        return root;
    }else{
        root->right=deleteNode(root->right,data);
        return root;
    }

    return root;
}

int main()
{

Node* root=NULL;
cout<<"Enter data to create BST: "<<endl;
takeinput(root);
cout<<endl;
PrintTree(root);
cout<<endl;
root=deleteNode(root,50);
PrintTree(root);

return 0;
}