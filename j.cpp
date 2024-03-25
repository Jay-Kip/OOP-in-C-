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
int main() {
	//Employee emp_1 = Employee("Jay", "Amazon", 22, "Python");
	dev dev_1 = dev("Jay", "Microsoft", 22, "Python");
	dev_1.bug();


	//std::cout << "Welcome aboard " << emp_1.getName() << std::endl;

	return (0);
}
