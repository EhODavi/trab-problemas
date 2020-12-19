#include <iostream>
using namespace std;

// Feito por Davi de Paula Oliveira - ES98896

int main() {

    // Declarando as variaveis
    int P, totalInserido, V;
    char T;

    // Lendo o numero do produto
    cin >> P;

    // Atribuindo o valor do produto de acordo com a tabela
    if(P == 1) {
        P = 430;
    } else if(P == 2) {
        P = 270;
    } else if (P == 3) {
        P = 143;
    } else { // Se o valor for incorreto, o P recebe 0 e no final é verificado
        P = 0;
    }

    // Lendo o primeiro valor inserido
    cin >> T >> V;

    if(T == 'C') {
        totalInserido = V * 100;
    } else {
        totalInserido = V;
    }

    // Lendo os valores inseridos
    while(V != 0) {
        cin >> T >> V;

        if(T == 'C') {
            totalInserido = totalInserido + (V * 100);
        } else {
            totalInserido = totalInserido + V;
        }
    }

    // Se o valor do P for 0, quer dizer que o usuario informou um valor invalido para o produto
    if(P != 0) {
        // Informando se teve troco ou se o saldo foi insuficiente
        if(totalInserido < P) {
            cout << "Saldo insuficiente." << endl;
        } else {
            cout << "Troco de " << (totalInserido - P) << " centavos." << endl;
        }
    } else {
        cout << "Produto inexistente." << endl;
    }

    return 0;
}

