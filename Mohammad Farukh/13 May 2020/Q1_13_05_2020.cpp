 
#include <iostream>
using namespace std;

// Area of triagle using : 1/2(h*b)
int Area(int height,int base){
	return (height*base)/2;
}
// Area of triagle using : 1/2(a+b+c)
int Area(int a, int b, int c){
	return (a+b+c)/2;
}
int main(){
	cout<<"Area of Triangle 1/2(h*b) : "<<Area(12,9)<<endl;
	cout<<"Area of Triangle 1/2(a+b+c): "<<Area(10,14,20)<<endl;
	
	return 0;
}
