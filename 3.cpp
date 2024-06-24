#include<iostream>
#include<string.h>
#include<stdio.h>


using namespace std;

int main(){
	int n, b=0, t=0;
	cout<<"\nEnter the value of n: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the nos: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		t = 0;
		for(int j=i+1;j<n;j++){
			if(a[i] == a[j]){
				t = 1;
				break;
			}
		}
		if(t)
			b++;
	}
	cout<<"\n"<<b;
	return 0;
}
