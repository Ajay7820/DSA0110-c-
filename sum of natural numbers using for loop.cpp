#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter the number:";
	cin>>n,"\n";
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	cout<<"sum of n no:"<<sum;
}
