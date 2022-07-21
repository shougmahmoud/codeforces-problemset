#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string str;
	cin >> str;
	set<char> st;
	for (char i : str) {
		st.insert(i);
	}
	if (st.size() % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else
	{
		cout << "IGNORE HIM!";
	}

	return 0;
}