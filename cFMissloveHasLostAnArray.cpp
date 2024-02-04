#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, l,r;
	cin >>n>>l>>r;
	vector<int>a1;
	vector<int>a2;
	int sum1=0, sum2=0;
	for(int i=0; i<l; i++){
		a1.push_back(pow(2,i));
		sum1 += pow(2,i);
	}
	for(int i=0; i<n-l; i++){
		a1.push_back(1);
		sum1 += 1;
	}
	for(int i=0; i<r; i++){
		a2.push_back(pow(2,i));
		sum2 += pow(2,i);
	  }
	
	for(int i=0; i<n-r; i++){
		a2.push_back(pow(2,r-1));
		sum2 += pow(2,r-1);
	}
	cout << sum1 << endl << sum2;
	
	return 0;
}