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

//complete later
int main()
{
    IOS;
    maxSubRect = -127*100*100; // the lowest possible value for this problem
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) // start coordinate
            for (int k = i; k < n; k++)
                for (int l=j;l<n;l++) { // end coord
                    subRect = 0; // sum the items in this sub-rectangle
                    for (int a = i; a <= k; a++)
                        for (int b = j; b <= l; b++)
                            subRect += A[a][b];
                                maxSubRect = max(maxSubRect, subRect);
                } // the answer is here
}
