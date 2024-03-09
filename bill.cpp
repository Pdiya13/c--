#include<iostream>
#include<string>
using namespace std;

class bill
{
    int item_count;
    string name;
    float price;
    float tax_percent=10;
    
    public :
    void getdata()
    {
        cout<<"Enter Item Name: ";
        getline(cin,name);
        cout<<endl<<"Enter Item count: ";
        cout<<endl<<"Enter Price";
        cin>>item_count;
        cin.ignore();
        cin>>price;
        price*=item_count;
        price*=0.1;
    }
    
    void enter_details()
    {
        cout<<name<<"\t"<<item_count<<"\t\t"<<price<<endl;
    }
};

int main()
{
    int  n;
    cout<<"Enter Number of Different Products: ";
    cin>>n;
    
    bill *ptr=(bill *)malloc(n*sizeof(bill));
    
    for(int i=0;i<n;i++)
    {
        ptr[i].getdata();
    }
    
    while(1)
    {

    }
    return 0;
}

