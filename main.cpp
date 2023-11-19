#include "mylib.h"
char skaiciavimo_Strategija;
char pasirinkimas;
char failop;
int main() {
	std::chrono::time_point<std::chrono::system_clock> start, end;
	std::chrono::duration<double> elapsed_seconds;
	cout << " ------------ Pasirinkite ka norite daryti ------------------- " << endl;
	cout << " 1 = Suvesti studento duomenis. " << endl;
	cout << " 2 = Nuskaitant is failo. " << endl;
	cout << " 3 = Sugeneruoti naujus studentus. " << endl;
	cout << " 0 = Baigti darba. " << endl;
	char pas;
	cin >> pas;
	if (pas == '1') {
		system("cls");
		cout << "Kaip norite pateikti pazymius?" << endl;
		cout << " 1 = Ivedant. " << endl;
		cout << " 2 = Generuojant. " << endl;
		cin >> pasirinkimas;
		system("cls");
		cout << "Kaip skaiciuoti galutini bala?" << endl;
		cout << " 1 = Vidurkis. " << endl;
		cout << " 2 = Mediana. " << endl;
		cin >> skaiciavimo_Strategija;
		system("cls");
		vector<studentas> grupe;
		int studentCount;
		cout << "Kiek studentu bus ivesta? " << endl;
		cin >> studentCount;

		for (int i = 0; i < studentCount; i++) {
			studentas K;
			grupe.push_back(K);
		}
		system("cls");
		cout << grupe.size() << " studentai nuskaityti." << endl;

		printf("%-10s%-20s", "Vardas", "Pavarde");
		for (int i = 0; i < grupe[0].getPazNr(); i++)
			printf("%s%d ", "ND", i + 1);
		printf("%10s\n", "Egzaminas");

		for (auto& a : grupe) a.printas();
		cout << endl;

		printf("%-10s%-20s", "Vardas", "Pavarde");
		printf("%10s\n", skaiciavimo_Strategija == '2' ? "Galutinis(Med.)" : "Galutinis (Vid.)");

		for (auto& a : grupe) a.printasRez();
		system("pause");
		system("cls");
		main();
	}

	else if (pas == '3') {
		system("cls");
		cout << " Generuojami duomenys..." << endl;
		cout << endl;

		string filename1 = "studentai1000.txt";
		ofstream pirmas(filename1);
		start = std::chrono::system_clock::now();
		pirmas << " Vardas	" << "\t" << " Pavarde" << "\t\t" << "ND1" << "\t" << "ND2" << "\t" << "ND3" << "\t" << "ND4" << "\t" << "ND5" << "\t" << "EGZ\n";
		for (int i = 1; i <= 1000; i++) {
			pirmas << " Vardas" << i << "\t";
			pirmas << " Pavarde" << i << "\t\t";
			int random = rand() % 10 + 1;
			pirmas << random << "\t";
			random = rand() % 10 + 1;
			pirmas << random << "\t";
			random = rand() % 10 + 1;
			pirmas << random << "\t";
			random = rand() % 10 + 1;
			pirmas << random << "\t";
			random = rand() % 10 + 1;
			pirmas << random << "\t";
			random = rand() % 10 + 1;
			pirmas << random << "\n";
		}
		pirmas.close();

		cout << "Sugeneruoti duomenys ir issaugoti i faila: " << filename1 << "." << endl;
		end = std::chrono::system_clock::now();
		elapsed_seconds = end - start;
		cout << "1 000 studentu generavimas ir issaugojimas uztruko: " << elapsed_seconds.count() << " sekundes." << endl;

		string filename2 = "studentai10000.txt";
		ofstream antras(filename2);
		start = std::chrono::system_clock::now();
		antras << " Vardas	" << "\t" << " Pavarde" << "\t\t" << "ND1" << "\t" << "ND2" << "\t" << "ND3" << "\t" << "ND4" << "\t" << "ND5" << "\t" << "EGZ\n";
		for (int i = 1; i <= 10000; i++) {
			antras << " Vardas" << i << "\t";
			antras << " Pavarde" << i << "\t\t";
			int random = rand() % 10 + 1;
			antras << random << "\t";
			random = rand() % 10 + 1;
			antras << random << "\t";
			random = rand() % 10 + 1;
			antras << random << "\t";
			random = rand() % 10 + 1;
			antras << random << "\t";
			random = rand() % 10 + 1;
			antras << random << "\t";
			random = rand() % 10 + 1;
			antras << random << "\n";
		}
		antras.close();
		cout << "Sugeneruoti duomenys ir issaugoti i faila: " << filename2 << "." << endl;
		end = std::chrono::system_clock::now();
		elapsed_seconds = end - start;
		cout << "10 000 studentu generavimas ir issaugojimas uztruko: " << elapsed_seconds.count() << " sekundes." << endl;

		string filename3 = "studentai100000.txt";
		ofstream trecias(filename3);
		start = std::chrono::system_clock::now();
		trecias << " Vardas	" << "\t" << " Pavarde" << "\t\t" << "ND1" << "\t" << "ND2" << "\t" << "ND3" << "\t" << "ND4" << "\t" << "ND5" << "\t" << "EGZ\n";
		for (int i = 1; i <= 100000; i++) {
			trecias << " Vardas" << i << "\t";
			trecias << " Pavarde" << i << "\t\t";
			int random = rand() % 10 + 1;
			trecias << random << "\t";
			random = rand() % 10 + 1;
			trecias << random << "\t";
			random = rand() % 10 + 1;
			trecias << random << "\t";
			random = rand() % 10 + 1;
			trecias << random << "\t";
			random = rand() % 10 + 1;
			trecias << random << "\t";
			random = rand() % 10 + 1;
			trecias << random << "\n";
		}
		trecias.close();
		cout << "Sugeneruoti duomenys ir issaugoti i faila: " << filename3 << "." << endl;
		end = std::chrono::system_clock::now();
		elapsed_seconds = end - start;
		cout << "100 000 studentu generavimas ir issaugojimas uztruko: " << elapsed_seconds.count() << " sekundes." << endl;

		string filename4 = "studentai1000000.txt";
		ofstream ketvirtas(filename4);
		start = std::chrono::system_clock::now();
		ketvirtas << " Vardas	" << "\t" << " Pavarde" << "\t\t" << "ND1" << "\t" << "ND2" << "\t" << "ND3" << "\t" << "ND4" << "\t" << "ND5" << "\t" << "EGZ\n";
		for (int i = 1; i <= 1000000; i++) {
			ketvirtas << " Vardas" << i << "\t";
			ketvirtas << " Pavarde" << i << "\t\t";
			int random = rand() % 10 + 1;
			ketvirtas << random << "\t";
			random = rand() % 10 + 1;
			ketvirtas << random << "\t";
			random = rand() % 10 + 1;
			ketvirtas << random << "\t";
			random = rand() % 10 + 1;
			ketvirtas << random << "\t";
			random = rand() % 10 + 1;
			ketvirtas << random << "\t";
			random = rand() % 10 + 1;
			ketvirtas << random << "\n";
		}
		ketvirtas.close();
		cout << "Sugeneruoti duomenys ir issaugoti i faila: " << filename4 << "." << endl;
		end = std::chrono::system_clock::now();
		elapsed_seconds = end - start;
		cout << "1 000 000 studentu generavimas ir issaugojimas uztruko: " << elapsed_seconds.count() << " sekundes." << endl;

		string filename5 = "studentai10000000.txt";
		ofstream penktas(filename5);
		start = std::chrono::system_clock::now();
		penktas << " Vardas	" << "\t" << " Pavarde" << "\t\t" << "ND1" << "\t" << "ND2" << "\t" << "ND3" << "\t" << "ND4" << "\t" << "ND5" << "\t" << "EGZ\n";
		for (int i = 1; i <= 9999999; i++) {
			penktas << " Vardas" << i << "\t";
			penktas << " Pavarde" << i << "\t\t";
			int random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\n";
		}
		for (int i = 10000000; i <= 10000000; i++) {
			penktas << " Vardas" << i << "\t";
			penktas << " Pavarde" << i << "\t";
			int random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\t";
			random = rand() % 10 + 1;
			penktas << random << "\n";
		}
		penktas.close();
		cout << "Sugeneruoti duomenys ir issaugoti i faila: " << filename5 << "." << endl;
		end = std::chrono::system_clock::now();
		elapsed_seconds = end - start;
		cout << "10 000 000 studentu generavimas ir issaugojimas uztruko: " << elapsed_seconds.count() << " sekundes." << endl;
		system("pause");
		system("cls");
		main();

	}


	else if (pas == '2') {
		system("cls");
		vector<studentas> grupe;
		cout << "Kaip skaiciuoti galutini bala? " << endl;
		cout << " 1 = vidurkis. " << endl;
		cout << " 2 = mediana. " << endl;
		cin >> skaiciavimo_Strategija;
		system("cls");
		cout << "Koki faila nuskaityti? " << endl;
		cout << " 1 = 1 000 studentu. " << endl;
		cout << " 2 = 10 000 studentu. " << endl;
		cout << " 3 = 100 000 studentu. " << endl;
		cout << " 4 = 1 000 000 studentu. " << endl;
		cout << " 5 = 10 000 000 studentu. " << endl;
		cin >> failop;
		ifstream failas;
		try {
			string filename;
			if (failop == '1') {
				filename = "studentai1000.txt";
			}
			else if (failop == '2') {
				filename = "studentai10000.txt";
			}
			else if (failop == '3') {
				filename = "studentai100000.txt";
			}
			else if (failop == '4') {
				filename = "studentai1000000.txt";
			}
			else if (failop == '5') {
				filename = "studentai10000000.txt";
			}
			else {
				throw std::runtime_error("Neteisingas pasirinkimas.");
			}

			start = std::chrono::system_clock::now();
			failas.open(filename);
			if (!failas.is_open()) {
				throw std::runtime_error("Klaida atidarant faila.");
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

			end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			cout << "Duomenu nuskaitymas uztruko: " << elapsed_seconds.count() << " sekundes." << endl;

			cout << grupe.size() << " studentai nuskaityti." << endl;

			ofstream vargsiukai_failas("vargsiukai.txt");
			ofstream kietiakiai_failas("kietiakiai.txt");

			start = std::chrono::system_clock::now();

			if (vargsiukai_failas.is_open() && kietiakiai_failas.is_open()) {
				for (auto& student : grupe) {
					if (student.getRezultatas() < 5.0) {
						vargsiukai_failas << student.getVardas() << " " << student.getPavarde() << " " << student.getRezultatas() << "\n";
					}
					else {
						kietiakiai_failas << student.getVardas() << " " << student.getPavarde() << " " << student.getRezultatas() << "\n";
					}
				}

				vargsiukai_failas.close();
				kietiakiai_failas.close();

				cout << "Studentai suskirstyti ir issaugoti failuose 'vargsiukai.txt' ir 'kietiakiai.txt'." << endl;
			}
			else {
				cout << "Klaida atidarant naujus failus vargsiukams ir kietiakiams." << endl;
			}

			end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			cout << "Studentu rusiavimas uztruko: " << elapsed_seconds.count() << " sekundes." << endl;

		}
		catch (const std::exception& e) {
			cout << e.what() << endl;
			return 1;
		}

		system("pause");
		system("cls");
		main();
	}
	if (pas == '0') {
		return 0;
	}
}
