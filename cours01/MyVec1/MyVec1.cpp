// MyVec1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Vect2T.h"
#include "Vec2.hpp"

using namespace std;


int main()
{
	Vec2 toto(66,67);

	Vec2T<int> t0(45, 4);
	Vec2T<int> t1(4, 4);

	auto tres = t1.Add(t0);

    std::cout << "Hello World!\n"; 

	Vec2T<char> vc0('a', 'b');
	Vec2T<char> vc1('d', 'e');

	auto vcres = vc1.Add(vc0);

	cout << string(1, 'a') << endl;
	cout << string(1, vcres.x) << "" << string(1, vcres.y) << endl;

	int tab[] = { 0,1,2,3 };
	int sztab = sizeof(tab) / sizeof(int);

	for (int i = 0; i < sztab; i++) 
	{
		cout << tab[1];
	}

	int* c0 = tab;
	int* c1 = &(tab[0]);

	int valc = *c0++;

	Vec2 sapin(56, 70);
	Vec2 sapin2(88, 88);

	sapin.incr(sapin2);

	cout << to_string(sapin2.x) << endl;

	cout << endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
