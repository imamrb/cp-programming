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

int main()
{
    IOS;
    int n = 9, A[] = { 4, -5, 2, -3, 4, 4, -4, 4, -5 };
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
        ans = max(ans, sum);
        if (sum < 0) sum = 0; // we reset the running sum
    }
    printf("Max 1D Range Sum = %d\n", ans);
}
