/*Author:Durga Archana
 * Summary:Classes
 */
#include <iostream>
using namespace std;
class student // user defined data type
{
	char name[20];
	int age;
	int regno;
	public: // defines a public scope
	void readdata(void); // input value function
	void displaydata(void); //  output data function
};

void student:: readdata(void)
{
	cout << "send ur name : ";
	cin >> name;
	cout << "enter ur age: ";
	cin >> age;
	cout << " enter ur Regno : ";
	cin >> regno;
}

void student:: displaydata(void){
	cout << "Student name is : " << name;
	cout << "\n";
	cout << "student  age is : " << age << "\n";
	cout << "student regno is : " << regno << "\n";
}
	
int  main()
{
	student s ;  // s is a variable of type student
	s.readdata();
	s.displaydata();
}

