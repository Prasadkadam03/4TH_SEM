#include <iostream>
using namespace std;

class node
{
	public:
		int data;
		node *left,*right;
	
};

class tree
{
	public:
	tree()
	{
		root= NULL;
	}
	
	node *root,*trav;	
node *create_bst()
{
        int x;
        cout<<"enter data "<<endl;
        cin>>x;
	node *temp;
	temp=new node;
	temp->left=NULL;
	temp->right=NULL;
	temp->data=x;
	
	if(root==NULL)
	{
		root=temp;
	}
	
	else
	{
		trav=root;
		while(trav!=NULL)
		{
			if(x<trav->data)
			{
				if(trav->left==NULL)
				{
					trav->left=temp;
					break;
				}
				trav=trav->left;
			}
			else
			{
				if(trav->right==NULL)
				{
					trav->right=temp;
					break;
				}
				trav=trav->right;
			}
		}
	}
	return root;
}


void preorder(node *root)
{
	if(root!=NULL)
	{
		
		cout<<root->data<<endl;;
		preorder(root->left);
		preorder(root->right);
	}
}

void mini()
{
	trav=root;
	while(trav->left!=NULL)
	{
		trav=trav->left;
	}
	cout<<"minimum value is= "<<trav->data<<endl;
}

void max1(node *root)
{
        node *trav;
	trav=root;
	while(trav->right!=NULL)
	{
		trav=trav->right;
	}
	cout<<"maximum value is="<<trav->data<<endl;
}

void search()
{
	int key;
	node*trav;
	int flag=0;
	cout<<"Enter the key you want to search: ";
	cin>>key;
	trav=root;
	while(trav!=NULL)
	{
		if(trav->data==key)
		{
			flag=1;
			break;
		}
		else
		{
			if(key<trav->data)
			trav=trav->left;
			if(key>trav->data)
			trav=trav->right;
		}
	}
		
	if(flag==1)
	cout<<"Key is found."<<endl;
	else
	cout<<"Not found."<<endl;
	trav=root;
}

int height(node*root)
{
	if (root==NULL)
        return 0;
    	else 
    	{
        
        	int left_height = height(root->left);
        	int right_height =height(root->right);
        	return 1+ max(left_height,right_height);

	}
}

void mirror(node*root)
{
	node*temp;
	if(root!=NULL)
	{
		mirror(root->left);
		mirror(root->right);
		temp=root->left;
		root->left=root->right;
		root->right=temp;
	}	
}

};

int main()
{
	tree t;
	node *root;
	int ch,h;
	do
	{
		cout<<"::::::::::MENU::::::::::"<<endl;	
		cout<<"1.create\n2.display\n3.minimum\n4.maximum\n5.height\n6.search\n7.mirror\n8.exit"<<endl;
		
		cout<<"enter ur choice "<<endl;	
		cin>>ch;
	
		switch(ch)
		{
			case 1:
				root=t.create_bst();
				break;
				
			case 2:
			        t.preorder(root);
			        break;
			        
			case 3:
				t.mini();
				break;
			
			case 4:
				t.max1(root);
				break;
				
			case 5:
				h=t.height(root);
				cout<<"Height is="<<h<<endl;
				break;
				
			case 6:
				t.search();
				break;
				
			case 7:
				t.mirror(root);
				break;
				
			
		}
		
	}while(ch!=8);
	
	return 0;
}	
