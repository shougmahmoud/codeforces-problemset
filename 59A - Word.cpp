#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(int argc, char** argv) {
	string str;
	int upc=0,lowc=0;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(isupper(str[i])){
			upc=upc+1;
		}
		else if (islower(str[i])){
			lowc=lowc+1;
		}}
		if(upc>lowc){
			for(int j=0;j<str.length();j++)
			str[j]=toupper(str[j]);
		}
		else if(upc<lowc || upc==lowc){
			for(int z=0;z<str.length();z++)
			str[z]=tolower(str[z]);
			
		}
		
	cout<<str<<endl;
	return 0;
}