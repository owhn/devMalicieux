#include "Compte.h"
#include <iostream>

Compte::Compte() {
	solde = 0;
	libelle = "BNP";
}

Compte::Compte(double soldeIni, std::string lib,std::string mdp,std::string ID) {
	solde = soldeIni;
	libelle = lib;
}

std::string Compte::Consulter() {
	std::string(solde);
	return solde;
}

std::string Compte::getLibelle() {
	return libelle;
}

double Compte::getSolde() {
	return solde;
}

void Compte::setLibelle(std::string lib) {
	libelle = lib;
}

void Compte::setSolde(double nouvSolde){
	solde = nouvSolde;
}

void Compte::deposer(double montantADeposer){
	solde += montantADeposer;
}

void Compte::retirer(double montantARetirer){
	solde -= montantARetirer;
}

void Compte::debiterFrais(double fraisADebiter){

}

void Compte::calculerAggios(double taux, double MontantDecouvert, int jours){

}

void Compte::effectuerVirement(double montant){

}

