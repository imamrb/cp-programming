#include<bits/stdc++.h>
using namespace std;
int arr[5][5] = {0};
string g = "RGB";
string  s;
int findMax(){
    int Max = -1, result;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]>Max) {
                Max = arr[i][j];
                result = j;
            }
            else if(arr[i][j]==Max && result!=j && Max!=-1){
                int f1 = s.find(g[result]);
                int f2 = s.find(g[j]);
                if(f1==-1 && f2!=-1) result = f2;
                else if(f2==-1 && f1!=-1) result = f1;
                else{
                    if(f1<f2) result = f1;
                    else if (f2>f1) result = f2;
                }
                cout<<f1<<" "<<f2<<endl;
            }
        }
    }
    return result;
}
int main()
{
    int n, i, j;


    cin>>n>>s;
    for(i=0; i<3; i++){
        for(j=i; j<n; j+=3){
            if(s[j]=='R') arr[i][0]++;
            else if(s[j]=='G') arr[i][1]++;
            else arr[i][2]++;
        }
    }
    int cnt = 0;
    for(i=0; i<3; i++){
        int index = findMax();
        arr[0][index] = -1;
        arr[1][index] = -1;
        arr[2][index] = -1;
        if(s[i]!=g[index]) cnt++;
        s[i] = g[index];
    }
    for(i=0; i<3; i++){
        for(j=i+3; j<n; j+=3){
            if(s[j]!=s[i]){
                s[j] = s[i];
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    cout<<s<<endl;

    return 0;

}
