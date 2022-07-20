#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int num, t;
	cin>>num>>t;
	while(t--){
	if(num%10 == 0){
		 num= num/10;
	}
	else
	num-=1;
	}
	cout<<num<<endl;
	return 0;
}