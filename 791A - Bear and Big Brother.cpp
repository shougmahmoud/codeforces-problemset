#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int limak, bob, counter=0;
	cin>>limak>>bob;
	while(bob>=limak){
		bob*=2;
		limak*=3;
		counter+=1;
	}
	cout<<counter<<endl;
	return 0;
}