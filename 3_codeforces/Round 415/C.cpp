#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x;
    cin>>n;

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    PowerSet(arr, n);
}
int PowerSet(int arr[], int n)
{
    int d =
    for (int i = 0; i < (int) pow(2, n); i++)
    {
        string subset = "";

        // consider each element in the set
        for (int j = 0; j < n; j++)
        {
            // Check if jth bit in the i is set. If the bit
            // is set, we consider jth element from set
            if ((i & (1 << j)) != 0)
                subset += to_string(arr[j]) + "|";
        }
}
