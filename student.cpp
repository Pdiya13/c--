<<<<<<< HEAD
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
=======
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

struct student{
    int id;
    char name[20];
    int marks[3];
    int total;
}s[100]={{15,"Diya",88,80,70,238},
         {16,"charmi",80,78,89,247},
         {17,"Archi",67,70,89,226},
         {18,"jasmita",68,89,91,248},
         {19,"eva",89,67,86,242},
};

int c=5;

void insert_detail();
void delete_detail();
void update_detail();
void print_detail();

void insert_detail(){
    c++;
    int temp,t=0;
    cout<<"enter id:";
    cin>>temp;
    for(int i=0;i<c;i++){
        if(s[i].id==temp){
            t=-1;
        }
    }
    if(t==-1){
        cout<<"ID already exists";
        c--;
        return;
    }
    s[c].id=temp;
    cin.ignore();
    cout<<"enter a name: ";
    cin>>s[c].name;
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
    for(int i=0;i<c;i++){
        if(s[i].id==id){
            t++;
            for(int j=i;j<c;j++){
                s[j].id=s[j+1].id;
                strcpy(s[j].name,s[j+1].name);
                for(int k=0;k<3;k++){
                    s[j].marks[k]=s[j+1].marks[k];
                }
                s[j].total=s[j+1].total;
            }
            s[c-1].id=-1;
            c--;
            break;
        }
    }
    if(t==0){
        cout<<"enter valid id number:";
    }
}

void update_detail(){
    cout<<"enter student id to be updated: ";
    int id;
    cin>>id;
    int x;
    int t=0;
    
    for(int i=0;i<c;i++){
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
        cout<<"enter valid id no:";
    }
}

void print_detail(){
    cout<<"enter student id to be updated:";
    int id;
    cin>>id;
    int t=0;
    for(int i=0;i<c;i++){
        if(s[i].id==id){
            t++;
            cout<<"student id :"<<s[i].id<<"\n"<<"name:"<<s[i].name<<"\n"<<"marks:"<<s[i].marks[0]<<s[i].marks[1]<<s[i].marks[2]<<"\n"<<s[i].total<<endl;
        }
    }
    if(t==0){
        cout<<"enter valid student id:";
    }
}
int main(){
    while(1){
        cout<<"enter number "<<endl;
        cout<<"1.insert details"<<"2.deleting"<<"3.updating"<<"4.print detail"<<"5.exit"<<endl;
        cout<<"enter a number";
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
            print_detail();
            break;

            case 5:
            break;

            default :
            cout<<"enter number between 1-5";
            
        }
        if(n==5)
        break;
    }
    return 0;
>>>>>>> 76d362448da97dad42d5e3c262c6efdd9080a45f
}