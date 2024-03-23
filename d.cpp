#include <iostream>
using std::string;


class Employee {
	public:
		string Name;
		string Company;
		int Age;

		void intro() {
			std::cout<<"Name - " << Name << std::endl;
			std::cout<<" Company - " << Company << std::endl;
			std::cout<<"Age - "  << Age << std::endl;
		};

	public:
		Employee(string name, string company, int age) {
			Name = name;
			Company = company;
			Age = age;

		}


};


int main()
{
	Employee emp_1 = Employee("Jay", "Microsoft", 22);
	emp_1.intro();

	std::cout << "------------" << std::endl;
	

//	std::cout << "Employee 1: " << emp_1.Name << std::endl;

	Employee emp_2 = Employee("Mike", "Samsung" , 24);
	emp_2.intro();


	return (0);
}
