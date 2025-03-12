#pragma once
#ifndef _Compte
#define _Compte

#include <string>

class Compte{
private:
	std::string libelle;
	double solde;
public:
	/*fonction compte qui initialise solde 
	et libelle avec des valeurs de base*/
	Compte();
	/*fonction compte qui récupère un libelle et
	un solde passés en paramètres pour créer
	un compte*/
	Compte(double soldeIni, std::string lib, std::string mdp, std::string ID);

	/*fonction consulter qui renvoie un string 
	correspondant au solde*/
	std::string Consulter();
	/*obtenir le libellé*/
	std::string getLibelle();
	/*obtenir le solde*/
	double getSolde();
	/*mettre le libelle voulu*/
	void setLibelle(std::string lib);
	/*changer le solde manuellement*/
	void setSolde(double nouvSolde);
	/*déposer de l'argent*/
	void deposer(double montantADeposer);
	/*retirer de l'argent*/
	void retirer(double montantARetirer);
	/*fonction qui débite les frais*/
	void debiterFrais(double fraisADebiter);
	/*fonction qui calcule les aggios en fonction des jours,
	du montant du découvert, et du taux*/
	void calculerAggios(double taux, double MontantDecouvert, int jours);
	/*fonction pour faire un virement*/
	void effectuerVirement(double montant);


};

#endif