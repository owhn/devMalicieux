#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <cmath>

/*dire bonjour */
void Bonjour();

/*calculer une moyenne avec un vecteur qui stocke les notes
3 variables : val, somme, moyenne
1 iterateur : i
1 vecteur : tab*/
void calcMoyenne();


/*calculer la moyenne de plusieurs notes depuis un tableau
1 vecteur, 2 doubles, renvoie la moyenne*/
double calcMoyenne1(std::vector<double>& tab, double& somme, double& moyenne);


/*prend un vecteur de double et ajoute un bonus d�fini par l'utilisateur et l'ajoute � toutes ses valeurs*/
void bonus(std::vector<double>& tab, double& somme, double& moyenne, double& bonusVal);

/*fonction � 2 vecteurs qui prend un vecteur de double initial et return seulement les valeurs superieures � 10 dans un vecteur temporaire*/
void sup10(std::vector<double> notesIni, std::vector<double>& notesFin);

/*ajoute 1 � deux entiers pass�s en param�tres*/
void ajouter1(int& a, int& b);

/*donne la table d'un nombre pass� en param�tres*/
std::string multiples(int a);

/*fonction qui renvoie un bool qui dit si un nombre pass� en param�tres est premier ou non*/
bool PremierOuPas(int nb);

/*fonction qui renvoie un bool qui dit si un mot pass� en param�tres est un palindrome ou non*/
bool EstPalindrome(std::string w);

/*fonction qui prend une variable string et qui remplace l'interieur d'un fichier avec cette variable*/
void outFichier();

/*fonction qui r�cup�re l'interieur d'un fichier pour le mettre dans une variable*/
void inFichier();

/*fonction qui r�cup�re l'interieur d'un fichier,
le met dans une variable, puis ajoute � la suite du fichier txt une autre variable
(en passant par ifstream puis ofstream)*/
void ajtFichier();

/*fonction qui r�cup�re l'interieur d'un fichier,
le met dans une variable, puis ajoute � la suite du fichier txt une autre variable
(en passant par fstream pour l'entr�e et la sortie)*/
void ajtFichierInOut();

/*fonction qui bruteforce un mot de passe choisi au hasard dans un fichier en parcourant le m�me fichier de A � Z*/
void passFinder();

/*fonction qui convertit en binaire des chiffres, pour les mettre dans un fichier .bin*/
void editBin();

/*classe de test compte*/
class Compte;

bool palRecursive1(std::string mot, int i, int len);
void palRecursive();