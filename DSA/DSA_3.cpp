#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

class Binary_Tree
{
	public:
		
	
	node *create_tree()
	{
	node *root;
	int x;
	cout<<"Enter the data = ";
	cin>>x;
	if(x==-1)
		return NULL;
	
	
	root=new node();
	root->data=x;
	root->left=create_tree();
	root->right=create_tree();

	return root;
}	
	void inorder(node*root);
	void preorder(node*root);
	void postorder(node*root);
};



void Binary_Tree::inorder(node*root)
{
	if(root==NULL)
		return;
	
	
	inorder(root->left);
	cout<<"~~"<<root->data;
	inorder(root->right);
	
}

void Binary_Tree::preorder(node*root)
{ 
	if(root==NULL)
		return;
	else
	{
	cout<<"~~"<<root->data;
	preorder(root->left);
	preorder(root->right);
	}
}

void Binary_Tree::postorder(node*root)
{
	if(root==NULL)
		return;
	else
	{
	postorder(root->left);
	postorder(root->right);
	cout<<"~~"<<root->data;
	}
}

int main()
{	
	int ch;
	node *root;
	Binary_Tree obj;
	cout<<"Hello!";
	cout<<"\nWelcome to Binary Tree Program";
	cout<<"Here is the menu for the Binary Tree:"<<endl;
	cout<<"\n1)Create \n2)Inoder traversal \n3)Preorder traversal \n4)Postorder traversal \n5)Exit"<<endl;
	cout<<"\nEnter the Option-->";
	cin>>ch;
	
	do
	{
		switch(ch)
		{
			case 1:
				root=obj.create_tree();
				break;
			case 2:
				obj.inorder(root);
				break;
			case 3:
				obj.preorder(root);
				break;
			case 4: 
				obj.postorder(root);
				break;
			
		}
	}while(ch!=5);
	
	return 0;
}

