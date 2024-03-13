#include<iostream>
#include<string>

using namespace std;

class mat;


class vect
{
    int v[3];
    friend vect product(mat m1,vect v1);

    public :
    void initialize(){
        for(int i=0;i<3;i++){
            cout<<"enter vector elements:";
            cin>>v[i];
        }
    }

    void display() const {
        for(int i=0;i<3;i++){
            cout<<v[i]<<endl;
        }
    }
    
};

class mat
{
    int m[3][3];
    public :
    void initialize()
    {
        cout<<"enter elements";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {

                cin>>m[i][j];
            }
        }
    }

    void display() const
    {
        cout<<"matrix is:";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }   
    }

    friend vect product(mat m1,vect v1);
};


vect product(mat m1,vect v1){
    vect result;
    for(int i=0;i<3;i++)
    {
        result.v[i]=0;
        for(int j=0;j<3;j++){
            result.v[i]+=m1.m[i][j]*v1.v[j];
        }
    }
    return result;
}
int main()
{
    mat matrix;
    matrix.initialize();
    cout<<"our matrix is :"<<endl;
    matrix.display();

    vect ve1;
    ve1.initialize();
    cout<<"our vector is :"<<endl;
    ve1.display();

    cout<<"FINAL VECTOR IS:"<<endl;
    product(matrix,ve1).display();
    return 0;
}