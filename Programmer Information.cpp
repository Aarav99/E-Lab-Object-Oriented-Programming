#include <iostream>
using namespace std;

class person
{
    char name[100],gender[10];
    int age;
    public:
        void getdata()
        {
            cin>>name;
            cin>>age;
            cin>>gender;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender: "<<gender<<endl;
        }
};

class employee: public person
{
    char company[100];
    float salary;
    public:
        void getdata()
        {
            person::getdata();
            cin>>company;
            cin>>salary;
        }
        void display()
        {
            person::display();
            cout<<"Name of Company: "<<company<<endl;
            cout<<"Salary: Rs."<<salary<<endl;
        }
};

class programmer: public employee
{
    int number;
    public:
        void getdata()
        {
            employee::getdata();
            cin>>number;
        }
        void display()
        {
            employee::display();
            cout<<"Number of programming language known: "<<number;
        }
};

int main()
{
    programmer p;
    p.getdata();
    p.display();
    return 0;
}