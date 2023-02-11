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

    int h1, m1, h2, m2, h, m;
    char ch;

    cin>>h1>>ch>>m1;
    cin>>h2>>ch>>m2;

    m = 0;
    if(h1==h2) m = m2 - m1;
    else {
        m += (60-m1)+m2;
        m += ((h2-h1)*60);
        m-=60;
    }

    m/=2;

    h = (m/60);
    h+=h1;
    m%=60;
    m+=m1;
    if(m>=60) {m-=60; h++;}
    h%=24;

    cout << setfill('0') << setw(2) << h<<":"<<setfill('0') << setw(2) <<m<<endl;

    return 0;


}
