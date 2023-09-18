#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	int n,i,j,cost[10][10],min,visit[10],u,v,total=0,ne=1;
	int s;
	char city[10];
	cout<<"Enter the no of nodes";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter city:";
		cin>>city[i];
	}
	for(int i=1;i<=n;i++)
	{
		visit[i]=0;
	}
	
	cout<<"Weighted Graph is ";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<i<<j<<"==";
			cin>>cost[i][j];
			if(cost[i][j]==0)
			{
				cost[i][j]=999;
			}
		}
	}
	
	cout<<"Enter the source: ";
	cin>>s;
	
	visit[s]=1;
	
	while(ne<n)
	{
		min=999;
		for(i=1;i<=n;i++)
		{
			if(visit[i]==1)
			{
				for(j=1;j<=n;j++)
				{
					if(cost[i][j]<min && visit[j]==0)
					{
						min=cost[i][j];
						u=i;
						v=j;
					}
				}
			}
		}
		if(u!=v)  //cycle form otherwise
		{
			ne++;
			cout<<"\nedge=="<<u<<" to"<<v<<"=="<<min;
			visit[u]=visit[v]=1;
			total+=min;
		}
		cout<<"\nMinimum Cost="<<total;
	}
	return 0;
}





