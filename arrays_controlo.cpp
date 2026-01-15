 #include <iostream>
 #include <stdio.h>
 using namespace std;

 int main () {
    int numerosTotal = 5, aux1 = 0;
    int numeros [numerosTotal] = {9, 2, 0, 6, 4};

    // Linha 1
    for (int i = 0; i <= (numerosTotal - 1) ; i++) {
        cout << " | " << numeros[i];
    }

    cout << "\n";
    // Linha 2
    for (int i = (numerosTotal - 1) ; i >= 0; i--) {
        cout << " | " << numeros[i];
    }
    cout << "\n";

    // Linha 3
    for (int i = (numerosTotal - 1) ; i >= (numerosTotal/2); i--) {
        cout << " | " << numeros [i];
        if (i != ((numerosTotal-1)-i)){
            cout << " | " << numeros[(numerosTotal-1)-i];
        }
    }
    cout << "\n";

    // Linha 4
    for (int i = (numerosTotal - 1) ; i >= (numerosTotal/2); i--) {
        cout << " | " << numeros[(numerosTotal-1)-i];
        if (i != ((numerosTotal-1)-i)){
            cout << " | " << numeros [i];
        }
    }
    cout << "\n";

    // Linha 5
    for (int i = (numerosTotal/2) ; i <= (numerosTotal - 1); i++) {
        cout << " | " << numeros[(numerosTotal-1)-i];
        if (i != ((numerosTotal-1)-i)){
            cout << " | " << numeros [i];
        }
    }

    return 0;
 }



