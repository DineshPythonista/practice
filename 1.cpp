#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(){
	string a,b="";
	cin>>a;
	int t;
	b = "";
	for(int i=0;i<a.size();i++){
		t = 1;

		for(int j=i+1;j<a.size();j++){
			if(a[i] == a[j]){
				t = 0;
				break;
			}
		}
		if(a[i] == a[i+1] && a[i])
		{
			continue;
		}
		if(i > 0 && a[i] == a[i-1]){
			continue;
		}
		if(t){
			b += a[i];
		}
	}
	cout<<"\n"<<b;
	return 1;
}	


