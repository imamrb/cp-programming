#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, m;
    vector<int> arr(20, 0), v;

    for(int i=0; i<6; i++) {
            scanf("%d", &x);
            arr[x]++;
    }
    m = *max_element(arr.begin(), arr.end());
    if(m>=4){
        m = max_element(arr.begin(), arr.end()) - arr.begin();
        arr[m]-=4;
        for(int i=0; i<10; i++){
            if(arr[i]==1 || arr[i]==2){
                v.push_back(i);
            }
        }
        int y = *max_element(v.begin(), v.end());
        int z = *min_element(v.begin(), v.end());
        if(y==z) cout<<"Elephant"<<endl;
        else cout<<"Bear"<<endl;
    }
    else cout<<"Alien"<<endl;

    return 0;
}
