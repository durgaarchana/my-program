/*
 * Author : Archana
 * Summary : Average of two numbers given
 */

#include<iostream>
using namespace std;
int main()
{
	float a,b,sum,average; //declaration of variables
	cout << "enter two elements a &b"; //taking 2 numbers
	cin >> a; //reading two elements
	cin >> b;
	sum = a+b;
	average = (a+b)/2;
	cout << "average of two numbers is " << average << "\n"; //displaying result
}
