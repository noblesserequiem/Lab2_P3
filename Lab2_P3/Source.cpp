#include <iostream>
#include <conio.h>
using namespace std;

class Carte {
	char titlu[20], nume_autor[20], editura[20];
	int anul;
public:
	Carte(char t[20], char n_a[20], char edit[20], int);

	void afisare() {
		cout << "Titlu: " << titlu << endl;
		cout << "Nume Autor: " << nume_autor << endl;
		cout << "Editura:" << editura << endl;
		cout << "An:" << anul;
		cout << endl;

	}


};

Carte::Carte(char t[20], char n_a[20], char edit[20], int an)
{

	strcpy_s(titlu, sizeof(t), t);
	strcpy_s(nume_autor, sizeof(n_a), n_a);
	strcpy_s(editura, sizeof(edit), edit);
	anul = an;

}


int main()
{
	Carte c1((char*)"C1",(char*) "seb",(char*) "rom", 23);
	c1.afisare();
	_getch();
	return 0;




}