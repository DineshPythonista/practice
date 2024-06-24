#include<iostream>
#include<string.h>

using namespace std;

int main(){
	string a,b="";
	cout<<"\nEnter the string: ";
	cin>>a;
	for(int i=0;i<a.size();i++){
		if((int)a[i] < 91){
			b += a[i] + 32;
		}
		else{
			b += a[i] - 32;
		}
	}
	cout<<b;
	return 0;
}
