#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[11], i;

    for(i=1; i<=10; i++){
        scanf("%d", &num[i]);
    }
    for(i=1; i<=10; i++) printf("%d ", num[i]*2 );
}
