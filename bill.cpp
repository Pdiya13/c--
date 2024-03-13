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
        cin>>name;
        //getline(cin,name);
        cout<<"Enter Item count: ";
        cin>>item_count;
        cout<<"Enter Price";
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
    
    // while(1)
    // {
    //     cout<<"1.Add item"<<endl<<"2.Display all items"<<endl<<"3.Apply tip"<<endl<<"4.Display Bill"<<endl<<"5.exit"<<endl;
    //     cout<<"enter a number:";
    //     int n;
    //     cin>>n;

    //     switch(n){
    //         case 1:
    //         add_item();
    //         break;

    //         case 2:
    //         display_all_items();
    //         break;

    //         case 3:
    //         apply_tip();
    //         break;

    //         case 4:
    //         display_bill();
    //         break;

    //         case 5:
    //         break;

    //         default:
    //         cout<<"enter valid number between 1-5 :";
    //     }

    //     if(n==5){
    //         exit();
    //     }
     //}
    return 0;

}
