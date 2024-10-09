#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter the number:";
	cin>>n;
	int i=1;
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		cout<<n<<" is a perfect number.";
	}else{
		cout<<n<<" is not a perfect number.";
	}
}
