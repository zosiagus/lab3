// lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	/*zad1
		int a, b;
		cout << "podaj dwie liczby calkowite: ";
		 cin >> a;
		cin >> b;

		if (a == b) {
			cout << "liczby sa rowne" << endl;

		}
		else if (a < b) {
			cout << a << " jest mniejsze od " << b << endl;
		}
		else {
			cout << a << " jest wieksze od " << b << endl;
		}
		*/
		/*zad2

		int a, b;
		cout << "podaj dwie liczby calkowite: ";
		 cin >> a;
		cin >> b;

		if (a == b) {
			cout << "liczby sa rowne" << endl;
			}
		else {
			if (a < b) {
				cout << a << " jest mniejsze niz " << b << endl;
			}
			else {
				cout << a << " jest wieksze niz " << b << endl;
			}


			}
			*/





			//zad3
			//float r;

			//cout << "podaj wspolczynnik r: ";
			//cin >> r;

			//if (r >= 0.7 && r <= 1.0) {
				//cout << "bardzo silna korelacja dodatnia" << endl;
			//}
			//else if (r >= 0.5 && r<0.7) {
				//cout << "silna korelacja dodatnia" << endl;
			//}
			//else if (r >= 0.3 && r<0.5) {
				//cout << "umiarkowana korelacja dodatnia" << endl;
			//}
			//else if (r >= 0.2 && r<0.3) {
				//cout << "slaba korelacja dodatnia" << endl;
			//}
			//else if (r >= 0 && r<0.2) {
				//cout << "brak korelacji" << endl;
			//}

			//zad 4

			/*float a, b;
			cout << "podaj dwie liczby rzeczywiste: ";
			cin >> a;
			cin >> b;
			cout << "wybierz operacje do wykonania (+, -, *, /): ";
			char op;
			cin >> op;

			if (op == '+') {
				cout << "wynik: " << a + b << endl;
			}
			else if (op == '-') {
				cout << "wynik: " << a - b << endl;
			}
			else if (op == '*') {
				cout << "wynik: " << a * b << endl;
			}
			else if (op == '/') {
				if (b == 0)
					cout << "nie dzieli sie przez zero" << endl;
			}
			else if (op == '/') {
				cout << "wynik: " << a/b;

		   }
		   */

		   /*zad5
		   int i = 0;

		   while (true) {
			   cout << i << endl;

			   i++;
		   }
		   */

		   /*zad 6
	while (true) {
		float a, b;
		cout << "podaj dwie liczby rzeczywiste: ";
		cin >> a;
		cin >> b;
		cout << "wybierz operacje do wykonania (+, -, *, /): ";
		char op;
		cin >> op;

		if (op == '+') {
			cout << "wynik: " << a + b << endl;
		}
		else if (op == '-') {
			cout << "wynik: " << a - b << endl;
		}
		else if (op == '*') {
			cout << "wynik " << a * b << endl;
		}
		else if (op == '/') {
			if (b == 0) {
				cout << "nie mozna dzielic przez 0" << endl;
			}
			else {
				cout << "wynik: " << a / b << endl;
			}
		}

		string wybor;
		cout << "czy chcesz zakonczyc program? " << endl;
		cin >> wybor;

		if (wybor == "tak") {
			cout << "koniec programu " << endl;
			break;
		}


	}
	*/
//zad7

int liczba = 0;

while (true) {
	liczba++;
	if (liczba % 2 != 0) {
		cout << liczba << endl;
		
	}
	if (liczba == 200) {
		break;
	}
}

	return 0;
}


