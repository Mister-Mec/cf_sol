#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, height=0, width=0;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort (a, a+n);
	for(int i=0; i< n/2; i++){
		height += a[i];
	}
	for(int i=n/2; i< n; i++){
		width += a[i];
	}
	int max = height*height + width*width;
	cout << max;
	return 0;
}