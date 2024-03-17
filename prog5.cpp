//get student name and marks as input and sort the list as per the total marks

#include<iostream>
#include<string>

using namespace std;

class student
{
    string name;
    int a[5];
    int total=0;

    public :

    void get_data();
    void put_data();
    void sort(student *s[],int n);
    void find_total(){
        for(int i=0;i<5;i++){
            total+=a[i];
        }
    }
};

void student::get_data()
{
    cout<<"enter name of the student:";
    cin>>name;
    cout<<"enter marks of 5 subjects:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
}

void student::put_data()
{
    cout<<"name :"<<name<<endl;
    cout<<"marks of 5 subject is : ";
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    cout<<"total marks is :"<<total;
}

void student::sort(student * s[] ,int n)
{
    student *a;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(s[i]->total>s[j]->total){
                a=s[i];
                s[i]=s[j];
                s[j]=a;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"enter a number of how many students detail you want to enter: ";
    cin>>n;

    student s[n];

    for(int i=0;i<n;i++){
        s[i].get_data();
    }

    for(int i=0;i<n;i++){
        s[i].find_total();
    }

    student *p=&s[];
    s[0].sort(p,n);

    for(int i=0;i<n;i++){
        s[i].put_data();
    }

}