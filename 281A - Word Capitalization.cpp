#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string str;
	string temp;
	cin>>str;
	temp=toupper(str[0]);
	str[0]=temp[0];
	cout<<str<<endl;
	return 0;
}