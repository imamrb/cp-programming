
#include<bits/stdc++.h>
using namespace std;
#define Max 100005

int BIT[Max], A[Max], n;

void update(int x, int val) //Adding value in index x
{
      for(; x <=n; x += x&-x){
        BIT[x] += val;
      }
}
int query(int x)
{
     int sum = 0;
     for(; x>0; x -= x&-x)
        sum += BIT[x];
     return sum;
}
//Bit Algo finishes here
int main()
{
    int T, t, q, i, j, v;

    scanf("%d", &T);
    for(t=1; t<=T; t++){
        scanf("%d %d", &n, &q);

        for(i=1; i<=n; i++){
            scanf("%d", &A[i]);
            update(i, A[i]);
        }
        printf("Case %d:\n", t);

        while(q--){
            int type;
            scanf("%d", &type);

            switch(type){
                case 1:
                    scanf("%d", &i);
                    ++i;
                    printf("%d\n", A[i]);
                    update(i, -A[i]);
                    A[i] = 0;
                    break;
                case 2:
                    scanf("%d %d", &i, &v);
                    ++i;
                    update(i, v);
                    A[i] += v;
                    break;
                case 3:
                    scanf("%d %d", &i, &j);
                    ++i; ++j;
                    printf("%d\n", query(j) - query(i-1));
                    break;
            }
        }
        memset(BIT, 0, sizeof(BIT));
        memset(A, 0, sizeof(A));;
    }
    return 0;
}
