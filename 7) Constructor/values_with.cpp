#include <iostream>
#include <string.h>

using namespace std;

class person{
	private:
		char name[30];
		int age;
	public:
		//default constructor
		person(){

			strcpy(name,"None");
			age = 0;

		}

		//parameterized constructor
		person(char n[], int a){
			strcpy(name, n);
			age = a;

		}

		//copy constructor
		person(person &p){
			strcpy(name, p.name);
			age =p.age;

		}
	
		//function to display person details
		void print(void){
			cout<<name<<" is "<<age<<" years old."<<endl;

		}

};


//Main function

int main(){

	//creating objects

	person p1; //default constructor will be called
	person p2("Amit Shukla",21); //parameterized constructor will be called
	person p3(p2); //copy constructor will be called

	//printing
	cout<<"object p1..."<<endl;
	p1.print();
	cout<<"object p2..."<<endl;
	p2.print();	
	cout<<"object p3..."<<endl;
	p3.print();	

	return 0;

}
