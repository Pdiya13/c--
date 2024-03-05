#include<iostream>

using namespace std;

int main() {
    
    int arr[10] = {1, 2};
    int *const &arr2 = arr;
    int (&arr3)[10] = arr;
    auto &arr4 = arr;

    cout << arr[0] << " " << arr[2] << endl;
    cout << arr2[0] << " " << arr2[2] << endl;
    cout << arr3[0] << " " << arr3[2] << endl;
    cout << arr4[0] << " " << arr4[2] << endl;

    cout << sizeof(arr) << endl;
    cout << sizeof(arr2) << endl;
    cout << sizeof(arr3) << endl;
    cout << sizeof(arr3) << endl;

    return 0;
}
