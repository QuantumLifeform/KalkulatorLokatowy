#include <iostream>
using namespace std;

int main() {
    double kwota, oprocentowanie;
    int dlugosc;
    cout << "Podaj kwotę: ";
    cin >> kwota;
    cout << "Podaj długość lokaty w miesiącach: ";
    cin >> dlugosc;
    cout << "Podaj oprocentowanie w skali roku: ";
    cin >> oprocentowanie;

    // obliczenie odsetek
    double odsetki = kwota * oprocentowanie * dlugosc / 12 / 100;

    // potrącenie podatku
    double podatek = 0.19 * odsetki;
    double wynik = odsetki - podatek;

    // wyświetlenie wyniku
    cout << "Odsetki wyniosą: " << odsetki << endl;
    cout << "Po odjęciu podatku (19%): " << wynik << endl;

    return 0;
}