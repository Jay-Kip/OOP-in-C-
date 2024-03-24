#include <iostream>
using std::string;


class Employee {
	private:
		string Name;
		string Company;
		int Age;

	public:
		void setName (string name) {
			Name = name;
		}

		string getName() { //getter
			return (Name);
		}

		void setCompany (string company) { //setter
			Company = company;
		}

		string getCompany () {
			return (Company);
		}

		void setAge (int age) {
			Age = age;
		}

		int getAge() {
			return (Age);
		}

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

	emp_1.setAge(56);
	std::cout<< emp_1.getName() << " is " <<emp_1.getAge()<< " years old" <<std::endl;
	std::cout << "------------" << std::endl;
	

//	std::cout << "Employee 1: " << emp_1.Name << std::endl;

	Employee emp_2 = Employee("Mike", "Samsung" , 24);
	emp_2.intro();

	emp_2.setName("Naomy");
	emp_2.setCompany("Azure");
	std::cout << emp_2.getName() << " works for  " << emp_2.getCompany() << std::endl;


	return (0);
}
