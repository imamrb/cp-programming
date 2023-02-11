#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e3+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int lcs[MAX][MAX]; //array dimension should be n*m
string ans, a, b;

void printlcs(int i, int j){
    if(i==0 || j==0) ans="";
    else if(a[i]==b[j]) {
            printlcs(i-1, j-1); //recurse to diagonal
            ans+=a[i]; //add result after recursion
    }
    else if(lcs[i][j]==lcs[i-1][j]) printlcs(i-1, j);
    else printlcs(i, j-1);
}
int LCS(string &a, string &b){

    int n = a.length();
    int m = b.length();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 || j == 0) lcs[i][j] = 0;
            else if(a[i]==b[j]) lcs[i][j] = 1 + lcs[i-1][j-1];
            else lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
    }
    return lcs[n-1][m-1];
}

int main()
{
    IOS;
    /*
       a = AGGTAB
       b = GXTXAYB
    */
    cin>>a>>b;
    a = "#"+a; //added extra character to make 0 based indexing
    b = "."+b;

    int Max_lcs = LCS(a, b);
    cout<<Max_lcs<<endl;

    int n = a.length();
    int m = b.length();
    printlcs(n, m);
    cout<<ans<<endl;

    //lcs table
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<lcs[i][j]<<" ";
        }
        cout<<endl;
    }
}
