#pragma once
#include <vector>
#include <iostream>
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
void sup10(std::vector<double> notesIni, std::vector<double> &notesFin);

/*ajoute 1 � deux entiers pass�s en param�tres*/
void ajouter1(int& a, int& b);

/*donne la table d'un nombre pass� en param�tres*/
std::string multiples(int a);

/*fonction qui renvoie un bool qui dit si un nombre pass� en param�tres est premier ou non*/
bool PremierOuPas(int nb);

/*fonction qui renvoie un bool qui dit si un mot pass� en param�tres est un palindrome ou non*/
bool EstPalindrome(std::string w);