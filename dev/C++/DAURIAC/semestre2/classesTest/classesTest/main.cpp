#include <iostream>
#include <fstream>
#include "Compte.h"


void connexionAuCompte(std::string ID,std::string mdp) {
	std::string ligne;
	std::ifstream fich;
	int i=0;
	fich.open("ID.txt");
	do {
		fich >> ligne;
		fich.get();
		i++;
	} while (ligne != ID);
	std::cout << i;


}

void créerCompte(std::string ID, std::string mdp) {

}


int main() {
	int option;
	std::string ID;
	std::string mdp;
	std::cout << "1 : J'ai déjà un compte.\n"
			  << "2 : Je n'ai pas encore de compte.\n"
			  << "3 : quitter le programme.\n";
	std::cin >> option;
	switch (option) {
		case 1:
			std::cout << "ID :";
			std::cin >> ID;
			std::cout << "mdp :";
			std::cin >> mdp;
			connexionAuCompte(ID, mdp);
			break;
		case 2:
			std::cout << "Création du compte :\n"
					  << "ID :";
			std::cin >> ID;
			std::cout << "mdp :";
			std::cin >> mdp;
			créerCompte(ID, mdp);
			break;
		case 3:
			break;

	}





	return 0;	
}