#include <iostream>
using std::string;

class Employee {
	private:
		string Name;
		string Company;
		int Age;

	public:
		void setName(string name)
		{
			Name = name;
		}

		string getName() {
			return (Name);
		}

	public:
		Employee (string name, string company, int age) {
			Name = name;
			Company = company;
			Age = age;
		}

		void prom()
		{
			if (Age > 30)
				std::cout << getName() << " Can be promoted ." << std::endl;
			else
				std::cout << getName() << " Cannot be promoted. " << std::endl;
		}

		virtual void work () {
			std::cout << getName() << " is checking email and doing tasks " << std::endl;
		
		}
};
class dev : public Employee {
	public:
		string lang;
		dev (string name, string company, int age, string lang) : Employee (name, company, age)
	{
		this->lang = lang;
	};
		void bug() {
			std::cout << getName() << " Fixed bug using " << lang << " :) " << std::endl;

		}

		void work() {
			std::cout << getName() << " Is witting code in " << lang << std::endl;
		}
};


class Teacher : public Employee {
	public:
		string subject;
		Teacher (string name, string company, int age, string subject) : Employee (name, company, age)
	{
		this->subject = subject;
	}
		void lesson() {
			std::cout << getName() << " teaches " << subject << std::endl;

		}

		void work () {
			std::cout << getName() << " is teaching " << subject << std::endl;
		}
};



int main() {
	//Employee emp_1 = Employee("Jay", "Amazon", 22, "Python");
	//dev dev_1 = dev("Jay", "Microsoft", 22, "Python");
	//dev_1.work();
	
	dev d = dev("Harry", "Google", 23, "JavaScript");

	//std::cout << "---------------------" << std::endl;

	//dev_1.prom();

	std::cout << "---------------------" << std::endl;
	//Teacher t_1 = Teacher("Mark", "Pemar", 34, "Geo");
	//t_1.work()
	Teacher t = Teacher("Naomy", "Kap", 43, "History");

	Employee * emp_1 = &d;
	Employee * emp_2 = &t;

	emp_1->work();
	emp_2->work();

	//std::cout << "Welcome aboard " << emp_1.getName() << std::endl;

	return (0);
}
