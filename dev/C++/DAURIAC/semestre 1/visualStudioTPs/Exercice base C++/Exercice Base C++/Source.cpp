#include <iostream>
#include "../../fonctions.h"
#include "../../fonctions.cpp"
#include <vector>
#include <fstream>
#include <cstdlib>
#include <cmath>

//
//int main()
//{
//	setlocale(LC_CTYPE , "fra"); //accents
//	int a;
//	a = 1254;
//	a = 123;
//	int b;
//	b = a;
//	
//	return b;
//
//	int x;
//	std::cout << "nbr éé ? ";
//	std::cin >> x;
//	std::cout << "nbr :" << x;
//
//
//	return x;
//}

//int main()
//{
//	long long a;
//	std::cout << "nbr ? ";
//	std::cin >> a;
//	long long b;
//	b = a;
//
//	std::cout << "nbr : " << a << std::endl;
//	std::cout << "taille de nbr en octet : " << sizeof(a);
//
//
//	return 0;
//}

//int main()
//{
//	double a;
//	std::cout << "reel : ";
//	std::cin >> a;
//	std::cout << "votre reel est :" << a << ", sa taille est : " << sizeof(a);
//
//
//	return 0;
//}

//int main()
//{
//	char a;
//	a = 0x41;
//	std::cout << a << " size : " << sizeof(a);
//
//	
//	return 0;
//}

//int main() {
//	std::string a;
//	a = "BOBOBOW";
//	std::cout << a << std::endl;
//	std::cout << "size of a : " << sizeof(a) << std::endl;
//	std::cout << "length of a : " << a.size() << std::endl;
//	return 0;
//}

//int main() {		// demander à l'utilisateur un entier, si superieur à 100 : afficher "score max", si inferieur à 100, afficher "pas bon".
//	int n;
//	std::cout << "n ?";
//	std::cin >> n;
//
//	if (n >= 100) {
//		std::cout << "SCORE MAX";
//	}
//	else {
//		std::cout << "Pas bon";
//	}
//	return 0;
//}

//int main() {		// demander à l'utilisateur un entier, si superieur à 100 : afficher "score max", si entre 50 et 100, afficher "pas bon", si inferieur à 50, afficher " trop nul".
//	int n;
//	std::cout << "n ?";
//	std::cin >> n;
//
//	if (n >= 100) {
//		std::cout << "SCORE MAX";
//	}
//	else if (n < 100 && n >= 50 ) {
//		std::cout << "Pas bon";
//	}
//	else {
//		std::cout << "trop nul";
//	}
//	return 0;
//}

//int main() {
//	setlocale(LC_CTYPE, "fra");
//
//	int liste[100];
//
//	int i = 0;
//	int somme = 0;
//	float moyenne;
//	while (i<100) {
//		std::cout << "entrer un réel :";
//		std::cin >> liste[i];
//		somme = somme + liste[i];
//
//		i = i + 1;
//	}
//	moyenne = somme /100.0;
//	std::cout << moyenne;
//
//
//	return 0;
//}

//int main() {
//	char chaine[] = "Bonjour tu vas bien ?";
//	std::cout << sizeof(chaine) << std::endl;
//	int e = sizeof(chaine);
//	for (int i = 0 ; e ; i=i+1) {
//	std::cout << chaine[i];
//	}
//	return 0;
//}	

//int main() { // saisir des entiers et vérifier s'ils sont pairs ou impairs :
//	int tab[50];
//	int a = 0;
//	for (int i = 0; i < 50; i = i + 1) {
//		std::cout << "nombre dans la case " << i + 1 << " :";
//		std::cin >> a;
//		tab[i] = a;
//	}
//	for (int i = 0; i < 50; i = i + 1) {
//		if (tab[i] % 2 == 0) {
//			std::cout << tab[i] << " est pair" << std::endl;
//		}
//		else {
//			std::cout << tab[i] << " est impair" << std::endl;
//		}
//	}
//
//	return 0;
//}

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

void passTry() {
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

void interchange(int& a, int& b) {
	std::cout << "a : " << a << ", ada : " << &a << std::endl;
	std::cout << "b : " << b << ", adb : " << &b << std::endl;
	int tmp;
	tmp = b;
	b = a;
	a = tmp;
	std::cout << "a : " << a << ", ada : " << &a << std::endl;
	std::cout << "b : " << b << ", adb : " << &b << std::endl;
}
//int main() {
//	int x = 2;
//	int y = 3;
//	std::cout << "x : " << x << ", adx : " << &x << std::endl;
//	std::cout << "y : " << y << ", ady : " << &y << std::endl;
//	interchange(x,y);
//	std::cout << "x : " << x << ", adx : " << &x << std::endl;
//	std::cout << "y : " << y << ", ady : " << &y << std::endl;
//
//	return 0;
//}


//int main() {
//	setlocale(LC_CTYPE, "fra");
//	double val;
//	std::vector<double> tab;
//	std::vector<double> tabSup10;
//	double somme = 0;
//	double moyenne;
//	do {
//		std::cout << "saisir une valeur positive, la saisie s'arrête quand la valeur donnée est négative : ";
//		std::cin >> val;
//		tab.push_back(val);
//	} while (val >= 0);
//	tab.pop_back();
//	
//	calcMoyenne1(tab,somme,moyenne);
//	std::cout << std::endl << "moyenne avant le bonus : " << moyenne << std::endl;
//	double bonusVal;
//	std::cout << "bonus : ";
//	std::cin >> bonusVal;
//
//	bonus(tab, somme, moyenne, bonusVal);
//	calcMoyenne1(tab, somme, moyenne);
//	sup10(tab, tabSup10);
//
//	std::cout << std::endl << "moyenne après le bonus : " << moyenne << std::endl;
//	
//	for (int i = 0; i < tab.size(); i = i + 1) {
//		std::cout << tab[i] << std::endl;
//	}
//	std::cout << std::endl << "notes superieures à 10 :" << std::endl;
//
//	for (int i = 0; i < tabSup10.size(); i = i + 1) {
//		std::cout << tabSup10[i] << std::endl;
//	}
//
//	return 0;
//}

void oppose(int& a, int& b) {
	a = a - (a * 2);
	b = b - (b * 2);
}
//int main() {
//	setlocale(LC_CTYPE, "fra");
//	int a = 2;
//	int b = -5;
//	oppose(a,b);
//	std::cout << a << std::endl << b;
//	return 0;
//}

//int main() {
//	int x;
//	cout << "nombre :";
//	cin >> x;
//	bool premier = PremierOuPas(x);
//	if (premier == false) std::cout << "PAS PREMIER";
//	else std:: cout << "PREMIER";
//	return 0;
//}

int main() {
	std::string mot;
	std::cout << "mot ? :";
	std::cin >> mot;
	bool palindrome;
	palindrome = EstPalindrome(mot);
	if (palindrome = true) std::cout << "PALINDROME";
	else std::cout << "PAS PALINDROME";
	return 0;
}