#include<iostream>
using namespace std;

int &fun(int &num) {
    cout << num << endl;
    num++;
    return num;
}

int main() {
    int i = 10;
    int res = fun(i);
    int &ret_val = fun(i);
    fun(i) += 2;
    cout << i << " " << res << " " << ret_val << endl;
    cout << &i << " " << &res << " " << &ret_val << endl;
    return 0;
}
