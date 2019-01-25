// ConsoleApplication14.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
using namespace std;
void wypiszTablice(int tab[], int ile) {
	int indeks = 0;
		
	do {
		cout << tab[indeks] << endl;
		indeks ++;
	} while (indeks < ile);
}
int sumaLiczb(int tablica[],int liczba) {
	int oblicz = 0;
	int indeks = 0;
	
	do {
		oblicz += tablica[indeks];
		indeks++;
	} while (indeks < liczba);
	return oblicz;
}

int main(int oblicz)
{
	int dane[5];
	dane[0] = 11;
	dane[1] = 5;
	dane[2] = 7;
	dane[3] = 8;
	dane[4] = 2;
	wypiszTablice(dane, 5);
	int wynik = sumaLiczb(dane, 5);
	cout << "Suma liczb to: " << wynik << endl;
    }

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
