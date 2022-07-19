#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	int f;
	string s;
	cin>>f;
	while(f--){
	cin>>s;
	int size=s.length();
	if(s.length()>10){
		cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
	}
	else{
	cout<<s<<endl;
	}}
	
	return 0;
}
