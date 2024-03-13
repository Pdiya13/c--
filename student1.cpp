#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

struct student{
    int id;
    char name[20];
    int marks[3];
    int total;
}s[100];

int c=-1;

void insert_detail();
void delete_detail();
void update_detail();
void print_detail();

void insert_detail(){
    c++;
    int temp,t=0;
    cout<<"enter id:";
    cin>>temp;
    for(int i=0;i<=c;i++){
        if(s[i].id==temp){
            t=-1;
            break;
        }
    }
    if(t==-1){
        cout<<"ID already exists"<<endl;
        return;
    }
    s[c].id=temp;
    cout<<"enter a name: ";
    cin.ignore();
    cin.getline(s[c].name,2000);
    cout<<"enter marks of 3 subjects:";
    for(int i=0;i<3;i++){
        cin>>s[c].marks[i];
    }
    s[c].total=0;
    for(int i=0;i<3;i++){
        s[c].total+=s[c].marks[i];
    }
}

void delete_detail(){
    cout<<"enter student id to be deleted:";
    int id;
    cin>>id;
    int t=0;
    for(int i=0;i<=c;i++){
        t++;
        if(s[i].id==id){
            if(c==0)
            {
                s[0].id=-1;
            }
            else
            {
                for(int j=i;j<=c;j++)
                {
                    s[j].id=s[j+1].id;
                    s[j].marks[0]=s[j+1].marks[0];
                    s[j].marks[1]=s[j+1].marks[1];
                    s[j].marks[2]=s[j+1].marks[2];
                    strcpy(s[j].name,s[j+1].name);
                    s[j].total=s[j+1].total;
                }
            }
            c--;
            break;
        }
    }
    if(t==0){
        cout<<"enter valid id number:"<<endl;
    }
}

void update_detail(){
    cout<<"enter student id to be updated: ";
    int id;
    cin>>id;
    int x;
    int t=0;
    
    for(int i=0;i<=c;i++){
        if(s[i].id==id){
            t++;
            cout<<"if you want to change name enter 1 otherwise enter 0 :";
            cin>>x;
            if(x==1){
                cout<<"enter new name :";
                cin.ignore();
                cin>>s[i].name;
            }
            cout<<"if you want to change marks enter 1 otherwise 0:";
            cin>>x;
            if(x==1){
                cout<<"enter new marks:";
                for(int j=0;j<3;j++){
                    cin>>s[i].marks[j];
                }
                s[i].total=0;
                for(int k=0;k<3;k++){
                    s[i].total+=s[i].marks[k];
                }
            }

        }
    }
    if(t==0){
        cout<<"enter valid id no:"<<endl;
    }
}

void print_detail(){
    for(int i=0;i<=c;i++)
    {
        cout<<"id:"<<s[i].id<<endl;
        cout<<"name:"<<s[i].name<<endl;
        cout<<"total marks:"<<s[i].total<<endl;
    }
}
int main(){
    while(1){
        cout<<"1.insert details"<<endl<<"2.deleting"<<endl<<"3.updating"<<endl<<"4.exit"<<endl;
        cout<<"enter a number:";
        int n;
        cin>>n;

        switch(n){
            case 1:
            insert_detail();
            break;

            case 2:
            delete_detail();
            break;

            case 3:
            update_detail();
            break;

            case 4:
            break;

            default :
            cout<<"enter number between 1-4";
            
        }
        if(n==4)
        break;
    }
    print_detail();
    return 0;
}