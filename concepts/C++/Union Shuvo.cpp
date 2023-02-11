#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
int p[MAX];
void makeset(int n)
{
    p[n]=n;
}
int Find(int r)
{
    if(p[r]==r) return r;
    return p[r]=Find(p[r]);
}
void Union(int a,int b)
{
    int u=Find(a);
    int v=Find(b);
    if(u==v) cout<<"Friends";
    else p[u]=v;
}
int main()
{
    int N,u,v;
    map<int,int>mymap;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>u>>v;
        if(mymap.find(u)==mymap.end()){
            makeset(u);
            mymap[u]=1;
        }
        if(mymap.find(v)==mymap.end()){
            makeset(v);
            mymap[v]=1;
        }
        Union(u,v);
    }
    cout<<Find(p[1])<<Find(p[2])<<Find(p[3])<<Find(p[4])<<Find(p[5]);
    return 0;
}
