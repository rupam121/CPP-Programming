#include<iostream>
using namespace std;
int main(){
	int i=1;
	do{
		int j=1;
		do{
			cout<<"i="<<i<<"\n";
			j++;
		}while(j<=3);
		i++;
	}while(i<=3);
	return 0;
}
