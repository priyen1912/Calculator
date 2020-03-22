#include<iostream>
using namespace std;
int main()
{
	char op;
	int no1,no2;
	cout<<"";
	cin>>no1;
	cout<<"";
	cin>>no2;
	cout<<"";
	cin>>op;
	switch(op)
	{
		case'+':
			cout<<no1+no2;
			break;
		case'-':
		    cout<<no1-no2;
			break;
		case'*':
		    cout<<no1*no2;
		    break;
		case'/':
			cout<<no1/no2;
			break;
		case'%':
			cout<<no1%no2;
			break;	
		return 0;
    }
}
