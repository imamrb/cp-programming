#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a, b, Max, Min, f2, j;
    char t1,t2;
    cin>>n>>k>>a>>b;

    if(a==0 || b==0) {cout<<"NO"<<endl; return 0;}
    if(a>=b) t1 = 'G', t2='B', Max = a, Min = b;
    else t1='B', t2='G', Max=b, Min =a;

    f2 = Min/k;
    if(f2==0) f2 = 1;
    else if(f2>k) f2 = 1;

    string tea;
        int total = 0;
        int check = 1;
        int check2 = 0;
        while(total<n){
            if(Max==0) {check = 0; break;}
            if(tea[tea.length()]!=t1){
                for(j=0; j<k; j++){
                    if(total<n && Max>0) {tea+=t1; total++; Max--;}
                    else break;
                }
            }
            else {check = 0; break;}
            for(j=0; j<f2; j++){
                if(total<n && Min>0) {tea+=t2; total++; Min--;}
                else break;
            }
        }
    if(check==0) cout<<"NO"<<endl;
    else cout<<tea<<endl;

    return 0;
}
