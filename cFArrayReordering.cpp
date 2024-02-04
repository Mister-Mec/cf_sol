#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		long long n, sum = 0;
		cin >> n;
		long long a[n];
		for (long long i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n, greater<long long>());
		
			for (long long i=0; i<n-1; i++){
				for (long long j=i+1; j<n; j++){
					long long b = gcd(a[i],2*a[j]);
					if(b==1){
						long long c = gcd(a[j],2*a[i]);
						if(c >1)
						 sum +=1;
					}
			      if(b > 1)
			        sum += 1;
		        }
		    }
		    cout << sum << endl;
		    sum =0;
	}
	return 0;
}