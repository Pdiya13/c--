#include<iostream>
using namespace std;

const int &fun(int &num) {
    cout << num << endl;
    num++;

    return num += 1;
}

int main() {
    int i = 10;
    const int &ret_val = fun(i);
    cout << i << " " << " " << ret_val << endl;
    cout << &i << " " << " " << &ret_val << endl;
    return 0;
}
