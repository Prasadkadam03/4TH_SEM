#include<iostream>
#include<queue>
using namespace std;

int graph[10][10];
void DFS(int start,int n,int v[])
{	
	cout<<start<<"";
	v[start]=1;
	for(int i=0;i<=n;i++)
	{	if(graph [start][i]==1 && (!v[i]))
		{
			DFS(i,n,v);
		}
	}
}

void BFS(int s,int n)
{ int visit [n];
	for(int i=1;i<=n;i++)
		visit[i]=0;
		int v;
	queue<int>bq;
	if(visit[s]==0)
	{	
		bq.push(s);
		visit[s]=1;
		while(!bq.empty())
		{
			v = bq.front();
			for(int i=1;i<=n;i++)
			{	if(graph[v][i]=1 && visit[i]==0)
				{	visit[i]=1;
					bq.push(i);
				}
			}
			bq.pop();
			cout<<v;
		}	
	}
}
		
int main()
{
	int visit[10];
	
	int n;
	cout<<"Enter the no. of nodes";
	cin>>n;
	for(int i=1;i<=n;i++)
	{	for(int j=1;j<=n;j++)
		{       cout<<"Edge  "<<i<<"to  "<<j<<"==";
			cin>>graph[i][j];
		}
	}
	int visits[n];
	for(int i=1;i<=n;i++)
	{
		visit[i]=0;
	}
	int source;
	cout<<"Enter source:";
	cin>>source;
	int ch;
	do{
		cout<<"\n----Menu------";
		cout<<"\n1.DFS \n2.BFS";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			DFS(source,n,visit);
			break;
			case 2:
			BFS(source,n);
			break;
		}
	}while(ch<3);
			
        return 0;
}
