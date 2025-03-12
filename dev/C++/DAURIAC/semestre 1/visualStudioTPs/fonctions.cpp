#include <vector>
#include <iostream>
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

bool EstPalindrome(std::string w) {
	int t = w.size()-1;
	bool pal = true;
	for (int i = 0; i < t; i++) {
		if (w[i] != w[i - 1]) pal = false;
	}
	return pal;
}