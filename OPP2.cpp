#include<iostream>
#include<string.h>

using namespace std;

class Car{
	public:
		int id;
		char company_name[100];
		char color[100];
		int model;
		int release_yeras;
		
};

int main(){
	int i;
	Car c;
	
	for(i<1; i<6; i++){
		
		cout<<"enter id :- ";
		cin>>c.id;
		cout<<"enter name :- ";
		cin>>c.company_name;
		cout<<"enter color :- ";
		cin>>c.color;
		cout<<"enter model :- ";
		cin>>c.model;
		cout<<"enter release_yeras :- ";
		cin>>c.release_yeras;
		
		
		
		cout<<c.id<<endl;
		cout<<c.company_name<<endl;
		cout<<c.color<<endl;
		cout<<c.model<<endl;
		cout<<c.release_yeras<<endl;
	
		
	}
	return 0;
}
