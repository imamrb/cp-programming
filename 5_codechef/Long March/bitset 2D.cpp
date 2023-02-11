#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define All(a)          a.begin(), a.end()
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
    bitset<8> bs(5);

    int result = bs.count(); //count number of on bits
    string s = bs.to_string();
    cout<<s<<" "<<result<<endl;

    s = bs.to_string('X', '*'); //replace 0 and 1 with X and *
    cout<<s<<endl;

    int num = (int) bs.to_ulong();
    cout<<num<<endl<<endl;

    bs.reset();
    cout<<bs.any()<<endl; //returns true if at lest one bit is set

    bs = bitset<8>(255);
    cout<<"255 = "<<bs.to_string()<<endl;
    cout<<bs.all()<<endl; //returns true if all the bits are set
}
