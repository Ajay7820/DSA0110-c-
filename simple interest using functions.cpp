#include<iostream>
using namespace std;
float calculate_simple_interest(float principal,float rate,float time){
	return(principal*rate*time)/100;
}
float getrateofinterest(bool isseniorcitizen){
	if(isseniorcitizen){
		return 12.0;
	}else{
		return 10.0;
	}
}
int main(){
	int principal,time,interest;
	char citizenstatus;
	bool isseniorcitizen;
	cout<<"Enter the principal amount:";
	cin>>principal;
	cout<<"Enter the time period:";
	cin>>time;
	cout<<"Enter y if you are senior citizen:";
	cin>>citizenstatus;
	if(citizenstatus=='y'||citizenstatus=='Y'){
		isseniorcitizen=true;
	}else{
		isseniorcitizen=false;
	}
	float rate=getrateofinterest(isseniorcitizen);
	interest=calculate_simple_interest(principal,rate,time);
	cout<<"The simple interest is:"<<interest;
}
