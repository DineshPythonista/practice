#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
	string a,b="";
	cin>>a;

	int t = 0;
	int r = 1;
	while(!t){
		r = 1;
		for(int i=0;i<a.size();i++){
			if(a[i] == a[i+1])
			{	
				t = 0;
				r = 0;
				continue;
			}
			if(i > 0 && a[i] == a[i-1]){
				t = 0;
				r = 0;
				continue;
			}
			if(r)
				t = 1;
			b += a[i];
		}
		a = b;
		b = "";
	}
	cout<<"\nThe result is "<<a;
	return 0;
}
