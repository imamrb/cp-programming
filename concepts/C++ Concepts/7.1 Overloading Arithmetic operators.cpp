#include <bits/stdc++.h>
using namespace std;

class FLOAT
{
    float x;
public:
    FLOAT() { };
    FLOAT(float z) { x = z; }
    void operator-();
    FLOAT operator+(FLOAT);
    friend bool operator==(FLOAT, FLOAT);
    friend FLOAT operator*(FLOAT, FLOAT);
    friend FLOAT operator/(FLOAT, FLOAT);
    void display(){
        cout<<x<<endl;
    }
};
void FLOAT :: operator-() //
{
    x = -x;
}
FLOAT FLOAT :: operator+(FLOAT f) //1st FLOAT is return type, 2nd FLOAT is class name;
{
    return (x+f.x);
}
bool operator==(FLOAT a, FLOAT b)
{
    if(a.x==b.x) return true;
    else return false;
}
FLOAT operator*(FLOAT a, FLOAT b)
{
    return (a.x*b.x);
}
FLOAT operator/(FLOAT a, FLOAT b)
{
    return (a.x/b.x);
}
int main()
{
    FLOAT a, b, c;
    float i, j;
    cout<<"Input two numbers: ";
    cin>>i>>j;
    a = FLOAT(i);
    b = FLOAT(j);
    cout<<"Overloading == operator: ";
    if(a==b) cout<<"Both numbers are equal\n";
    else cout<<"The numbers are not equal\n";
    cout<<"\nOverloading + operator: ";
    c = a + b; //usual member function call syntax: c = a.operator+(b);
    c.display();
    cout<<"Overloading * Operator: ";
    c = a * b;
    c.display();
    cout<<"Overloading / Operator: ";
    c = a / b;
    c.display();
    cout<<"Overloading unary minus(-) in result: ";
    -c;
    c.display();

    return 0;
}
