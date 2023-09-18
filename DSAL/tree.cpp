#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

class Btree
{
	public:
	node *createTree();
	void inorder(node *root);
	void preorder(node *root);
	void postorder(node *root);
	
};

node*createTree()
{
	node *root;
	int x;
	
	cout<<"Enter the data: ";
	cin>>x;
	if(x==-1)
	{
		return NULL;
	}
	else
	{
		root=new node();
		root->data=x;
		root->left=createTree();
		root->right=createTree();
	}
	return root;
}

void Btree::inorder(node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}
void Btree::preorder(node *root)
{
	if(root==NULL)
		return;
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}
void Btree::postorder(node *root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;

}
void inorder(node *root)
{
	while(root!=NULL ||top!=-1)
	{
		if(root!=NULL)
		{
			stack[++top]=root;
			root=root->left
		}
		else{
			root=stack[top--];
			cout<<root->data;
			root=root->right
		}
	}
	
}

void preorder(node *root)
{
	stack[++top]=root
	while(top!=-1)
	{
		root=stack[top--];
		cout<<root->data
		stack[++top]=root->right;
		stack[++top]=root->left;
	}
}
void postorder(node *root)
{
	while(top!=-1 || root!=NULL)
	{
		if(root!=NULL)
		{
			stack[++top]=root;
			flag[top]==0;
			root=root->left;
		}
		else
		{
			root=stack[top];
			if(flag[top]==1)
			{
				cout<<root->data;
				top--;
				root=NULL
				
int main()
{
	Btree b;
	node *root;
	int ch;                                                                                                                                                                                     
	
	do{
		cout<<"1.Create tree\n2.Preorder\n3.postorder\n4.Inorder\n";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		 switch(ch)
		 {
		 	case 1:
		 	root=createTree();
		 	break;
		  	
		  	case 2:
		  		b.preorder(root);
		  		break;
		  	
		  	case 3:
		  		b.postorder(root);
		  		break;
		  	case 4:
		  		b.inorder(root);
		  		break;
		  		
		  	default:
		  		cout<<"Enter valid choice:";
		  		break;
		  }
	}
	while(ch!=5);
	return 0;
}
		 	
		 	
		
		

