#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum=0;
	cin >> n;
	int a[3];
	for (int i=0; i<n; i++){
		map<int,int>mip;
		for(int k=0; k<3; k++){
			cin >> a[k];
			mip.insert({a[k], mip[a[k]]++});
		}
		if(mip[1]>=2)
		sum += 1;
	}
	cout << sum;
	return 0;
}