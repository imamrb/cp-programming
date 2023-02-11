#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
V[]->adjacency matrix for storing graph
indegree[] -> array for storing dependancies of vertices
ans ->vector to store result

visited ->to keep track of vertices entered in the ans

Also One may point out that why are we decreasing  indegree of all the adjacent vertice to u simulateneously 
ans then calling Recursion???

Answer is we are removing the dependency of all the vertices on current vertex..
That's It!!!!






*/

void allTopo(vector<int>V[],int indegree[],int n,vector<int>&ans,bool visited[])
{
        if(ans.size()==n)
        {
                for(int i=0;i<ans.size();i++)
                        cout<<ans[i]<<" ";
                cout<<endl;
                return;
        }
        for(int i=0;i<n;i++)

                if(indegree[i]==0 && visited[i]==false)
                {
                        visited[i]=true;
                        ans.push_back(i);
                        for(int k=0;k<V[i].size();k++)
                                indegree[V[i][k]]--;

                        allTopo(V,indegree,n,ans,visited);

                        for(int k=0;k<V[i].size();k++)
                                indegree[V[i][k]]++;

                        visited[i]=false;
                        ans.pop_back();
                }

        return;
}
int main(void)
{
        int n;
        cin>>n;
        vector<int>V[n+6];
        int e;
        int x,y;
        int indegree[n]={};
        cin>>e;
        for(int i=0;i<e;i++)
        {
                cin>>x>>y;
                              V[x].push_back(y);
                indegree[y]++;
        }

        vector<int>ans;
        bool visited[n]={};
        allTopo(V,indegree,n,ans,visited);
        return 0;
}
                                                                                                  
