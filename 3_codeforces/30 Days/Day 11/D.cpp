#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef vector<int> vi;
int fq[55]={0};
string s, in="210";
void change(int i, char ch){
    fq[s[i]]--;
    fq[ch]++;
    s[i] = ch;
}
int main()
{
    IOS;
    int n, i, a, j;

    cin>>n>>s;
    for(i=0; i<n; i++){
        fq[s[i]]++;
    }
    int d = n/3;
    if(fq['0']<d){
        for(i=0; i<n; i++){
            if(fq[s[i]]>d && fq['0']<d){
                change(i, '0');
            }
        }
    }
    if(fq['1']<d){
        int zero = 0;
        for(i=0; i<n; i++){
            if(s[i]=='0'){
                zero++;
                if(zero>d && fq[s[i]]>d && fq['1']<d){
                    change(i, '1');
                    --zero;
                }
            }
        }
        for(i=0; i<n; i++){
            if(s[i]=='2' && fq[s[i]]>d && fq['1']<d)
                change(i, '1');
        }
    }
    if(fq['2']<d){
        for(i=n-1; i>=0; i--){
            if(fq[s[i]]>d && fq['2']<d) change(i, '2');
        }
    }
    cout<<s<<endl;

    return 0;
}
