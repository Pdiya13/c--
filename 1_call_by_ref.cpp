#include<iostream>
using namespace std;

void fun(int &num) {
    num++;
}

int main() {
    int i = 10;
    fun(i);
    cout << i;

    return 0;
}
