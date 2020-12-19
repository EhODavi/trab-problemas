#include <iostream>
#include <iomanip>

using namespace std;

// Feito por Davi de Paula Oliveira - ES98896

int main() {

    // Declarando as variaveis
    double D;
    double J1, J2, J3, J4, J5;
    double score;
    double maiorNota, menorNota;

    // Lendo a distancia e a nota dos juizes
    cin >> D;
    cin >> J1 >> J2 >> J3 >> J4 >> J5;

    // Calculando o score de acordo com a distancia
    score = 60 + 1.8 * (D - 120);

    // Calculando o score de acordo com os juizes
    score = score + (J1 + J2 + J3 + J4 + J5);

    if((J1 >= J2) && (J1 >= J3) && (J1 >= J4) && (J1 >= J5)) {
        maiorNota = J1;
    } else if((J2 >= J1) && (J2 >= J3) && (J2 >= J4) && (J2 >= J5)) {
        maiorNota = J2;
    } else if((J3 >= J1) && (J3 >= J2) && (J3 >= J4) && (J3 >= J5)) {
        maiorNota = J3;
    } else if((J4 >= J1) && (J4 >= J2) && (J4 >= J3) && (J4 >= J5)) {
        maiorNota = J4;
    } else {
        maiorNota = J5;
    }

    if((J1 <= J2) && (J1 <= J3) && (J1 <= J4) && (J1 <= J5)) {
        menorNota = J1;
    } else if((J2 <= J1) && (J2 <= J3) && (J2 <= J4) && (J2 <= J5)) {
        menorNota = J2;
    } else if((J3 <= J1) && (J3 <= J2) && (J3 <= J4) && (J3 <= J5)) {
        menorNota = J3;
    } else if((J4 <= J1) && (J4 <= J2) && (J4 <= J3) && (J4 <= J5)) {
        menorNota = J4;
    } else {
        menorNota = J5;
    }

    score = score - (maiorNota + menorNota);

    // Imprimindo o score com uma casa decimal
    cout << fixed << setprecision(1) << score << endl;

    return 0;
}

