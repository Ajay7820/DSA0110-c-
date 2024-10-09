#include<iostream>
using namespace std;
int main(){
	int num,originalnum,r,reversednum=0;
	cout<<"Enter a number:";
	cin>>num;
	originalnum=num;
	while(num!=0){
		r=num%10;
		reversednum=reversednum*10+r;
		num/=10;
	}
	if(originalnum==reversednum){
		cout<<"It is palindrome.";
	}else{
		cout<<"It is not palindrome.";
	}
	return 0;
}
