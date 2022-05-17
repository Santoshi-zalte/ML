#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

vector<bool>visit;
void edge(vector<int>adj[],int u,int v)
{
  adj[u].push_back (v);
}
void bfs(int s,vector<int>adj[])  //Take the empty queue and bool type array (visit) initialise with FALSE.
// Push the starting node in the queue and set the value TRUE for this node in visited array.
// Pop out the front node of the queue and print the node.
// Push the adjacent node of pop node in queue which are not visited. Set the value TRUE in visited array of  adding node.
// Repeat step 3 and 4 until the queue becomes empty.
{
    queue<int>q;
    q.push(s);
    visit[s]=true;
    while(!q.empty())
 {
    int u=q.front();
    cout<<u<<" ";
    q.pop();
    for(int i=0;i<adj[u].size();i++)
    {
    if(!visit[adj[u][i]])
    {
    q.push(adj[u][i]);
    visit[adj[u][i]]=true;
    }
    }
 }
}
void dfs(int s,vector<int>adj[])
{
    stack<int>stk;
    stk.push(s);
    visit[s]=true;
    while(!stk.empty())
   {
    int u=stk.top();
    cout<<u<<" ";
    stk.pop();
    for(int i=0;i<adj[u].size();i++)
    {
    if(!visit[adj[u][i]])
    {
    stk.push(adj[u][i]);
    visit[adj[u][i]]=true;
    }
    }
  }
}
int main()
{
  int e,n;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>e;
    visit.assign(n,false);
    vector<int>adj[n];
    int u,v,i;
    cout<<"\n Enter the edges with source and target vertex:\n";
    for(i=0;i<e;i++)
    {
    cin>>u>>v;
    edge(adj,u,v);
    }
    cout<<"BFS traversal is"<<" ";
    bfs(0,adj);
    cout<<endl;
    visit.assign(n,false);
    cout<<"DFS traversal is"<<" ";
    cout<<" ";
    dfs(0,adj);
    cout<<endl;
}




