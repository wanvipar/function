#include <iostream>
int CalAge(int);
using namespace std;
int main()

{
	int year, age;
	for (int i = 1 ;  i <= 3 ; i++) 
	{
	cout << "Enter Year " <<  i << " : ";
	cin >> year;
	age = CalAge(year); //�觤�Ҥ׹
	cout << "Age " << i << " : " << age << endl;
	}
	return (0);
}


int CalAge(int year) 
{
	int age;
	age = 2563 - year; //�ӹǹ���ҧ����
	return(age);
}
