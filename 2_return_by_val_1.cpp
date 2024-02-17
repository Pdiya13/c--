#include<iostream>
using namespace std;

int fun(int &num) {
    num++;
    return num;
}

int main() {
    int i = 10;
    // ret_val is ref to temporary object
    const int &ret_val = fun(i);
    cout << i << " " << ret_val << endl;
    cout << &i << " " << &ret_val << endl;

    return 0;
}
