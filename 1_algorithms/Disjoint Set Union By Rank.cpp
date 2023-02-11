#include<bits/stdc++.h>
using namespace std;
#define mx 10000
vector<int> Rank(mx), p(mx);

void makeset(int n){
    for(int i=0; i<n; i++) p[i] = i;
    Rank.assign(n, 0);
}
int Find(int x){
    if(p[x]==x) return x;
    else return p[x] = Find(p[x]);
}
void Union(int a, int b){
    int u = Find(a);
    int v = Find(b);
    if(u!=v){
        if(Rank[u]>Rank[v]) p[v] = u;
        else{
            p[u] = v;
            if(Rank[u]==Rank[v]) Rank[v]++;
        }
    }
}
int main()
{
    makeset(mx);

    printf("=======Before Union======\n");
    for(int i=0; i<5; i++){
        printf("Find(%d) = %d\t Rank[%d] = %d\n", i, Find(i), i, Rank[i]);
    }
    Union(0,1);
    Union(2,3);
    Union(4,3);
    printf("=======After Union======\n");
    for(int i=0; i<5; i++){
        printf("Find(%d) = %d\t Rank[%d] = %d\n", i, Find(i), i, Rank[i]);
    }
    return 0;
}
