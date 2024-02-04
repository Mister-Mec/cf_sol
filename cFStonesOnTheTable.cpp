#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	stack<char>stones;
	int n;
	cin >> n;
	string s;
	cin >> s;
	int sum=0;
	stones.push(s[0]);
	for (int i=1; i<n; i++){
		if(stones.top() == s[i]){
			sum +=1;
		}else 
		  stones.push(s[i]);
	}
	cout << sum ;
	return 0;
}