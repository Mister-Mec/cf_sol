#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s, t;
	cin >> s >> t;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	transform(t.begin(),t.end(), t.begin(), ::tolower);
	if(s == t)
	 cout << 0;
	 if(s > t)
	 cout << 1;
	 if(s < t)
	 cout << -1;
	return 0;
}