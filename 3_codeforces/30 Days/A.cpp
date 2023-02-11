/* Imam Hossain Santho
    Noakhali Science & Technology University
*/
#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, i, j;
    string s;
    string in = "ACTG";
    cin>>n>>s;
    int Min = (int)1e9 + 5;
    for(i=0; i<n-3; i++){
        int sum = 0, k = 0;
        for(j=i; j<i+4; j++){
            int c = abs(in[k] - s[j]);
            int b = abs(s[j]-'A') + abs('Z' - in[k]) + 1;
            int d = abs(s[j] - 'Z') + abs('A' - in[k]) + 1;
            sum += min(c, min(b, d));
            k++;
        }
        Min = min(Min, sum);
    }
    cout<<Min<<endl;

    return 0;
}
