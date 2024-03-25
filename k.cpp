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
};



int main() {
	//Employee emp_1 = Employee("Jay", "Amazon", 22, "Python");
	dev dev_1 = dev("Jay", "Microsoft", 22, "Python");
	dev_1.bug();

	std::cout << "---------------------" << std::endl;

	dev_1.prom();

	std::cout << "---------------------" << std::endl;
	Teacher t_1 = Teacher("Mark", "Pemar", 34, "Geo");
	t_1.lesson();

	//std::cout << "Welcome aboard " << emp_1.getName() << std::endl;

	return (0);
}
