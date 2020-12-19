#include <iostream>
using namespace std;

// Feito por Davi de Paula Oliveira - ES98896

int main() {

    // Declarando as variaveis de dia e mes
    int D, M;

    // Lendo as variaveis de dia e mes
    cin >> D >> M;

    // Escrevendo o dia na tela
    cout << D;

    // Escrevendo o mes e a estacao na tela
    if(M == 1) {
        cout << " de janeiro" << endl;
        cout << "Verao" << endl;
    } else if(M == 2) {
        cout << " de fevereiro" << endl;
        cout << "Verao" << endl;
    } else if(M == 3) {
        cout << " de marco" << endl;
        if(D < 20) {
            cout << "Verao" << endl;
        } else {
            cout << "Outono" << endl;
        }
    } else if(M == 4) {
        cout << " de abril" << endl;
        cout << "Outono" << endl;
    } else if(M == 5) {
        cout << " de maio" << endl;
        cout << "Outono" << endl;
    } else if(M == 6) {
        cout << " de junho" << endl;
        if(D < 21) {
            cout << "Outono" << endl;
        } else {
            cout << "Inverno" << endl;
        }
    } else if(M == 7) {
        cout << " de julho" << endl;
        cout << "Inverno" << endl;
    } else if(M == 8) {
        cout << " de agosto" << endl;
        cout << "Inverno" << endl;
    } else if(M == 9) {
        cout << " de setembro" << endl;
        if(D < 23) {
            cout << "Inverno" << endl;
        } else {
            cout << "Primavera" << endl;
        }
    } else if(M == 10) {
        cout << " de outubro" << endl;
        cout << "Primavera" << endl;
    } else if(M == 11) {
        cout << " de novembro" << endl;
        cout << "Primavera" << endl;
    } else {
        cout << " de dezembro" << endl;
        if(D < 22) {
            cout << "Primavera" << endl;
        } else {
            cout << "Verao" << endl;
        }
    }

    return 0;
}

