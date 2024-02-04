/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
	int n, i=0, s=0, d=0;
	cin >> n;
	int a[n];
	int j=n-1, chance = 0;

	for (int i=0; i<n; i++){
		cin >> a[i];
	}
    while (i<=j){
		int temp;
		if(a[i]<a[j] ){
			temp = a[j];
			j--;
		}
		else{
			temp = a[i];
			i++;
			
		}
		if(chance == 0){
			s = s + temp;
			chance = 1;
		}
		else {
			d = d+ temp;
			chance = 0;
		}
		
	}
	cout << s << " " << d;
	return 0;
}
