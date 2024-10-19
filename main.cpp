#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <cstdlib>

struct Uzytkownik
{
    int id;
    string nazwa = "", haslo = "";
};

struct Adresat
{
    int id = 0, idUzytkownika = 0;
    string imie = "", nazwisko = "", numerTelefonu ="", email ="", adres ="";
};




using namespace std;

int main()
{
    vector <Adresat> adresaci;
    vector <Uzytkownik> uzytkownicy;
    Adresat adresat;
    Uzytkownik uzytkownik;
    char wybor;
    int numerKolejnegoId = 0, iloscUzytkownikow = 0, idDoZmiany = 0, idZalogowanegoUzytkownika = 0;
    string liniaDoZmiany ="";


    return 0;
}
