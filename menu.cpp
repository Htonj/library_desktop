#include <iostream>
//#include "Book.hpp"
//#include "Books.hpp"

void analizeChoise(int choise, int searchChoise);

void interactiveLibrary(int choise, int searchChoise) {
	while (true) {
		std::cout << "#--------------------#" << std::endl;
		std::cout << "���� ����������:\n" << std::endl;
		std::cout << "1. �������� �����" << std::endl;
		std::cout << "2. ������� �����" << std::endl;
		std::cout << "3. ����� �����" << std::endl;
		std::cout << "(������� 0 ��� ������)\n" << std::endl;
		std::cin >> choise;
		std::cout << "\n#--------------------#" << std::endl;
		if (choise == 0)
			break;
		else
			analizeChoise(choise, searchChoise);
	}
}

void analizeChoise(int choise, int searchChoise) {
	if (choise == 1) {}
	if (choise == 2) {}
	if (choise == 3) {
		std::cout << "#--------------------#" << std::endl;
		std::cout << "�������� �� ������ �������� ������ �����:\n" << std::endl;
		std::cout << "1. �� ��������" << std::endl;
		std::cout << "2. �� ������" << std::endl;
		std::cout << "3. �� ID" << std::endl;
		std::cout << "4. �� ����������" << std::endl;
		std::cout << "(������� 0 ��� ������)\n" << std::endl;
		std::cin >> searchChoise;
		std::cout << "\n#--------------------#" << std::endl;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	int choose = 0;
	int searchChoose = 0;
	interactiveLibrary(choose, searchChoose);
}