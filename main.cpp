#include "mylib.h"
char skaiciavimo_Strategija = 'v';
char pasirinkimas;
int main() {
	cout << "Kaip skaiciuoti galutini bala? (v - vidurkis, m - mediana): ";
	cin >> skaiciavimo_Strategija;
	cout << "Pasirinkite ivedimo buda rankinis (h) / nuskaitant is failo (f): ";
	char pas;
	cin >> pas;
	if (pas == 'H' || pas == 'h') {
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
	else if (pas == 'F' || pas == 'f') {
		vector<studentas> grupe;
		ifstream failas("kursiokai.txt");

		try {
			if (!failas.is_open()) {
				throw std::runtime_error("Klaida atidarant failа.");
			}

			string eilute;

			getline(failas, eilute);

			while (getline(failas, eilute)) {
				string vardas, pavarde;
				int egzaminas;
				vector<int> pazymiai;

				istringstream iss(eilute);
				iss >> vardas >> pavarde;

				int pazymys;
				while (iss >> pazymys) {
					pazymiai.push_back(pazymys);
				}

				egzaminas = pazymiai.back();
				pazymiai.pop_back();

				studentas K(vardas, pavarde, pazymiai, egzaminas);
				grupe.push_back(K);
			}

			failas.close();
			cout << endl;

			printf("%-10s%-20s", "Vardas", "Pavarde");
			for (int i = 0; i < grupe[0].getPazNr(); i++) {
				printf("%s%d ", "ND", i + 1);
			}
			printf("%10s\n", "Egzaminas");

			for (auto& student : grupe) {
				student.printas();
			}
			cout << endl;

			printf("%-10s%-20s", "Vardas", "Pavarde");
			printf("%10s\n", skaiciavimo_Strategija == 'm' ? "Galutinis(Med.)" : "Galutinis (Vid.)");

			for (auto& student : grupe) {
				student.printasRez();
			}
		}
		catch (const std::exception& e) {
			cout << "Ivyko klaida: " << e.what() << endl;
			return 1;
		}
		system("pause");
	}
}