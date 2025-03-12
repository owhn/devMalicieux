#include <iostream>
#include <vector>
#include <list>
using namespace std;
//exercice 0.1

/*int main()
{
	int x;
	cout << "x : ";
	cin >> x;
	cout << "x = " << x;

	int y;
	y = 2*x - 3;

	return y;
}


//exercice 0.2
int main()
{
	int x;
	cout << "x : ";
	cin >> x;
	cout << "x = " << x;

	int y;
	y = 2 * pow(x, 2) - 4 * x + 5;

	return y;
}


int main()
{
	int nom;
	int prenom;
	cout << "Nom : ";
	cin >> nom;
	cout << "Prenom : ";
	cin >> prenom;
	cout << "Bonjour, " << nom, prenom;


	return 0;
}

*/

//int main()
//{
//	string nom;
//	string prenom;
//	cout << "Nom : ";
//	cin >> nom;
//	cout << "Prenom : ";
//	cin >> prenom;
//	cout << "Bonjour,\n" << nom << " " << prenom << ".";
//
//
//	return 0;
//}

//int main()
//{
//	float f;
//	cout << "temperature en F : ";
//	cin >> f;
//
//	float c;
//	c = (f - 32) * (5.0 / 9);
//	
//	cout << "la temperature en F, de : " << f << "F est egale a : " << c << "C en Celsius.";
//	
//	return 0;
//}

//int main() {
//	float a;
//	float b;
//	string signe;
//	float resultat;
//
//	cout << "entrer votre calcul dans la calculatrice : \n";
//	cout << "1er nombre : ";
//	cin >> a;
//	cout << "signe : ";
//	cin >> signe;
//	cout << "2e nombre : ";
//	cin >> b;
//	if (signe == "+") {
//		resultat = (a + b);
//		cout << a << "+" << b << "=" << resultat;
//		return 0;
//
//	}
//
//	else if (signe == "-") {
//		resultat = (a - b);
//		cout << a << "-" << b << "=" << resultat;
//		return 0;
//
//	}
//
//	else if (signe == "*") {
//		resultat = (a * b);
//		cout << a << "*" << b << "=" << resultat;
//		return 0;
//
//	}
//
//	else if (signe == "/" && b == 0) {
//		cout << a << "/" << b << "=" << "+infini";
//		return 0;
//	}
//
//	else if (signe == "/" && b != 0) {
//		resultat = (a / b);
//		cout << a << "/" << b << "=" << resultat;
//		return 0;
//
//	}
//}

//int main() {
//	long long int a;
//	cout << "nombre ? ";
//	cin >> a;
//	if (a % 2 == 0) {
//		cout << "votre nombre est pair";
//		return 0;
//	}
//	else {
//		cout << "votre nombre est impair";
//		return 0;
//	}
//}

//int main() {
//	setlocale(LC_CTYPE, "fra");
//	int a;
//	int n(0);
//	cout << "année ? ";
//	cin >> a;
//	while (a - (n * 100) >= 100) {
//		n = n + 1;
//	}
//	int annee;
//	annee = a - n * 100;
//	if (n * 100 % 400 == 0 && annee % 4 == 0){
//		cout << "votre année est bissextile";
//}
//
//	else {
//		cout << "votre année n'est PAS bissextile emoji colère";
//
//	}
//	return 0;
//}

//int main() {
//	setlocale(LC_CTYPE, "fra");
//	int a;
//	int reste;
//	cout << "votre montant en euro : "; cin >> a;
//	cout << a / 500 << " billets de 500 euros\n";
//	reste = a % 500;
//	cout << reste / 200 << " billets de 200 euros\n";
//	reste = reste % 200;
//	cout << reste / 100 << " billets de 100 euros\n";
//	reste = reste % 100;
//	cout << reste / 50 << " billets de 50 euros\n";
//	reste = reste % 50;
//	cout << reste / 20 << " billets de 20 euros\n";
//	reste = reste % 20;
//	cout << reste / 10 << " billets de 10 euros\n";
//	reste = reste % 10;
//	cout << reste / 5 << " billets de 5 euros\n";
//	reste = reste % 5;
//	cout << reste / 2 << " pièces de 2 euro\n";
//	reste = reste % 2;
//	cout << reste / 1 << " pièces de 1 euro\n";
//	
//
//	return 0;
//}

//int main()
//{	
//	setlocale(LC_CTYPE, "fra");
//	string T;
//	float f;
//	float c;
//	cout << "quelle est votre unité de température à convertir, (c ou f) : "; 
//	cin >> T;
//
//	if(T == "f") {
//		cout << "temperature en F : ";
//		cin >> f;
//
//		c = (f - 32) * (5.0 / 9);
//
//		cout << "la temperature en F, de : " << f << "F est egale a : " << c << "C en Celsius.";
//
//		return 0;
//	}
//	else {
//		cout << "temperature en C : ";
//		cin >> c;
//
//		f = (c * (9.0 / 5)) + 32;
//		
//		cout << "la temperature en C°, de : " << c << "C° est egale a : " << f << "F° en FARENHEIT.";
//
//		return 0;
//	}
//
//}



// exo série 2 :
//2.1 :

//int main() {
//	setlocale(LC_CTYPE, "fra");
//
//	int i = 1;
//	int a=0;
//	int max=0;
//	int min=0;
//
//	cout << "entrez votre " << i << "e nombre : ";
//	cin >> a,max,min;
//
//	if (a >= max) {
//		max = a;
//	}
//	if (a <= min) {
//		min = a;
//	}
//	i = i + 1;
//
//	while (i < 21) {
//		cout << "entrez votre " << i << "e nombre : ";
//		cin >> a;
//
//		if (a >= max) {
//			max = a;
//		}
//		if (a <= min) {
//			min = a;
//		}
//		i = i + 1;
//	}
//	cout << "votre max = " << max << "votre min = " << min << endl;
//	cout << "l'étendue de votre liste de nombre est de : " << max - min << endl;
//
//
//	return 0;
//}



//int main() {
//	setlocale(lc_ctype, "fra");
//
//	int i = 0;
//	int a = 0;
//	int max = 0;
//	int min = 0;
//	int n;
//	int somme=0;
//
//	cout << "n=";
//	cin >> n;
//
//	cout << "entrez votre " << i+1 << "e nombre : ";
//	cin >> a;
//	
//
//	a = pow(a, 2);
//	min = a;
//	max = a;
//	cout << "min : " << min;
//
//	cout << "a : " << a << endl;
//	cout << "min : " << min;
//	i = i + 1;
//
//	while (i < n) {
//		if (i <= n) {
//			somme = somme + a;
//			cout << "somme :" << somme << endl;
//
//		}
//
//		cout << "entrez votre " << i+1 << "e nombre : ";
//		cin >> a;
//		a= pow(a, 2);
//	
//
//
//		if (a >= max) {
//			max = a;
//		}
//		if (a <= min) {
//			min = a;
//		}
//		i = i + 1;
//	}
//	//cout << "votre max = " << max << "votre min = " << min << endl;
//	//cout << "l'étendue de votre liste de nombre est de : " << max - min << endl;
//	cout << "votre somme des " << n << "nombres est de " << somme;
//
//	return 0;
//}

//
//int main() {
//	setlocale(LC_CTYPE, "fra");
//
//	int i = 1;
//	int n;
//	int somme = 0;
//
//	cout << "N ? : ";
//	cin >> n;
//  while (n==0){
//		cout << "N ? différent de 0 : ";
//		cin >> n;
// }
//
//	while (i<=n){
//		cout << "i : " << i << endl;
//		somme = somme + pow(i, 2);
//		cout << "somme : " << somme << endl;
//		i = i + 1;
//
//	}
//
//	cout << "somme finale : " << somme;
//
//	return 0;
//}



// série 2 ex3:
//int main() {						// calculer la somme telle que S = 1 + 1/2² + 1/3² +...+ 1/N² 
//	setlocale(LC_CTYPE, "fra");
//
//	int i = 1;
//	int n;
//	float Inverse = 0;
//	float sommeInverse = 0;
//
//	cout << "N ? : ";
//	cin >> n;
//	while (n == 0) {
//		cout << "N ? différent de 0 : ";
//		cin >> n;
//	}
//
//	while (i <= n) {
//		cout << "i : " << i << endl;
//		Inverse = 1.0 / pow(i, 2);					// calcul de 1/i²
//		cout << "inverse :" << Inverse << endl;		// vérification du bon fonctionnement
//		sommeInverse = sommeInverse + Inverse;		// somme
//		cout << "somme : " << sommeInverse << endl;	// vérif de la somme 
//		i = i + 1;
//
//	}
//
//	cout << "somme finale : " << sommeInverse;
//
//	return 0;
//}



// série 2 ex4:
//int main() {							// demander à l'utilisateur 20 notes et afficher la diff entre les notes et la moyenne 
//	setlocale(LC_CTYPE, "fra");			
//
//	// je vais utiliser un "vecteur" pour stocker les notes (ne pas oublier #include <vector>)
//	// un vector c'est une liste de taille variable et dont les éléments peuvent être accédés via un index :
//	// l'index commence par 0, le 1er élément est nomDuVecteur[0] le 2e est nomDuVecteur[1] etc...
//	vector<int> notes;
//
//	//i=0 car le 1er entier dans mon vecteur est le n° 0 (ça servira quand je déclarerais mes notes)
//	int i = 0;
//	int somme = 0;
//	//variable "a" qui me sert à récup les notes de l'utilisateur avec cin
//	int a;
//	float moyenne;
//	float diff;
//
//
//	while (i < 20) {
//		cout << "saisir la " << i + 1 << "e note : "; //i+1 car i commence par 0 
//		cin >> a;
//		
//		// notes.pushback() ajoute ce qu'il y a entre parenthèses à la fin du vecteur
//		//le vector a une taille modulable donc si j'ajoute une note, le vecteur augmente de taille
//		//ici j'ajoute ma note "a" 
//		notes.push_back(a);
//		cout << "note " << i + 1 << ": " << a << endl;
//		somme = somme + a;
//
//
//		i = i + 1;
//
//	}
//	cout << "size :" << notes.size() << endl;
//	i = 1;
//	moyenne = somme / 20.0;
//	cout << "moyenne :" << moyenne << endl;
//	while (i < 20) {
//		cout << "note " << i << " : " << notes[i] << endl;
//		if (notes[i] < moyenne) {
//			diff = moyenne - notes[i];
//		}
//		else {
//			diff = notes[i] - moyenne;
//		}
//		cout << "la différence entre la moyenne et la note " << i + 1 << " est de : " << diff << endl;
//
//		i = i + 1;
//	}
//
//
//	return 0;
//}

#include<algorithm>
//ex 5 serie 2 :
//int main() {							// trier 20 nombres entiers
//	setlocale(LC_CTYPE, "fra");
//	
//	vector<int> vec;
//	int i = 0;
//	int a;
//
//	while (i < 20) {
//		cout << "entrer votre " << i+1 << "e nombre :";
//		cin >> a;
//		vec.push_back(a);
//		i = i + 1;
//	}
//	// je range mon vecteur dans l'ordre croissant vec.begin() = début de mon vecteur 
//	// et vec.end() = fin de mon vecteur 
//	sort(vec.begin(), vec.end()); 
//	
//	cout << "votre liste triée : " << endl;
//
//	// même système qu'une boucle i mais avec j en variable car le logiciel ne veut pas 
//	// que je réutilise et j'affiche mon vecteur trié
//	int j = 0;
//	while (j < 20) {
//		cout << vec[j] << ", "; 
//		j = j + 1;
//	}
//
//	return 0;
//}

//ex 6 série 2
//int main() {
//	string userChaine;
//	
//
//	cout << "ENTREZ UN MOT DONT VOUS VOULEZ COMPTER LES VOYELLES :";
//	cin >> userChaine;
//	int longueur = userChaine.length();
//	cout << "longueur du mot : " << longueur << endl;
//	int voy[] = { 0,0,0,0,0,0 };
//
//	for (int i = 0; i < longueur; i=i+1) {
//		cout << userChaine[i] << endl;
//		
//		switch (userChaine.at(i)){
//			case 'a':
//				voy[0] = voy[0] + 1;
//				break;
//
//			case 'e':
//				voy[1] = voy[1] + 1;
//				break;
//
//			case 'i':
//				voy[2] = voy[2] + 1;
//				break;
//
//			case 'o':
//				voy[3] = voy[3] + 1;
//				break;
//
//			case 'u':
//				voy[4] = voy[4] + 1;
//				break;
//
//			case 'y':
//				voy[5] = voy[5] + 1;
//				break;
//		}
//	}
//	
//	int sommeVoy=0;
//	int i = 0;
//	while (i < 5) {
//		sommeVoy = sommeVoy + voy[i];
//		i = i + 1;
//	}
//	cout << "le nombre de voyelles est : " << sommeVoy;
//	return 0;
//
//}

////Série 3 Ex 1 :
//int main() {
//	float TarifD;
//	float TarifE;
//	float distance;
//	float nbJour;
//	cout << "quelle est la distance de votre trajet en km ?";
//	cin >> distance;
//	cout << "combien de jours voulez vous louer la voiture ?";
//	cin >> nbJour;
//	TarifD = (distance * 0.1) + (nbJour * 40);
//	TarifE = (distance * 0.15) + (nbJour * 30);
//	cout << "Tarif diesel : " << TarifD << endl << "Tarif essence : " << TarifE << endl;
//	if (TarifD < TarifE) {
//		cout << "le tarif diesel est plus avantageux que le tarif essence" << endl;
//	}
//	else if (TarifD == TarifE) {
//		cout << "les tarifs sont les mêmes.";
//	}
//	else {
//		cout << "le tarif essence est plus avantageux que le tarif diesel" << endl;
//	}
//	return 0;
//}

////Série 3 Ex 2 :
//int main() {
//	double distance=0;
//	double h;
//	double div = 5 / 7.0;
//	int rebond=0;
//	cout << "hauteur de laquelle tombe la balle :";
//	cin >> h;
//
//	do {
//		distance = distance + h;
//		h = h * div;
//		cout << h << endl;
//		rebond = rebond + 1;
//	} while (h > 0.01);
//	cout << "distance finale parcourue : " << distance << endl << "nombre de rebonds : " << rebond;
//
//	return 0;
//}

//Série 3 Ex 3 :
//int main() {
//	setlocale(LC_CTYPE, "fra");
//	int nbEleves = 3;
//	int nbNotes = 2;
//	vector<double> noteParEleve;
//	string nomEleves;
//	float note;
//	float somme;
//	float moyenne[3]; //tableau pour enregistrer les moyennes calculées
//	vector<vector< double > > tab; // vecteur à 2 dimensions : nbEleves lignes pour les élèves, nbNotes colonnes pour leurs notes
//	for (int i = 0; i < nbEleves; i = i + 1) {
//		for (int j = 0; j < nbNotes; j = j + 1) {
//			cout << j + 1 << "e note du " << i + 1 << "e élève : ";
//			cin >> note;
//			noteParEleve.push_back(note);
//		}
//		tab.push_back(noteParEleve);
//		for (int j = 0; j < nbNotes; j = j + 1) {
//			noteParEleve.pop_back();
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < nbEleves; i = i + 1) {
//		somme = 0;
//		for (int j = 0; j < nbNotes; j = j + 1) {
//			cout << j << "e note de l'élève numéro " << i+1 << " : " << tab.at(i).at(j) << endl;
//			somme = somme + tab.at(i).at(j);
//			moyenne[i] = somme / nbNotes;
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < nbEleves; i = i + 1) {
//		cout << "moyenne de l'élève n°" << i + 1 << " : " << moyenne[i] << endl;
//	}
//	return 0;
//}



//Ecrire l'algorithme de l'implémentation d'une calculette primitive exécutant les quatre
//opérations + , -, * et / sur des nombres réels. (Penser à gérer la division par 0).
//L'utilisateur saisit le signe de l'opération puis les deux nombres à traiter, ensuite le
//résultat est affiché.

int calculette(double a, char operation, double b, double &resultat) {
	if (b == 0) return -1;
	switch (operation) {
		case '+':
			resultat = a + b;
			return 0;
		case '-':
			resultat = a - b;
			return 0;
		case '*':
			resultat = a * b;
			return 0;
		case '/':
			resultat = a / b;
			return 0;
		default:
			return -2;
	}
	return -2;
}

int main() {
	setlocale(LC_CTYPE, "fra");

	double a;
	double b;
	char op;
	cout << "tapez l'opération à faire :\n";
	cout << "1er réel :";
	cin >> a;
	cout << "opération :";
	cin >> op;
	cout << "2ème réel :";
	cin >> b;
	double resultat;
	int error=calculette(a, op, b,resultat);
	cout << "0 = aucune erreur, -1 = division par zero, -2 = autre erreur : " << error << "\nresultat : " << resultat;
	return 0;
}