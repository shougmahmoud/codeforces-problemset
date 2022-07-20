#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int bprice, d, num,f=0;
	cin>>bprice>>d>>num;
	for(int i=1;i<=num;i++){
		if(i==1){
			f+=bprice;
		}
		else{
			f+=bprice*i;
		}
	}
	if(f<d)
	cout<<0<<endl;
	else
	cout<<f-d<<endl;
	return 0;
}