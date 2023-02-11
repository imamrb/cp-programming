#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, Mx1,Mx2, Mn1,Mn2, result1,result2, result, i, l, r;
    vector<int> l1,l2,r1,r2;

    cin>>n;
    for(i=0; i<n; i++){
        cin>>l>>r;
        l1.push_back(l);
        r1.push_back(r);
    }
    cin>>m;
    for(i=0; i<m; i++){
        cin>>l>>r;
        l2.push_back(l);
        r2.push_back(r);
    }
    Mx1 = *min_element(r1.begin(), r1.end());
    Mn1 = *max_element(l2.begin(), l2.end());
    if(Mx1>=Mn1) result1 = 0;
    else result1 = Mn1 - Mx1;
    Mx2 = *max_element(l1.begin(), l1.end());
    Mn2 = *min_element(r2.begin(), r2.end());
    if(Mn2>=Mx2) result2 = 0;
    else result2 = Mx2 - Mn2;

    result = max(result1, result2);

    cout<<result<<endl;

    return 0;
}
