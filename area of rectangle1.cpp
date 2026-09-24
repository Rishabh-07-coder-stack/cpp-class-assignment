#include <iostream>
#include <string>
using namespace std;
class Rectangle
{
private:
	float length,breadth,area,perimeter;
public:
	void getdimension(){
cout<<"enter length of rectangle: ";
cin>>length;
cout<<"enter breadth of rectangle: ";
cin>>breadth;
}
void calcArea()
{
area = length*breadth;
}
void calcPerimeter()
{
perimeter=2*(length+breadth);
}
void display()
{
cout<<"length is:"<<length<<endl;
cout<<"breadth is :"<<breadth<<endl;
cout<<"area is:"<<area<<endl;
cout<<"Perimeter is:"<<perimeter<<endl;
}};
int main()
{
Rectangle r1;
r1.getdimension();
r1.calcArea();
r1.calcPerimeter();
r1.display();
return 0;
}
