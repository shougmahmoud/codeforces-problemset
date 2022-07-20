#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string ss;
	cin>>ss;
	string t;
	for(int z=0; z<ss.length();z++){
	ss[z]=tolower(ss[z]);
	}
	
	
	for(int i=0; i<ss.length();i++){
		if(ss[i] == 'a' || ss[i] == 'e' || ss[i] == 'i' || ss[i] == 'o' || ss[i] == 'u' || ss[i] == 'y'){
		continue;
		}
		else{
			t+=".";
			t+=ss[i];
		}
		}
		cout<<t<<endl;
	return 0;
}