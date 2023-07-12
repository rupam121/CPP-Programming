// a class is a template for objects, and an object is an instance of a class.
#include<iostream>
using namespace std;
class myclass{
    public:       //instance of class
      int mynum; 
      string mystring;};
class car{
   public:
   	string brand;
   	string model;
   	int year;};
   	
int main(){
    myclass myobj;
    myobj.mynum=100;
    myobj.mystring="some text";
    car a;
    a.brand="bmw";
    a.model="100x";
    a.year=2002;
    car b;
    b.brand="audi";
    b.model="9x";
    b.year=2004;  
    cout<<myobj.mynum<<endl;
    cout<<myobj.mystring<<"\n";
    cout << a.brand<<a.model<<a.year<<endl;
    cout << b.brand<<b.model<<b.year<<endl;
    return 0;}
//instance:  to introduce a particular event, situation, or person that is an example of what you are talking about.
