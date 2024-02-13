#include<iostream>
 int x = 1;
 namespace nspace
 {
 int x = 2;
 int y = 3;
 int z = 4;
 }
 int main()
 {
 int y = 5;
 using namespace nspace;
 //std::cout << " " << x;
 std::cout << " " << ::x;
 std::cout << " " << y;
 //std::cout << " " << ::y;
 std::cout << " " << z;
 //std::cout << " " << ::z;
 void fun();
 fun();
 return 0;
 }
 void fun()
 {
 std::cout << " " <<  x;
 }