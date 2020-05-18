#include<vector>
#include<iostream>
using namespace std;
int run =0;

class team{
	public :
		
			int run = 0;
			int ball=0,input,count=0;
			vector<int> m1({-2,-1,0,1,2,3,4,5,6});
			
		int SuperOver(){
			while(ball<6){
			cin>>input;
				if(input == (-2))
					ball++;
				else if(input == (-1))
					run++;
				
				else if(input == 0)
					ball++;
					
				else if(input == (1)){
					run++;
					ball++;
				}
		
				else if(input == 2){
					run+=2;
					ball++;
				}
				else if(input == 3){
					run+=3;
					ball++;
				}
				
				else if(input == 4){
					run+=4;
					ball++;
				}
				else if(input == 5){
					run+=4;
					ball++;
				}
				else if(input == 6){
					run+=6;
					ball++;
				}
				
				else
					cout<<"Envalid Entry"<<endl;
			}
				cout<<"Total Run : "<<run<<endl;
				cout<<"Ball : "<<ball<<endl;
		}
};
int main(){
	vector<int> m1({-2,-1,0,1,2,3,4,5,6});
	team Team1 , Team2;
	cout<<"Team1 :: Bowling and Team2 :: Batting "<<endl;
	Team1.SuperOver();
	cout<<"Team2 :: Bowling and Team1 :: Batting "<<endl;
	Team2.SuperOver();
	
	if(Team1.run<Team2.run){
		cout<<"Team2 Win The Match "<<endl;
	}
	else if (Team2.run<Team1.run){
		cout<<"Team1 Win The Match "<<endl;
	}
	else
		cout<<"Match Tie "<<endl;
	
	
}

