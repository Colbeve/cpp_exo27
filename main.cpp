#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

/*
Exercice 27
Ecrire un algorithme qui renvoie si le nombre entré par l’utilisateur est premier ou pas.
*/

int main()
{
    int prem, N, rD;
    rD = 0;
    cout << "Saisir un nombre premier: " << endl;
    cin >> prem;

    for (N = prem-1; N >=2; N--) {
        if (prem %N == 0){
            rD = 1;
        }
    }
    if (rD == 0){
        cout << "Bravo, c'est un nombre premier" << endl;
    } else {
        cout << "Desole, ce n'est pas un nombre premier" << endl;
    }
    cout << "fin de programme" << endl;

    return 0;
}
