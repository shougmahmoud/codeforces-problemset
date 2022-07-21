#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int c=1;
	string zo;
	cin>>zo;
	for(int i=1;i<zo.length();i++){
		if(zo[i] == zo[i-1] ){
			c+=1;
			if(c==7){
				cout<<"YES"<<endl;
				return 0;
			}}
			else 
			c=1;
		}
	cout<<"NO"<<endl;
	return 0;
}