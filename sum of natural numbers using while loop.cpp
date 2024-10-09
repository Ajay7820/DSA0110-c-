#include<iostream>
using namespace std;
int main(){
	int n,i=1,sum=0;
	cout<<"Enther the number:";
	cin>>n,"\n";
	while(i<=n){
		sum+=i;
		i++;
	}
	cout<<"sum of n no:"<<sum;
	return 0;
}
