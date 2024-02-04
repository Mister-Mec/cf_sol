#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(T--){
		int n, s, t;
		cin >> n >> s >> t;
		if (min(s,t)==n){
			cout << 1 << endl;
		}else {
			int x =(n - min(s,t)) +1;
			cout << x << endl;
		}
	}
	return 0;
}