#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		long long a, b, c, r;
		cin >>a>>b>>c>>r;
		long long base =0;
		long long cmin = c-r;
		long long cmax = c+r;
		long long rangemin = max(min(a,b),cmin);
		long long rangemax = min(max(a,b),cmax);
		long long ans = abs(a-b) - max(base, rangemax-rangemin);
		cout << ans <<endl;
	}
	return 0;
}