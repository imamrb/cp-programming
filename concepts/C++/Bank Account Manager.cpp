#include <bits/stdc++.h>
using namespace std;

class Account
{
    int acc_no;
    double bal;
    string name, type;
public:
    Account(){ };
    Account(string s, int n, string t){
      name = s;
      type = t;
      acc_no = n;
      bal = 0;
    }
    void deposite(double d);
    void withdraw();
    void display(){
        cout<<"Account name: "<<name<<endl;
        cout<<"Account number: "<<acc_no<<endl;
        cout<<"Account type: "<<type<<endl;
        cout<<"Account Balance: "<<bal<<endl;
    }
};

void Account::deposite(double d){
    bal+=d;
    cout<<"\n***You have successfully added the money into your account***\n";
    cout<<"Your new account balance is: "<<bal<<"$\n"<<endl;
}
void Account::withdraw(){
    double amount;
    if(bal>=500){
        cout<<"Your current account balance is: "<<bal<<endl;
        again:
        cout<<"Enter amount to withdraw : ";
        cin>>amount;
        if(amount>bal) {
                cout<<"\t**Sorry! You have not enough balance. :(**\n\tTry again!\n";
                goto again;
        }
        else{
            bal-=amount;
            cout<<"**You have successfully withdrawn "<<amount<<"$**\n.";
            cout<<"Your current balance is: "<<bal<<"$"<<endl;
        }
    }
}

int main()
{
    int n, m, user_id=0, choose, i;
    string name, t;
    Account user[5000];
    do{
    Menu:
    cout<<"\nWhat would you like to do? ";
    cout<<"\n\t1.Open a new account\n\t2.Access account information\n\t3.Manage Account\n\t4.Exit\nEnter choice: ";
    cin>>choose;
    if(choose==1){
            ++user_id;
            i = user_id;
            cout<<"\n****Welcome User: "<<i<<"***\n";
            cout<<"Enter account name: ";
            cin>>name;
            cout<<"Enter account no: ";
            cin>>n;
            cout<<"Enter account type: ";
            cin>>t;
            user[i]= Account (name, n, t);
            cout<<"\n***Congratulations! You have successfully created your account***\n";
            user[i].display();
            manage:
            cout<<"\nWhat would you like to do?\n";
            cout<<"\t1.Deposite an amount\n\t2.Withdraw an amount\n\t3.Show account information\n\t4.Goto main menu \n\t5.Exit\n";
            int choice;
            do{
                cout<<"\n\tEnter choice: ";
                cin>>choice;
                if(choice==1){
                    double dp;
                    cout<<"Enter the amount to deposite:";
                    cin>>dp;
                    user[i].deposite(dp);
                }
                else if(choice==2){
                    user[i].withdraw();
                }
                else if(choice==3) user[i].display();
                else if(choice==4){
                    goto Menu;
                }
                else{ cout<<"Exiting.......>>\n"; break;}
            }while(choice!=5);
        }
        else if(choose==2){
            int id;
            cout<<"Enter User id: ";
            cin>>id;
            cout<<"\n\t***User "<<id<<"***"<<endl;
            user[id].display();
        }
        else if(choose==3){
            int id;
            cout<<"Enter user id: ";
            cin>>id;
            i = id;
            goto manage;
        }
        else { cout<<"Exiting.......>>\n"; break;}
    }while(choose!=4);

    return 0;
}
