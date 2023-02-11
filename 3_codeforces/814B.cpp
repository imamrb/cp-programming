#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c, n, i;
    cin>>n;
    vector<int> a(n+1), b(n+1), p, arr(n+1, 0), arr2(n+1, 0);

    for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
            arr[a[i]]++;
    }
    for(i=0; i<n; i++) {
            scanf("%d", &b[i]);
            arr2[b[i]]++;
            if(a[i]!=b[i]) p.push_back(i);
    }
    int x = 0, y = 0;
    for(i=1; i<=n; i++){
        if(arr[i]==0) x=i;
        if(arr2[i]==0) y=i;
    }
    if(p.size()==1) a[p[0]] = x;
    else if(b[p[0]]==x && a[p[1]]==y) a[p[0]]=x;
    else if(b[p[1]]==x && a[p[0]]==y) a[p[1]] = x;

    for(i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
