#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    LL t, n, k, x, i, a;

    cin>>t;
    vector<LL> v;
    multiset< pair<string, LL> > st;
    while(t--){
        cin>>n;

        for(i=0; i<n; i++) {cin>>a; v.pb(a);}
        cin>>k>>x;
        string binx = bitset<32>(x).to_string();
        LL ln = 31;
        for(i=0; i<32; i++) if(binx[i]=='1'){ ln=i; break; }

        LL sum = 0;
        for(i=0; i<n; i++){
            string s = bitset<32>(v[i]).to_string();
            s = s.substr(ln, 31);
            st.insert({s, v[i]});
            sum += v[i];
        }
//        for(auto it: st) cout<<it.first<<" "<<it.second<<endl;
        LL Max = sum;
        vector<LL> rem;
        while(1){
            LL cnt = 0;
            auto it2 = st.begin();
            for(auto it: st){
                sum -= it.second;
                long long d = (it.second)^x;
                rem.pb(d);
                sum += d;
                cnt++;
                if(cnt==k) break;
            }
            if(sum>Max) Max = sum;
            else break;
            //Re-Initialize
            advance(it2, k);
            st.erase(st.begin(), it2);
            for(auto it: rem){
                string s = bitset<32>(it).to_string();
                s = s.substr(ln, 31);
                st.insert({s, it});
            }
            rem.clear();
        }
        cout<<Max<<endl;
        v.clear();
        st.clear();
    }
    return 0;
}
