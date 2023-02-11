#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             100
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef vector<int> vi;
int loboundx(int lo, int hi){
    int l = 0, m = MAX, v;
    do{
        int Mid = (l+m)/2;
        printf("Q %d %d\n", Mid, 0); fflush(stdout);
        scanf("%d", &v);
        if(v<=hi){ m = Mid; hi = v;}
        else if(v>hi){l=Mid; lo=v;}
    }while(l!=m);

    return m;

}
int loboundy(int lo, int hi){
    int l = 0, m = MAX, v;
    do{
        int Mid = (l+m)/2;
        printf("Q %d %d\n", 0, Mid); fflush(stdout);
        scanf("%d", &v);
        if(v<=hi){ m = Mid; hi = v;}
        else if(v>hi){l=Mid; lo=v;}
    }while(l!=m);

    return m;

}
int loboundx2(int lo, int hi){
    int l = 0, m = MAX, v;
    do{
        int Mid = (l+m)/2;
        printf("Q %d %d\n", Mid, MAX); fflush(stdout);
        scanf("%d", &v);
        if(v<=hi){ m = Mid; hi = v;}
        else if(v>hi){l=Mid; lo=v;}
    }while(l!=m);

    return m;

}
int loboundy2(int lo, int hi){
    int l = 0, m = MAX, v;
    do{
        int Mid = (l+m)/2;
        printf("Q %d %d\n", MAX, Mid); fflush(stdout);
        scanf("%d", &v);
        if(v<=hi){ m = Mid; hi = v;}
        else if(v>hi){l=Mid; lo=v;}
    }while(l!=m);

    return m;
}
int main()
{
    IOS;
    int T, d, lo, hi;

    cin>>T;
    while(T--){
        printf("Q %d %d\n", 0, 0); fflush(stdout);
        scanf("%d", &lo);
        printf("Q %d %d\n", MAX, 0); fflush(stdout);
        scanf("%d", &hi);
        int x = loboundx(lo, hi);
        printf("Q %d %d\n", 0, MAX); fflush(stdout);
        scanf("%d", &hi);
        int y = loboundy(lo, hi);

        //Top right
        printf("Q %d %d\n", MAX, MAX); fflush(stdout);
        scanf("%d", &lo);
        printf("Q %d %d\n", 0, MAX); fflush(stdout);
        scanf("%d", &hi);
        int x2 = loboundx2(lo, hi);

        //y2
        printf("Q %d %d\n", MAX, 0); fflush(stdout);
        scanf("%d", &hi);
        int y2 = loboundy2(lo, hi);

        printf("A %d %d %d %d\n", x, y, x2, y2);
        fflush(stdout);
        scanf("%d", &d);
    }
    return 0;
}
