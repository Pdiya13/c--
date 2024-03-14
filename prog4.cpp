//get input of students name and marks and sort the list as per the name
#include<iostream>
#include<string>

using namespace std;

class student
{
    string name;
    int a[5];

    public :

    void get_data()
    {
        cout<<"enter name of the student:";
        cin>>name;
        cout<<"enter marks of 5 subjects:";
        for(int i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
    
    void put_data()
    {
        cout<<"student name is : "<<name<<endl;
        cout<<"marks are:"<<endl;
        for(int i=0;i<5;i++){
            cout<<a[i]<<endl;
        }
    }

    void sort(student *a[],int n);
    
};

void student::sort(student *a[] ,int n)
{
    student * b;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]->name.compare(a[j]->name)>0){
                    b=a[i];
                    a[i]=a[j];
                    a[j]=b;
                }
            }
        }
    }


int main(){
    int n;
    cout<<"enter how many students detail you want to enter:";
    cin>>n;

    student *s[n];
    for(int i=0;i<n;i++)
    {
       s[i] = new student;
    }
    for(int i=0;i<n;i++)
    {
        s[i]->get_data();
    }
    s[0]->sort(s,n);

    for(int i=0;i<n;i++)
    {
        s[i]->put_data();
    }

}