//Encapsulation:
//The meaning of Encapsulation, is to make sure that "sensitive" 
//data is hidden from users. To achieve this, you must declare 
//class variables/attributes as private (cannot be accessed from 
//outside the class). If you want others to read or modify the value of a 
//private member, you can provide public get and set methods.

#include <iostream>
using namespace std;
                         // get or set use to read and update data of variable.
class employee{
	private:int salary;
	public:
	    void setsalary(int s){
	        salary=s;}
	    int getsalary(){
		    return salary;}
};
int main(){
	employee myobj;
	myobj.setsalary(100000);
	cout<<myobj.getsalary();
	return 0;
}
