#include<iostream>

using namespace std;

int & max(int &x, int &y){
    if(x>y)
     return x;
     else
     return y;
}

int main(){
    int a=1;
    int b=2;
    int &x=a;
    int &y=b;
    int j=max(x,y);
    cout<<j;
}