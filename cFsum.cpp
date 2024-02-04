#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin >> s;
	vector<int>vec;
	for(int i=0; i<s.length(); i++){
		if(i%2 == 0){
			vec.push_back(s[i]);
		}
	}
	sort(vec.begin(), vec.end());
	int w = vec[(s.length())/2];
	vec.pop_back();
	for(auto it : vec){
		cout << it-48 << "+";
	}
	cout << w-48;
	
	return 0;
}