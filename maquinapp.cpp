#include <iostream>
using namespace std;

// Feito por Davi de Paula Oliveira - ES98896

int main() {

    // Declarando as variaveis
    int P, totalInserido, V, troco;
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
            // Calculando o troco
            troco = totalInserido - P;

            while(troco != 0) {
                if((troco - 10000) >= 0) {
                    troco = troco - 10000;
                    cout << "C 100" << endl;
                } else if((troco - 5000) >= 0) {
                    troco = troco - 5000;
                    cout << "C 50" << endl;
                } else if((troco - 2000) >= 0) {
                    troco = troco - 2000;
                    cout << "C 20" << endl;
                } else if((troco - 1000) >= 0) {
                    troco = troco - 1000;
                    cout << "C 10" << endl;
                } else if((troco - 500) >= 0) {
                    troco = troco - 500;
                    cout << "C 5" << endl;
                } else if((troco - 200) >= 0) {
                    troco = troco - 200;
                    cout << "C 2" << endl;
                } else if((troco - 100) >= 0) {
                    troco = troco - 100;
                    cout << "M 100" << endl;
                } else if((troco - 50) >= 0) {
                    troco = troco - 50;
                    cout << "M 50" << endl;
                } else if((troco - 25) >= 0) {
                    troco = troco - 25;
                    cout << "M 25" << endl;
                } else if((troco - 10) >= 0) {
                    troco = troco - 10;
                    cout << "M 10" << endl;
                } else if((troco - 5) >= 0) {
                    troco = troco - 5;
                    cout << "M 5" << endl;
                } else {
                    troco = troco - 1;
                    cout << "M 1" << endl;
                }
            }
        }
    } else {
        cout << "Produto inexistente." << endl;
    }

    return 0;
}

