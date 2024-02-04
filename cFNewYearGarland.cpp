#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		long long a, b, c;
		cin >>a>>b>>c;
		long long x[] = {a,b,c};
		sort(x, x + 3);
		
		if( x[2]-1 <= x[0]+x[1])
		 cout << "Yes"<< endl;
		else 
		 cout << "No"<< endl;
	}
	return 0;
}