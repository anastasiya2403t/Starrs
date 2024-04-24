
//звездочками рисует треугольник высотой n

#include <iostream>

char stringOfStars(int n) {
	if (n == 1) return '*';
	std::cout << stringOfStars(n - 1) << std::endl;
	while (n) {
		std::cout << '*';
		n--;
	}
}

int main()
{
	std::cout << "Input the number of strings" << std::endl;
	int n = 0;
	std::cin >> n;
	if (n > 0) std::cout << stringOfStars(n);
}
