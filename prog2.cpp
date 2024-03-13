#include<iostream>
#include<cstring>
using namespace std;

class Person
{
public:
    char name[50];
    int age;
};

void changename(Person person[])
{
    person[0].name[0] = 'g';
    person[1].name[0] = 'R';
}


void changeage(Person person[])
{
    person[1].age = 31; 
    person[0].age = 21; 
}
int main()
{
    Person person[5];
    strcpy(person[1].name, "sita");
    strcpy(person[0].name, "Sita");
    person[1].age = 30;
    person[0].age = 20;  
   
    changename(person);	// pass object array by pointer
    changeage(person);	// pass object array by pointer
 
    cout << person[1].name << " ";
    cout << person[1].age << std::endl;
    cout << person[0].name << " ";
    cout << person[0].age << std::endl;

    return 0;
}
