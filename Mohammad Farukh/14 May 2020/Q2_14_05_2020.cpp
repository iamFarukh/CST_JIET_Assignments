 
#include <iostream>
using namespace std;

class date{
	int day;
	int month;
	int year;
	
	public:
		void input(){
			cout<< " Enter Day : ";
			cin>>day;
			cout<< " Enter Month : ";
			cin>>month;
			cout<<"Enter Year : ";
			cin>>year;
		}
		date operator +(date D){
			date temp;
			temp.day = day + 1;
			temp.month = month;
			temp.year = year;
			if(temp.day>30){
				temp.day =1;
				temp.month++;
				if(temp.month>12){
				temp.month =1;
				temp.year = year+1;
			}
				
			}
			
			return temp;
		}
		void show(){
			cout<<"=======> Increased Date <========"<<endl;
			cout<<"Day : "<<day<<endl;
			cout<<"Month : "<<month<<endl;
			cout<<"Year : "<<year<<endl;
		}
		
};
int main(){
	date D1,D2;
	D1.input();
	cout<<endl;
	D1=D1+D2;
	
	D1.show();
	return 0;
}
