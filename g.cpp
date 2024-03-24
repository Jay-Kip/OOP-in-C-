#include <iostream>
using std::string;


class abEmp {
	virtual void prom()=0;
};

class Employee: public abEmp {
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
			if (age >= 18) //Applying validation rules to setters
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

		void prom() {
			if (Age > 30)
				std::cout << Name << " Got promoted." << std::endl;
			else
				std::cout << Name << " No promotion for you. " << std::endl;
		};

	public:
		Employee (string name, string company, int age) {
			Name = name;
			Company = company;
			Age = age;
		}
		
};


int main()
{
	Employee emp_1 = Employee("Jay", "Microsoft", 22);
	emp_1.prom();


	std::cout << "------------" << std::endl;

	Employee emp_2 = Employee("Mike", "Samsung",  33);
	emp_2.prom();


	return (0);
}
