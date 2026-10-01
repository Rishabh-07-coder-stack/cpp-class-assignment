#include <iostream>
#include <string>
using namespace std;
class employee
{int id;
string name;
float salary, bonus, tsalary;
public:
employee()
{
id=0;
name = " ";//unknown 
salary =0;
bonus = 0;
}
void totalsalary()
{
tsalary=salary+bonus ;
}
void display()
{cout<<"emp id ="<<id<<endl;
cout<<"emp name="<<name<<endl;
cout<<"emp salary="<<salary<<endl;
cout<<"emp bonus="<<bonus<<endl;
cout<<"total salary="<<tsalary<<endl;
}};
int main()
{employee e1;
e1.totalsalary();
e1.display();
return 0;
}




emp id =0
emp name= 
emp salary=0
emp bonus=0
total salary=0
