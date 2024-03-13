#include<iostream>
#include<string>

using namespace std;

class account{
    string name;
    int account_no;
    int balance;
}a[100];

int c=-1;

void add_account();
void delete_account();
void update_account();
void display_detail();
void print_detail();

void add_account(){
    c++;
    int temp,t=0;
    cout<<"enter account id:";
    cin>>temp;
    for(int i=0;i<c;i++){
        
    }

}

int main(){
    while(1){
        cout<<"1.add account "<<endl<<"2.delete account"<<endl<<"3.update account"<<endl<<"4.display account by account number"<<endl<<"5.exit"<<Endl;
        cout<<"enter a number:";
        int n;
        cin>>n;


        switch(n){
            case 1:
            add_account();
            break;

            case 2:
            delete_account();
            break;

            case 3:
            update account();
            break;

            case 4:
            display();
            break;

            case 5:
            break;

            default:
            cout<<"enter valid number\n:";
        }
        if(n==5){
            break;
        }
    }
    print_detail();
    return 0;
}

