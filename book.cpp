#include <iostream>
#include <string>
using namespace std;
class book
{
int publishNo, pages;
string author, title, genre;
float cost;
public:
book()
{
publishNo=0;
author=" ";
title=" ";
genre=" ";
pages=0;
cost=0;
}
book(int epublishNo, int epages , string eauthor, string etitle, string egenre, float ecost)
{
publishNo=epublishNo;
author=eauthor;
genre=egenre;
pages=epages;
cost=ecost;
}
void display()
{
cout<<"publishing Number :"<<publishNo<<endl;
cout<<"Author of the book :"<<author<<endl;
cout<<"Title of the book :"<<title<<endl;
cout<<"Genre of the book :"<<genre<<endl;
cout<<"Number of pages in the book :"<<pages<<endl;
cout<<"Cost of the book :"<<cost<<endl;
}
};
int main(){
book b1;
b1.display();
book b2(3202,284, "Annie","Twisted", "fiction",700.07);
b2.display();
return 0;

}


