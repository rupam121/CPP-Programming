#include<iostream>
#include<fstream>
using namespace std;
//ofstream = create
//ifstream = read file
//fstream = ofstream + ifstream
int main(){
	fstream MyFile("cppfile.txt");
	MyFile<<"c++ file created";
	MyFile.close();
//	string myText;
//  // Read from the text file
//  ifstream MyReadFile("filename.txt");
//  // Use a while loop together with the getline() function to read the file line by line
//  while (getline (myfile, myText)) {
//    // Output the text from the file
//    cout << myText;
//  }
//  // Close the file
//  MyReadFile.close();
	return 0;
}
