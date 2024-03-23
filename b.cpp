#include <iostream>
using std::string;


class Employee {
	public:
	string Name;
	string Company;
	int Age;

	void greet() {
		std::cout << "Name : " <<Name<< std::endl;
		std::cout << "Name : " <<Company<< std::endl;
		std::cout << "Age : " <<Age<< std::endl;
	};

	Employee(string name, string company, int age){
		Name = name;
		Company = compay;
		Age = age;
	}

};
int main()
{

	Employee emp1;
	emp1.Name = "Jay";
	emp1.Company = "ALX";
	emp1.Age = 20;
	
	std::cout << emp1.Name <<std::endl;
	emp1.greet();

	std::cout << "=============" << std::endl;

	Employee emp2;

	emp2.Name = "John";
	emp2.Company = "Amazon";
	emp2.Age = 27;

	
	std::cout << emp2.Name <<std::endl;
	emp2.greet();

	return 0;

}
#include <iostream>
using std::string;


class Employee {
	public:
	string Name;
	string Company;
	int Age;

	void greet() {
		std::cout << "Name : " <<Name<< std::endl;
		std::cout << "Name : " <<Company<< std::endl;
		std::cout << "Age : " <<Age<< std::endl;
	};

};
int main()
{

	Employee emp1;
	emp1.Name = "Jay";
	emp1.Company = "ALX";
	emp1.Age = 20;
	
	std::cout << emp1.Name <<std::endl;
	emp1.greet();

	return 0;

}
#include <iostream>
using std::string;


class Employee {
	public:
	string Name;
	string Company;
	int Age;

	void greet() {
		std::cout << "Name : " <<Name<< std::endl;
		std::cout << "Name : " <<Company<< std::endl;
		std::cout << "Age : " <<Age<< std::endl;
	};

};
int main()
{

	Employee emp1;
	emp1.Name = "Jay";
	emp1.Company = "ALX";
	emp1.Age = 20;
	
	std::cout << emp1.Name <<std::endl;
	emp1.greet();

	return 0;

}
