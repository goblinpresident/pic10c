#include <iostream>



class Pet {
	int age;
	int hunger = 0;

	std::string name;
	
	public:
	Pet() {}
	Pet(int a, std::string n) :age(a), name(n) {}
	void randPet() {		/*create possible match for myPet*/

	}
	void setAge(int a) { age = a; }
	int getAge() { return age; }

};
