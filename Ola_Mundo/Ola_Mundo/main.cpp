#include <iostream>
using namespace std;


int main() {

	setlocale(LC_ALL, "portuguese");
	string nome;

	cout << "Ol� Mundo.\n";
	cout << "Indique o seu nome: ";
	cin >> nome;

	cout << "\nOl� "<< nome << endl;

	return 0;
}