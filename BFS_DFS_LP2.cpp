# include<iostream>
# include<stack>
#include<queue>
#include<vector>
using namespace std;

vector<bool> visit;

void edge(vector<int> adj[],int u,int v)
{
	adj[u].push_back(v);
}
void BFS(int source,vector<int> adj[])
{
	queue<int> Q;
	Q.push(source);
	visit[source]=true;
	while(!Q.empty())
	{
		int u=Q.front();
		cout<<" "<<u;
		Q.pop();
		for(int i=0;i<adj[u].size();i++)
		{
			if(!visit[adj[u][i]])
			{
				Q.push(adj[u][i]);
				visit[adj[u][i]]=true;
			}
		}
	}
}

void DFS(int source,vector<int> adj[])
{
	stack<int> St;
	St.push(source);
	visit[source]=true;
	while(!St.empty())
	{
		int u=St.top();
		cout<<u<<" ";
		St.pop();
		for(int i=0;i<adj[u].size();i++)
		{
			if(!visit[adj[u][i]])
			{
				St.push(adj[u][i]);
				visit[adj[u][i]]=true;
			}
		}
	}
}
int main()
{
	int n,e;
	int u,v;
	
	cout<<"\nEnter the number of vertices: ";
	cin>>n;
	cout<<"\nEnter the number of edges: ";
	cin>>e;
	
	vector<int> adj[n];
	visit.assign(n,false);
	
	cout<<"\nEnter the source and destination of each vertex edge pair: ";
	for(int i=0;i<e;i++)
	{
		cout<<"\nEnter the source: ";
		cin>>u;
		cout<<"\nEnter the destination: ";
		cin>>v;
		cout<<"\nnEdge from "<<u<<" to "<<v;
		edge(adj,u,v);
	}
	
	int start;
	int ch;
	do{
		cout<<"\n-----Menu--------";
		cout<<"\n1.BFS ";
		cout<<"\n2.DFS ";
		cout<<"\n3.Exit ";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter the starting vertex of BFS sequence: ";
				cin>>start;
				BFS(start,adj);
				break;
			case 2:
				visit.assign(n,false);
				cout<<"\nEnter the starting vertex for DFS sequence: ";
				cin>>start;
				DFS(start,adj);
				break;
			case 3: 
				break;
			default:
				cout<<"Invalid Choice";
				break;
			
		}
	}while(ch!=3);
	return 0;
}


