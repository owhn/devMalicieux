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


/*prend un vecteur de double et ajoute un bonus défini par l'utilisateur et l'ajoute à toutes ses valeurs*/
void bonus(std::vector<double>& tab, double& somme, double& moyenne, double& bonusVal);

/*fonction à 2 vecteurs qui prend un vecteur de double initial et return seulement les valeurs superieures à 10 dans un vecteur temporaire*/
void sup10(std::vector<double> notesIni, std::vector<double>& notesFin);

/*ajoute 1 à deux entiers passés en paramètres*/
void ajouter1(int& a, int& b);

/*donne la table d'un nombre passé en paramètres*/
std::string multiples(int a);

/*fonction qui renvoie un bool qui dit si un nombre passé en paramètres est premier ou non*/
bool PremierOuPas(int nb);

/*fonction qui renvoie un bool qui dit si un mot passé en paramètres est un palindrome ou non*/
bool EstPalindrome(std::string w);

/*fonction qui prend une variable string et qui remplace l'interieur d'un fichier avec cette variable*/
void outFichier();

/*fonction qui récupère l'interieur d'un fichier pour le mettre dans une variable*/
void inFichier();

/*fonction qui récupère l'interieur d'un fichier,
le met dans une variable, puis ajoute à la suite du fichier txt une autre variable
(en passant par ifstream puis ofstream)*/
void ajtFichier();

/*fonction qui récupère l'interieur d'un fichier,
le met dans une variable, puis ajoute à la suite du fichier txt une autre variable
(en passant par fstream pour l'entrée et la sortie)*/
void ajtFichierInOut();

/*fonction qui bruteforce un mot de passe choisi au hasard dans un fichier en parcourant le même fichier de A à Z*/
void passFinder();

/*fonction qui convertit en binaire des chiffres, pour les mettre dans un fichier .bin*/
void editBin();

/*classe de test compte*/
class Compte;

bool palRecursive1(std::string mot, int i, int len);
void palRecursive();