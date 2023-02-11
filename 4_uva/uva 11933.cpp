#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void Set(int n){
    while(n){
        v.push_back(n%2), n/=2;
    }
}
int main()
{
     int n;

     while(cin>>n && n){
        Set(n);
        int a = 0, b = 0;
        int s = v.size();
        int bit = 0;
        for(int i=0; i<s; i++){
            if(v[i]==1){
                bit++;
                if(bit%2) a |= (1<<i);
                else b |= (1<<i);
            }
        }
        printf("%d %d\n", a, b);
        v.clear();
     }

     return 0;
}
