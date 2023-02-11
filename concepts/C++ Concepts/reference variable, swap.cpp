/*1. Write a function using reference variables as arguments to swap the values of
 a pairs of integers?*/

#include <bits/stdc++.h>
using namespace std;
void myswap(int &a, int &b);
int main()
{
    int m=10, n =20;
    myswap(m, n);

    cout<<"m = "<<m<<" n = "<<n<<endl;
}
void myswap(int &a, int &b)
{
    int t = b;
    b = a;
    a = t;
}
