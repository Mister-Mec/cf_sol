#include <iostream>
using namespace std;

int main() {
	long long t, a, b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		long long diff= (a-b);
		if (diff == 1)
		 cout << "NO"<< endl;
		else 
		 cout << "YES"<<endl;
	}
	return 0;
}