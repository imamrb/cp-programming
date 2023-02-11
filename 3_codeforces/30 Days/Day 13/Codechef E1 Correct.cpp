#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         all(a), greater<int>()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)5
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main()
{
    IOS;
    int T, x0, y1, y2, x1, x2, d1, d2, d3, d4, d;

    cin>>T;
    while(T--){
        printf("Q %d %d\n", 0, 0); fflush(stdout);
        scanf("%d", &d1);
        printf("Q %d %d\n", MAX, 0); fflush(stdout);
        scanf("%d", &d2);
        x0 = (d1 - d2 + MAX)/2;
        printf("Q %d %d\n", x0, 0); fflush(stdout);
        scanf("%d", &d);
        y1 = d;
        x1 = d1 - y1;

        //x2 y2
        printf("Q %d %d\n", 0, MAX); fflush(stdout);
        scanf("%d", &d3);
        printf("Q %d %d\n", MAX, MAX); fflush(stdout);
        scanf("%d", &d4);
        x0 = (MAX + d3 - d4)/2;
        printf("Q %d %d\n", x0, MAX); fflush(stdout);
        scanf("%d", &d);
        y2 = MAX - d;
        x2 = 2*MAX - d4 - y2;

        printf("A %d %d %d %d\n", x1, y1, x2, y2);
        fflush(stdout);
        scanf("%d", &d);
    }
    return 0;
}
