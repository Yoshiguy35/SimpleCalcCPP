#include<iostream>

double add(double a,double b);
double sub(double a,double b);
double mul(double a,double b);
double div(double a,double b);
void menu();

int main()
{
	char option = 0;

	double a = 0;
	double b = 0;
	double c = 0;

	menu();

	std::cin >> option;

	while(option != 'q' || option != 'Q')
	{
		switch(option)
		{
			case 'A':
			case 'a':
				std::cout << "A: ";
				std::cin >> a;
				std::cout << "B: ";
				std::cin >> b;
				c = add(a,b);
				std::cout << c << std::endl;
				break;
			case 'S':
			case 's':
				std::cout << "A: ";
				std::cin >> a;
				std::cout << "B: ";
				std::cin >> b;
				c = sub(a,b);
				std::cout << c << std::endl;
				break;
			case 'M':
			case 'm':
				std::cout << "A: ";
				std::cin >> a;
				std::cout << "B: ";
				std::cin >> b;
				c = mul(a,b);
				std::cout << c << std::endl;
				break;
			case 'D':
			case 'd':
				std::cout << "A: ";
				std::cin >> a;
				std::cout << "B: ";
				std::cin >> b;
				c = div(a,b);
				std::cout << c << std::endl;
				break;
			default:
				return 0;
		}
		std::cin >> option;
	}

}

void menu()
{
	std::cout <<" ========================= " << std::endl
		<< "|Simple Calc by Yoshiguy35|" << std::endl
		<< " ========================= " << std::endl
		<< "ADD: A" << std::endl
		<< "SUB: S" << std::endl
		<< "MUL: M" << std::endl
		<< "DIV: D" << std::endl
		<< "END: Q" << std::endl;
}

double add(double a,double b)
{
	double c;
	c = a + b;
	return c;
}

double sub(double a,double b)
{
	double c;
	c = a - b;
	return c;
}

double mul(double a,double b)
{
	double c;
	c = a * b;
	return c;
}

double div(double a,double b)
{
	double c;
	c = a / b;
	return c;
}
