#include <iostream>
using namespace std;

int main ()
{
	int wartosc;
	
	cout << "Podaj liczbe calkowita mniejsza od 10:   ";
	cin >> wartosc;
	if ( wartosc < 10)
	{
		cout << "\n\nPrawidlowo, liczba " << wartosc << " jest mniejsza od 10 \n \n";
	}
	else
	{
		cout << "\n\nZle, liczba " << wartosc <<" jest za wysoka!";
	}
	return 0;
	
}
