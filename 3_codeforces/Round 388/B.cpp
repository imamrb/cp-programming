#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int arr[5][3];

    for(i=0; i<3; i++){
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    cout<<3<<endl;
    for(i=0; i<3; i++){
        if(arr[i][0]==0) printf("1 ");
        else printf("%d ", -arr[i][0]);
        if(arr[i][1]==0) printf("1\n");
        else printf("%d\n", -arr[i][1]);
    }

    return 0;
}
