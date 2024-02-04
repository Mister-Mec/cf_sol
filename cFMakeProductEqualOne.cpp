#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n, pos=0, neg=0, zero=0, coins=0;
	cin >>n;
	long long a[n];
	for(long long i=0; i<n; i++){
		cin >> a[i];
		if(a[i]<0)
		 neg +=1;
		if(a[i]>0)
		 pos +=1;
		if(a[i]==0)
		 zero +=1; 
	}
	sort (a, a+n);
	for(long long i=0; i<neg; i++){
		coins += abs(a[i])-1;
	}
	if(neg%2 != 0 && zero ==0){
		coins = coins + 2;
	 }
	 long long x = 0;
	 if(neg%2 != 0 && zero !=0){
		coins = coins + 1 ;
		zero = zero -1;
		x =1;
	 }
	 for(long long i=0; i<zero; i++){
		coins += 1;
	}
	if (x == 1){
	 for(long long i=(neg + zero+1); i<n; i++){
		coins += a[i]-1;
	}} else {
	for(long long i=(neg + zero); i<n; i++){
		coins += a[i]-1;
	}
	}
	cout << coins;
	return 0;
}