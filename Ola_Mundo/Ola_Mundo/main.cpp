#include <iostream>
using namespace std;


int main() {

	setlocale(LC_ALL, "portuguese");
	string nome;

	cout << "Olá Mundo.\n";
	cout << "Indique o seu nome: ";
	cin >> nome;

	cout << "\nOlá "<< nome << endl;

	return 0;
}