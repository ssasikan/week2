#include <iostream>
#include<string>
using namespace std;
int main()
{
	string name ;
	int salary , sale ,commission;
	float total;
	cout <<"Enter Name:" ;
	cin >> name;
	cout <<"Enter Salary:" ;
	cin >> salary;
	cout <<"Enter Sale:";
	cin >> sale;
	cout <<"Enter Commission:";
	cin >> commission;
	commission = sale*0.05;
	total = commission + salary;
	cout << " Your name = " << name << endl;
	cout << "Total Revenue " << total << " Bath " << endl;
	return(0);
}