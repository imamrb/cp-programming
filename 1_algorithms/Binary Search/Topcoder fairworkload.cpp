#include<bits/stdc++.h>
using namespace std;

int getMostWork(vector<int> folders, int workers){
    int n = folders.size();
    int lo = *max_element(folders.begin(), folders.end());
    int hi = accumulate(folders.begin(), folders.end(), 0);

    while(lo<hi){
        int x = lo + (hi-lo)/2;

        int required=1, current_load = 0;
        for(int i=0; i<n; i++){
            if(current_load+folders[i]<=x) current_load+=folders[i];
            else{
                ++required;
                current_load = folders[i];
            }
        }
        if(required<=workers)
            hi = x;
        else
            lo = x+1;
    }
    return lo;

}
int main()
{
    int n, m, i;
    vector<int> folders;

    cin>>n;
    for(i=0; i<n; i++){
        cin>>m;
        folders.push_back(m);
    }
    cin>>m;
    int result = getMostWork(folders, m);

    cout<<result<<endl;
}
