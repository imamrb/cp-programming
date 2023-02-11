#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, k, a, i, j;
    string s;

    cin>>n>>k;
    vector<long long> v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>s;

    long long  sum = 0;
    for(i=0; i<n; i++){
        if(i<n-1 && s[i]==s[i+1]){
            long long st = i, en = i;
            while(i<n-1&& s[i+1]==s[i]){
                en++;
                i++;
            }
            sort(v.begin()+st, v.begin()+en+1, greater<int>());

            for(j=st; j<=en && (j-st)<k; j++){
                sum+= v[j];
            }
        }
        else sum+=v[i];
    }
    cout<<sum<<endl;
    return 0;
}
