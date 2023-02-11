#include<bits/stdc++.h>
using namespace std;
int n,q,two[5001][5001],one[5100];
vector<int>sec[5500];
void add(int l,int r,int id)
{
    for(int i=l;i<=r;i++) if(sec[i].size()<=3) sec[i].push_back(id);
}
int main()
{
    scanf("%d %d",&n,&q);
    for(int i=1;i<=q;i++)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        add(l,r,i);
    }
    int bad = 0;
    for(int i=1;i<=n;i++)
    {
        if(sec[i].size()<=2)
        {
            if(sec[i].size()==0) bad++;
            else if(sec[i].size()==1) one[sec[i][0]]++;
            else
            {
                two[sec[i][0]][sec[i][1]]++;
                two[sec[i][1]][sec[i][0]]++;
            }
        }
    }
    int mx = 0;
    for(int i=1;i<=q;i++)
    {
        for(int j=i+1;j<=q;j++)
        {
            int paint = n - bad - (two[i][j]+one[i]+one[j]);
            mx = max(mx,paint);
        }
    }

    cout<<mx<<endl;
}
