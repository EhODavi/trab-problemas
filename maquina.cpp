#include <iostream>
using namespace std;

// Feito por Davi de Paula Oliveira - ES98896

int main() {

    // Declarando as variaveis
    int P, totalInserido, V;

    // Lendo o valor do produto
    cin >> P;

    // Lendo o valor da primeira moeda inserida
    cin >> V;
    totalInserido = V;

    // Lendo o valor das moedas inseridas
    while(V != 0) {
        cin >> V;
        totalInserido = totalInserido + V;
    }

    // Informando se teve troco ou se o saldo foi insuficiente
    if(totalInserido < P) {
        cout << "Saldo insuficiente." << endl;
    } else {
        cout << "Troco de " << (totalInserido - P) << " centavos." << endl;
    }

    return 0;
}

