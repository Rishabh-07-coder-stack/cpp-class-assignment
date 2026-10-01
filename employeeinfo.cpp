#include <iostream>
#include <string>
using namespace std;
class employee
{
int id; 
string name ;
float salary,bonus,tsalary;
public:
employee()
{
id=0;
name=" ";//unknown
salary=0;
bonus=0;
}
employee(int eid,string ename, float esalary,float ebonus)
{
id=eid;
name=ename;
salary=esalary;
bonus=ebonus;
};
void totalsalary()
{tsalary=salary+bonus;
}
void display()
{cout<<"emp id ="<<id<<endl;
cout<<"emp name ="<<name<<endl;
cout<<"emp salary="<<salary<<endl;
cout<<"emp bonus="<<bonus<<endl;
cout<<"emp tsalary="<<tsalary<<endl;
}};
int main()
{
employee e1;
e1.totalsalary();
e1.display();
employee e2(101,"neha",2000,200);
e2.totalsalary();
e2.display();
return 0;
}
