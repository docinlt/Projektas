#include "mylib.h"
char skaiciavimo_Strategija = 'v';
char pasirinkimas;
int main() {
	cout << "Kaip skaiciuoti galutini bala? (v - vidurkis, m - mediana): ";
	cin >> skaiciavimo_Strategija;
	cout << "Kaip norite pateikti pazymius, ivedant(i) ar generuojant(r): ";
	cin >> pasirinkimas;
	vector<studentas> grupe;
	int studentCount;
	cout << "Kiek studentu bus ivesta? ";
	cin >> studentCount; 

	for (int i = 0; i < studentCount; i++) {
		studentas K;
		grupe.push_back(K);
	}
	cout << endl;

	printf("%-10s%-20s", "Vardas", "Pavarde");
	for (int i = 0; i < grupe[0].getPazNr(); i++)
		printf("%s%d ", "ND", i + 1);
	printf("%10s\n", "Egzaminas");

	for (auto& a : grupe) a.printas();
	cout << endl;

	printf("%-10s%-20s", "Vardas", "Pavarde");
	printf("%10s\n", skaiciavimo_Strategija == 'm' ? "Galutinis(Med.)" : "Galutinis (Vid.)");

	for (auto& a : grupe) a.printasRez();
	system("pause");
}
