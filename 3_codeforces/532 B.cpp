#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<pair<int, int> > v;
    int n, m, i, j, a;

    scanf("%d %d", &n, &m);
    vector<int> fq(n+1, 0);

    v.push_back(make_pair(0,0));

    for(i=1; i<=m; i++){
        scanf("%d", &a);
        fq[a]++;
        v.push_back(make_pair(a, i));
    }
    sort(v.begin(), v.end());

    int Min = *min_element(fq.begin()+1, fq.end());

    int arr[m+1] = {0};

    for(i=1; i<=Min; i++){
        int index = 0;
        for(j=i; j<=m; ){
            index = max(index, v[j].second);
            j+=(fq[v[j].first]);
        }
        arr[index] = 1;
    }
    for(i=1; i<=m; i++){
        printf("%d", arr[i]);
    }
    cout<<endl;
    return 0;
}
