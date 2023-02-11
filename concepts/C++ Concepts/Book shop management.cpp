#include <bits/stdc++.h>
using namespace std;
typedef string st;
int Find_book(st title, st author);
void check(int i, int Copy);

class Books
{
    string author, title, publisher;
    int stock;
    double price;
public:
    Books() { };
    Books(st t, st a, st p, int s, double pr){
        author = a;
        title = t;
        publisher = p;
        stock = s;
        price = pr;
    }
    void display(){
        cout<<"Book name: "<<title<<endl;
        cout<<"Author's name: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"In stock: "<<stock<<endl;
    }
    friend void check(int i, int Copy);
    friend int Find_book(st title, st author);
};

Books *book[6];
int main()
{
    st author, title;
    cout<<"\t\t   ***Welcome to SS E-shop BD***\n";
    cout<<"\t\t***_Orginality is out priority_***\n\n";

    book[1] = new Books("Himu", "Humayun Ahmed", "Prothoma Publisher", 10, 300.00);
    book[2] = new Books("Harry Potter", "J.K. Rowling", "Blumsbury Publishing", 5, 1000);
    book[3] = new Books("Twilight", "Stephenie Meyer", "Little, Brown and Company", 8, 880);
    book[4] = new Books("Dipu Number 2", "Zafar Iqbal", "Mina Publishing", 20, 440);
    book[5] = new Books("Big Bang", "Simon Singh", "HarperCollins", 9, 680);

    cout<<"Please input the book name you want to buy: ";
    getline(cin, title);
    cout<<"Enter the author's name: ";
    getline(cin, author);
    if(Find_book(title, author)!=0){
        int k = Find_book(title, author);
        int n;
        cout<<"\n***The book is available now!**\nBook Details:\n";
        book[k]->display();
        cout<<"\nEnter the no. of copy you want to buy: ";
        cin>>n;
        check(k, n);
    }
    else cout<<"\nBooks not found! :(\n";

    return 0;
}
int Find_book(st title, st author)
{
    for(int i=1; i<6; i++){
        if(book[i]->title==title && book[i]->author==author) return i;
    }
    return 0;
}
void check(int i, int Copy)
{
    double total;
    if(book[i]->stock>=Copy){
        total = book[i]->price*Copy;
        cout<<"The estimated total cost: "<<total<<endl;
    }
    else{
        cout<<"Required copies not in stock"<<endl;
    }
}
