#include <iostream>
using std::string;


class Employee {
	public:
		string Name;
		string Company;
		int Age;

		void intro() {
			std::cout<<"Name - " << Name << std::endl;
			std::cout<<" Company - " <<Company << std::endl;
			std::cout<<"Age - "  << Age << std::endl;
		};



};


int main()
{
	Employee emp_1;
	emp_1.Name = "Jay";
	emp_1.Company = "Google";
	emp_1.Age = 22;
	

	emp_1.intro();



	return (0);
}
