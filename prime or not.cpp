#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	if(n%2!=0){
		cout<<"It is prime.";
	}else{
		cout<<"It is not prime.";
	}
	return 0;
}
