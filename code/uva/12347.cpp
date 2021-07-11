#include<iostream>
using namespace std;

struct Node{
    Node* left;
    int data;
    Node* right;
};

Node* createNewNode(int value){
    Node* temp = new Node();
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* insert(Node* currentNode, int value){
    if(currentNode==NULL){
        currentNode = createNewNode(value);
    }else if(value <= currentNode->data){
        currentNode->left = insert(currentNode->left,value);
    }else{
        currentNode->right = insert(currentNode->right,value);
    }
    return currentNode;
}

void postorder(Node *n) {
    if(n==NULL) return;
    postorder(n->left);
    postorder(n->right);
    cout<<n->data<<"\n";
}
int main()
{
	Node *root;
	int value;
    while(scanf("%d",&value)!=EOF) {
    	
    	root=insert(root,value);
    	
    	}
    postorder(root);
}

