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
