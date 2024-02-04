#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	long long a, b, n, ans=0;
	cin >>a >>b >>n;
	ans = a^b;
	if(n%3 == 0)
	  cout << a << endl;
	  if(n%3 == 1)
	  cout << b<< endl;
	  if(n%3 == 2)
	  cout << ans<< endl;
	}
	return 0;
}