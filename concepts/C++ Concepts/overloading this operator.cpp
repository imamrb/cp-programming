#include <bits/stdc++.h>
using namespace std;
class person
{
    int age;
    string name;
public:
    person (){ }
    person (string n, int z){name = n; age = z; }
    person Greater(person);
    void display(){
        cout<<"Elder Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
person person :: Greater(person z)
{
    if(z.age>=age) return z;
    else return *this;
}
int main()
{
    person p1, p2, Max;

    p1 = person("Abul", 10);
    p2 = person("Kabul", 20);
    Max = p1.Greater(p2);
    Max.display();
}
