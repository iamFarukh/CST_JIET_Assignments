 
#include <bits/stdc++.h> 
using namespace std; 


unsigned int swapBits(unsigned int x) 
{ 
 
	unsigned int even_bits = x & 0xAAAAAAAA; 

	unsigned int odd_bits = x & 0x55555555; 

	even_bits >>= 1; // Right shift even bits 
	odd_bits <<= 1; // Left shift odd bits 

	return (even_bits | odd_bits); 
} 


int main() 
{ 
	unsigned int x = 23,y;
	bitset<8>binary(x);
	cout<<"Input Number  : "<<x<<" ==> ("<<binary<<")"<<endl;;
	
	y=swapBits(x);
	bitset<8>binary1(y);
	cout<<"Output Number : "<<y<<" ==> ("<<binary1<<")";
	return 0; 
} 

