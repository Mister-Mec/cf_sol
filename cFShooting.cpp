#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int a[n];
	vector<pair<int,int>>vec;
	for (int i=0; i<n; i++){
		cin >> a[i];
		vec.push_back(make_pair(a[i], i));
	}
	sort(a, a + n, greater<int>());
	sort(vec.rbegin(), vec.rend());
	int x=0;
	for (int i=0; i<n; i++){
		x = x + (a[i])*i+ 1 ;
	}
	cout << x << endl;
	for (int i = 0; i < vec.size(); i++) {
        cout << vec[i].second + 1 << " ";
    }
	return 0;
}