
#include <bits/stdc++.h> 
using namespace std; 

int Add(int x, int y) 
{ 
	// Iterate till there is no carry 
	while (y != 0) 
	{  
		int carry = x & y; 
		x = x ^ y; 
		y = carry << 1; 
	} 
	return x; 
} 
int main() 
{ 
	cout << "Addition ==> "<<Add(87, 90); 
	return 0; 
} 



