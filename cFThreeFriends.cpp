#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		long long a, b, c;
		cin >>a>>b>>c;
		long long x[] = {a,b,c};
		sort(x, x + 3);
		
		if(a==b && b==c){
			cout << 0 <<endl;
		}else if(x[0]==x[1]){
			if(x[2]-x[1] == 1)
			 cout << 0 << endl;
		 else
		 cout << 2*(x[2] - x[0] - 1) - 2 << endl;
		}
	    else if(x[1]==x[2]){
	    	if(x[1]-x[0]==1)
	    	 cout << 0 << endl;
	     else
	    cout << 2*(x[1]-x[0] - 1)-2 << endl;
	    }
	    else 
	      cout << 2*(x[2]) - 2*(x[0]) - 4 << endl;
	}
	return 0;
}