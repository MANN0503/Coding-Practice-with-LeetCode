#include<iostream>
using namespace std;

int main(){
	
	float n1,n2;
	cout<<"Enter value for n1: ";
	cin>>n1;
	cout<<"Enter vale for n2: ";
	cin>>n2;
	
	char Operation;
	cout<<"Which operation? ";
	cin>>Operation;
	
	float p,s,m,d;
	switch(Operation)
	{
		case 'p':
			p=n1+n2;
			cout<<p<<endl;
			break;
		case 's':
			s=n1-n2;
			cout<<s<<endl;
			break;
		case 'm':
			m=n1*n2;
			cout<<m<<endl;
			break;
		case 'd':
			d=n1/n2;
			cout<<d<<endl;
			break;
		default:
			cout<<"Operation not found:("<<endl;
			break;
	}
	
	
	return 0;
}
