/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, sum=0, t;
	bool x;
	cin >> n >> t;
	int a[n];
	for(int k=0; k<n; k++){
			cin >> a[k];
	}
	// for(int k=0; k<n; k++){
	// 		if(a[k]==0)
	// 		 x=false;
	// 		  else 
	// 		   x=true;
	// }
	// if(x == true){
	for(int i=0; i<n; i++){
		if(a[i]>=a[t-1] && a[i]!=0)
		 sum += 1;
	}	
// }
	cout << sum;
	return 0;
}
