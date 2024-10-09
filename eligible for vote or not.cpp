#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter your age:";
	cin>>n;
	if(n>=18){
		cout<<"You are eligible for vote.";
	}else{
		cout<<(18-n)<<" Years are left to eligible.";
	}
}
