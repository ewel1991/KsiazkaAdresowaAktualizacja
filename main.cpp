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

char wczytajZnak()
{
    string wejscie = "";
    char znak = {0};

    cin.sync();
    while (true)
    {

        getline(cin, wejscie);

        if (wejscie.length() == 1)
        {
            znak = wejscie[0];
            break;
        }
        cout << "To nie jest pojedynczy znak. Wpisz ponownie." << endl;
    }
    return znak;
}

string wczytajLinie()
{
    string wejscie ="";

    cin.sync();
    getline(cin, wejscie);
    return wejscie;
}

int wczytajLiczbeCalkowita()
{
    string wejscie;
    int liczba;

    cin.sync();
    while(true)
    {
        getline(cin, wejscie);
        stringstream myStream(wejscie);

        if (myStream >> liczba)
        {
            break;
        }
        cout << "To nie jest liczba. Wpisz ponownie." << endl;
    }
    return liczba;
}

string zamienIntNaString (unsigned long long int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

int wczytajOsobyZPlikuUzytkownicy (vector <Uzytkownik> &uzytkownicy)
{
    Uzytkownik uzytkownik;
    string linia = "", wyraz = "";
    int nrKreski = 0, ostatniNumerUzytkownika = 0;

    fstream plik;
    plik.open("Uzytkownicy.txt", ios::in);

    if (plik.good() == false)
    {
        return 0;
    }
    while (getline(plik, linia))
    {

        for (int i = 0; i < linia.length(); i++)
        {

            if (linia[i] != '|')
            {
                wyraz += linia [i];
            }

            else
            {
                nrKreski ++;


                switch (nrKreski)
                {
                case 1:
                    uzytkownik.id = stoi(wyraz);
                    wyraz = "";
                    break;
                case 2:
                    uzytkownik.nazwa = wyraz;
                    wyraz = "";
                    break;
                case 3:
                    uzytkownik.haslo = wyraz;
                    wyraz = "";
                    uzytkownicy.push_back(uzytkownik);
                    nrKreski = 0;
                    break;
                }
            }
        }
    }
    plik.close();

    return ostatniNumerUzytkownika = uzytkownik.id;
}


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

    iloscUzytkownikow = wczytajOsobyZPlikuUzytkownicy(uzytkownicy);

 while(1)
    {
        if(idZalogowanegoUzytkownika == 0)
        {
            system ("cls");
            cout << " >>> MENU GLOWNE <<<" << endl;
            cout << "---------------------" << endl;
            cout << "1. Rejestracja" << endl;
            cout << "2. Logowanie" << endl;
            cout << "9. Zakoncz program" << endl;
            cout << "---------------------" << endl;
            cout << "Twoj wybor: ";

            wybor = wczytajZnak();

            if (wybor == '1')
            {

            }
            else if (wybor == '2')
            {

            }
            else if (wybor == '9')
            {

            }
        }
        else
        {
            system ("cls");
            cout << ">>> KSIAZKA ADRESOWA <<<" << endl << endl;
            cout << "---------------------" << endl;
            cout << "1. Dodaj adresata" << endl;
            cout << "2. Wyszukaj po imieniu" << endl;
            cout << "3. Wyszukaj po nazwisku" << endl;
            cout << "4. Wyswietl wszystkich adresatow" << endl;
            cout << "5. Usun adresata" << endl;
            cout << "6. Edytuj adresata" << endl;
            cout << "---------------------" << endl;
            cout << "7. Zmien haslo" << endl;
            cout << "8. Wyloguj sie" << endl;
            cout << "---------------------" << endl;
            cout << "Twoj wybor: ";

            numerKolejnegoId = wczytajAdresatowZPliku(adresaci, idZalogowanegoUzytkownika);


            cin >> wybor;
            if (wybor == '1')
            {

            }
            else if (wybor == '2')
            {

            }
            else if (wybor == '3')
            {

            }
            else if (wybor == '4')
            {

            }
            else if (wybor == '5')
            {

            }
            else if (wybor == '6')
            {

            }
            else if (wybor == '7')
            {

            }
            else if (wybor == '8')
            {

            }
        }

    }


}

    return 0;
}
