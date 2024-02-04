#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		sort (a, a+n);
		int base = min(a[n-1],a[n-2]);
		int lad = n-2;
		if(lad > (base-1))
		 cout << (base-1)<< endl;
		  else
		   cout << lad << endl;
	}
	return 0;
}