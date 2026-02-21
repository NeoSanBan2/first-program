#include <iostream>

double num1;
double num2;
char op;

double calc(double num1, char op, double num2)
{
	double res;

	switch (op)
	{
	case '+':
		res = (num1 + num2);
		break;
	case '-':
		res = (num1 - num2);
		break;
	case '*':
		res = (num1 * num2);
		break;
	case '/':
		if (num2 != 0)
		{
			res = (num1 / num2);
		}
		else
		{
			std::cout << "Can't divide by 0.";
			return 0;
		}
		break;
	default:
		std::cout << "Error: Unknown operator." << std::endl;
		return 0;
	}
	return res;
}

int main()
{
	std::cout << "Number 1: ";
	std::cin >> num1;
	std::cout << "Operator(+, -, *, /): ";
	std::cin >> op;
	std::cout << "Number 2: ";
	std::cin >> num2;

	double res = calc(num1, op, num2);
	std::cout << "Result: ";
	std::cout << res;

	return 0;
}
