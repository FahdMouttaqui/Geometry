// Geom.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Cercle.h"

using namespace std;

int main()
{
    double d;
    double x1, y1, x2, y2, r1, r2;
    cout << "Donner point x of cercle 1:"<<endl;
    cin >> x1;
    cout << "Donner y of cercle 1" << endl;
    cin >> y1;
    cout << "Donner point x of cercle 2" << endl;
    cin >> x2;
    cout << "Donner y of cercle 2" << endl;
    cin >> y2;
    Point P1(x1, y1);
    Point P2(x2, y2);

    cout << "Donner rayon of cercle 1" << endl;
    cin >> r1;
    cout<<"Donner rayon of cercle 2" << endl;
    cin >> r2;


    Cercle C1(r1, &P1);
    Cercle C2(r2, &P2);
    d = C1 - C2;
    cout << "La distance entre cercle 1 et cercle 2 est: " << d<< endl;
    if (C1 == C2) {
        cout << "Cercle 1 et cercle 2 sont egaux!" << endl;
    }
    else {
        cout << "Cercle 1 et cercle 2 ne sont pas egaux!" << endl;
    }

}

