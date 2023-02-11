#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Max 200005

int A[Max], B[Max], BIT[Max], n;

void update(int x, int val) //Adding value in index x
{
      for(; x <=n; x += x&-x){
        BIT[x] += val;
      }
}
ll query(int x){
     ll sum = 0;
     for(; x>0; x -= x&-x)
        sum += BIT[x];
     return sum;
}
int main()
{
    int t, i;

    cin>>t;
    while(t--){
        memset(BIT, 0, sizeof(BIT));
        cin>>n;
        for(i=0; i<n; i++){
            cin>>A[i];
            B[i] = A[i]; // B is the copy of array A
        }
        sort(B, B+n); //sort array B
        for(i=0; i<n; i++){
            int pos = (int)(lower_bound(B, B+n, A[i]) - B);
            A[i] = pos + 1; //Replace the value of A using its index in the sorted array B
        }
        ll inv_count = 0;
        for(int i=n-1; i>=0; --i){
            ll freq = query(A[i]);
            inv_count += freq;
            update(A[i], 1);
        }

        cout<<inv_count<<endl;
    }
}
