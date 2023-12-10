#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

// void fun()
// {
// 	system("leaks Animal");
// }

int main()
{
	// atexit(fun);
	{
        std::cout << "================= First Example ==================" << std::endl;
		Animal* j = new Dog();
		Animal* i = new Cat();

		(*i) = (*j);

		delete j; //should not create a leak
		delete i;
	}
	{
        std::cout << "================= Second Example ==================" << std::endl;
		Cat dog;
		Cat tmp = dog; // sould not crash or gives double free
	}
	return 0;
}