#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
public :
    string name;
    int age;
    void display1()
    {
        cout<<"Name is : "<< name << endl;
        cout<<"Age is : "<< age <<endl;
    }
};
class Student : public Person
{
public :
    int id;
    void display2()
    {
        cout<<"Id is : "<< id <<endl;
    }
};
int main()
{
    Student ob;
    ob.name = "Khalekuzzaman";
    ob.age = 21;
    ob.id = 158;
    ob.display1();
    ob.display2();

    getch();
}
