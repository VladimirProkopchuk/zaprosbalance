#include <iostream>
#include <string>

struct IDklienta {
	int IDnumber;
	std::string name;
	double balance;
};
void add(IDklienta& k, double balance) {
	balance = k.balance;

}


int main() {
	system("chcp 1251>nul");
	IDklienta klient;
	double  balance;
	std::cout << "Введите номер счета: ";
	std::cin >> klient.IDnumber;
	std::cout << "Введите имя владельца: ";
	std::cin >> klient.name;
	std::cout << "Введите баланс: ";
	std::cin >> klient.balance;
	std::cout << "Введите новый баланс: ";
	std::cin >> balance;

	add(klient, balance);

	std::cout << klient.IDnumber << " " << klient.name << " Ваш баланс:" << balance;
}