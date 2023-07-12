#include<iostream>
using namespace std;

int main(){
	cout<<" Multi Dimensional Array: "<<endl;
	string marr[2][4]={
	{"a","b","c","d"},
	{"e","f","g","h"}
	};
	for(int i=0; i<2;i++){
		for(int j=0;j<4;j++){
			cout<<" "<<marr[i][j];
		}
		cout<<endl;
	}
	return 0;
}
