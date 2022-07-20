#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	string num ,t;
	cin>> num;
	num.erase(remove(num.begin(), num.end(), '+'), num.end());
	sort(num.begin(),num.end());
	for(int i=0;i<num.length()-1;i++){
		cout<<num[i]<<"+";
	}
	cout<<num[num.length()-1]<<endl;
	
	return 0;
}