#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

int pos[MAX];

void print_lis(int index, int A[]){

    stack<int> st; //LIFO
    st.push(A[index]);
    while(pos[index]!=-1){
        index = pos[index];
        st.push(A[index]);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
    IOS;
    int i, n, A[] = {-7, 10, 9, 2, 3, 8, 1, 2, 9, 5 , 2 , 4};
    n = (sizeof(A)/sizeof(A[0]));

    int lis[MAX];

    for(i=0; i<n; i++){ lis[i] = 1; pos[i] = -1; } //initialization
    int Max = 1, index;

    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(A[j]<A[i] && lis[i]<lis[j]+1) { //lis[8]<lis[7] + 1 so lis[8] = 3; again lis[8] < lis[5] + 1; so lis[8] = 4 +1;
                    lis[i] = lis[j] + 1;
                    pos[i] = j;
                    if(lis[i]>Max) { Max = lis[i]; index = i; }
            }
        }
    }
    cout<<"LIS = "<<Max<<endl;

    cout<<"Printing Sequence: "<<endl;
    print_lis(index, A);
}
