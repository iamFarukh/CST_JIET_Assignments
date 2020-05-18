/*
a=c
b=a
c=b




*/
void swaping(int &a,int &b,int &c){
    a = a ^ b ^ c; //
    b = a ^ b ^ c; 
    c = a ^ b ^ c; 
    a = a ^ b ^ c; 
	
}
#include<iostream>
using namespace std;

int main(){
	int a=10;
	int b=20;
	int c=30;
	
	cout<<"Before Swapping"<<endl;
	cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<endl;
	
	swaping(a,b,c);
	
	cout<<"After Swapping"<<endl;
	cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<endl;
	return 0;
}
