#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {
	int bordM, bordN, size,domNum;
	cin>>bordM>>bordN;
	size= bordM*bordN;
	domNum = size/2;
	cout<<domNum<<endl;
	return 0;
}