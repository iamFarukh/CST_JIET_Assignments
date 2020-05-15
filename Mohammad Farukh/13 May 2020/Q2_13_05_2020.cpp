 
 /*
 	h1 = 4 meter 99cm
 	h2 = 5 meter 99 cm
	             98 
	
	h2 = h1+h2;
	 	
 */
 
#include <iostream>
using namespace std;
class height {
	int meter,centimeter;
	
	public:
		void Entry(){
			cout<< " Enter Meter : ";
			cin>>meter;
			cout<< " Enter Centimeter : ";
			cin>>centimeter;	
		}
		void show(){
			cout << "Meter:" <<meter << "\t" << "Centimeter:" << centimeter << endl;
		 	
		}
		height operator +(height H){
			height temp;
			temp.meter = meter + H.meter;
			temp.centimeter = centimeter + H.centimeter;
			if(temp.centimeter >=100){
				temp.centimeter%=100;
				temp.meter++;
			}
			return temp;
		}
		
};

int main(){
	
	height H1,H2,H3;
	H1.Entry();
	cout<<endl;
	H2.Entry();
	cout<<endl;
	
	H3 = H1+H2;
	
	cout<<"Total : ";
	H3.show();
	
	return 0;
}
