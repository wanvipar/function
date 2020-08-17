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
	age = CalAge(year); //ส่งค่าคืน
	cout << "Age " << i << " : " << age << endl;
	}
	return (0);
}


int CalAge(int year) 
{
	int age;
	age = 2563 - year; //คำนวนอย่างเดียว
	return(age);
}
