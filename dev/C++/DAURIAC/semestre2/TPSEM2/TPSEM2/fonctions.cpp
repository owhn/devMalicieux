#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <sstream>


void Bonjour() {
	std::cout << "Bonjour";
}

void calcMoyenne() {
	setlocale(LC_CTYPE, "fra");
	double val;
	std::vector<double> tab;
	double somme = 0;
	double moyenne;
	int i = 0;

	do {
		std::cout << "saisir une valeur positive, la saisie s'arrête quand la valeur donnée est négative : ";
		std::cin >> val;
		tab.push_back(val);
	} while (val >= 0);
	tab.pop_back();
	for (int i = 0; i < tab.size(); i = i + 1) {
		somme = somme + tab[i];
	}
	moyenne = somme / tab.size();
	std::cout << std::endl << "moyenne : " << moyenne;
}

double calcMoyenne1(std::vector<double>& tab, double& somme, double& moyenne) {
	somme = 0;
	for (int i = 0; i < tab.size(); i = i + 1) {
		somme = somme + tab[i];
	}
	moyenne = somme / tab.size();
	return moyenne;
}

void bonus(std::vector<double>& tab, double& somme, double& moyenne, double& bonusVal) {
	for (int i = 0; i < tab.size(); i = i + 1) {
		tab[i] = tab[i] + bonusVal;
	}
}

void sup10(std::vector<double> notesIni, std::vector<double>& notesFin) {
	for (int i = 0; i < notesIni.size(); i++) {
		if (notesIni[i] >= 10) {
			notesFin.push_back(notesIni[i]);
		}
	}
}

void ajouter1(int& a, int& b) {
	a = a + 1;
	b = b + 1;
}

std::string multiples(int a) {
	std::string tab;
	for (int i = 0; i < 11; i++) {
		tab = tab + std::to_string(a) + " x " + std::to_string(i) + " = " + std::to_string(i * a) + "\n";
	}
	return tab;
}

bool PremierOuPas(int nb) {
	bool p = true;
	for (int i = 2; i < nb; i++) {
		if (nb % i == 0) p = false;
	}
	return p;
}

bool EstPalindrome(std::string mot) {
	int taille = mot.size() - 1;
	bool pal = true;
	for (int i = 0; i < taille; i++) {
		if (mot[i] != mot[taille - i]) {
			pal = false;
		}
	}
	return pal;
}

void outFichier() {
	std::ofstream fichout;
	std::string msg = "obosido";
	fichout.open("test.txt");

	fichout << msg << std::endl;

	if (fichout) {
		std::cout << "nice" << std::endl;
	}
	else {
		std::cout << "erreur" << std::endl;
	}
	fichout.close();
}

void inFichier() {
	std::ifstream fichIn;
	std::string msg;
	fichIn.open("test.txt");
	fichIn >> msg;
	std::cout << msg;
	fichIn.close();
}

void ajtFichier() {
	std::ifstream fichIn; //ouvrir le fichier en lecture pour récupérer ce qu'il y a dedans initialement
	std::string ini;
	fichIn.open("test.txt");
	fichIn >> ini;
	std::cout << ini << std::endl;
	fichIn.close();

	std::ofstream fichOut; //ouvrir le fichier en écriture pour ajouter ce que l'on veut ajouter en plus de ce qu'il y avait (=ini) pour ne pas tout remplacer
	std::string ajt;
	std::cout << "qu'ajouter au fichier ? " << std::endl;
	std::cin >> ajt;
	fichOut.open("test.txt");
	fichOut << ini << "\n" << ajt;
	fichOut.close();
}

void ajtFichierInOut() {
	std::fstream fich; //ouvrir le fichier en lecture et écriture
	std::string ini;
	fich.open("test.txt");
	fich >> ini;
	std::cout << ini << std::endl;
	fich.close();

	fich.open("test.txt"); //fermer puis rouvrir pour revenir à la ligne
	std::string ajt;
	std::cout << "qu'ajouter au fichier ? " << std::endl;
	std::cin >> ajt;
	fich << ini << ajt;
	fich.close();
}

void passFinder() {
	setlocale(LC_CTYPE, "fra");
	std::vector<std::string> list;
	std::ifstream fichIn;
	std::string pass;
	std::string passfinder;
	std::srand((unsigned)std::time(0));
	int valRand = std::rand() % 581;
	fichIn.open("passlist1.txt");
	for (int i = 0; i < valRand; i++) {
		fichIn >> pass;
		std::cout << "mdp n°" << i + 1 << " : " << pass << std::endl;
	}
	std::cout << "mdp final : " << pass << std::endl;
	fichIn.close();
	std::cout << "mot de passe n°" << valRand << " de la liste." << std::endl;

	std::fstream fich;
	fich.open("passlist1.txt");
	int i = 0;
	do {
		i++;
		fich >> passfinder;
		if (passfinder == pass) {
			std::cout << "mot de passe trouvé : " << passfinder << ":" << pass << std::endl;
		}
		else {
			std::cout << "erreur n°" << i << std::endl;
		}
	} while (passfinder != pass);

	fich.close();
}

void editBin() {
	int i, j;
	std::string test("testBin.bin");
	std::ofstream fich;
	fich.open(test.c_str(), std::ios::binary);

	for (i = 1; i < 1000000; i *= 10) {
		j = i + 1;
		fich.write(reinterpret_cast<const char*>(&j), sizeof(j));
	}
	fich.close();
}

bool palRecursive1(std::string mot, int i, int len) {
	if (mot[i] != mot[len - i])	return 0;
	else if (i < len)	return palRecursive1(mot, i + 1, len);
	else return 1;
}

void palRecursive() {
	std::string mot = "kayak";
	int len = mot.length() - 1;
	int i = 0;
	bool pal = palRecursive1(mot, i, len);
	if (pal == 1) std::cout << "PALINDROME";
	else std::cout << "PAS PALINDROME";
}