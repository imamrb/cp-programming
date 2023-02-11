#include <bits/stdc++.h>
using namespace std;

typedef string st;

int Find_book(st title, st author);
void check(int i, int Copy);
void access_info();
int Max;

class Books
{
    string author, title, publisher;
    int stock;
    double price;
public:
    Books() { };
    Books(st t, st a, st p, int s, double pr){
        author = a; title = t;
        publisher = p; stock = s; price = pr;
    }
    void display(){
        cout<<"Book name:   \t"<<title<<endl;
        cout<<"Author's name: \t"<<author<<endl;
        cout<<"Price: \t\t"<<price<<" tk"<<endl;
        cout<<"In stock: \t"<<stock<<endl;
    }
    friend void check(int i, int Copy);
    friend int Find_book(st title, st author);
    friend void access_info();
};

Books *book[10000];
int main()
{
    st author, title, pb;
    int index = 5, choice;
    Max = index;
    cout<<"\t\t   ***Welcome to SS E-shop BD***\n";
    cout<<"\t\t***_Orginality is our priority_***\n";
    book[1] = new Books("Himu", "Humayun Ahmed", "Prothoma Publisher", 10, 300.00);
    book[2] = new Books("Harry Potter", "J.K. Rowling", "Blumsbury Publishing", 5, 1000);
    book[3] = new Books("Twilight", "Stephenie Meyer", "Little, Brown and Company", 8, 880);
    book[4] = new Books("Dipu Number 2", "Zafar Iqbal", "Mina Publishing", 20, 440);
    book[5] = new Books("Big Bang", "Simon Singh", "HarperCollins", 9, 680);

    do{
        cout<<"\nWhat do you want to do?\n\t1.Buy Books\n\t2.Add Books\n\t3.Access book information\n\t4.Do nothing\n";
        cout<<"Enter Choice: ";
        cin>>choice;
        if(choice==1){
            getchar();
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
        }
        else if(choice==2){
            ++index;
            double pri; int st;
            cout<<"Enter Book name: ";
            getchar();
            getline(cin, title);
            cout<<"Enter author's name: ";
            getline(cin, author);
            cout<<"Enter publisher name: ";
            getline(cin, pb);
            cout<<"Enter books price: ";
            cin>>pri;
            cout<<"In stock: ";
            cin>>st;
            book[index] = new Books(title, author,pb, st, pri);
            Max = index;
        }
        else if(choice==3){
            access_info();
        }
        else {cout<<"\nExiting......\n"; break;}
    }while(choice<4);

    return 0;
}
int Find_book(st title, st author)
{
    for(int i=1; i<=Max; i++){
        if(book[i]->title==title && book[i]->author==author) return i;
    }
    return 0;
}
void check(int i, int Copy)
{
    double total;
    if(book[i]->stock>=Copy){
        total = book[i]->price*Copy;
        cout<<"The estimated total cost: "<<total<<" tk"<<endl;
        book[i]->stock -= Copy;
    }
    else{
        cout<<"\t*Sorry! Required copies not in stock.! :( "<<endl;
    }
}
void access_info()
{
    int index;
    for(int i=1; i<=Max; i++){
        cout<<i<<". "<<book[i]->title<<"\n";
    }
    cout<<"\nEnter the book index: ";
    cin>>index;
    if(index>Max) cout<<"\n*Book does not found, Input correct index! :( \n";
    else {
        cout<<"\n";
        book[index]->display();
    }
}
