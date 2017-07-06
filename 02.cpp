#include <iostream>
#include <stdio.h>

long long abs(long long int a){
	if(a<0) return (a-2*a);
	else return a; 
}

using namespace std;
int main(){
	long long int a,b;
	while(true){
		cin>>a>>b;
		if( cin.eof() ) break;
		cout<<abs(a-b)<<endl;
	}
}
