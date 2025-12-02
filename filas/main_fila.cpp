#include <iostream>
#include "fila.h"

using namespace std;

int main() {
    fila fila1;
    int opcao;
    TipoItem item;
    cout << "Programa gerador de Fila\n";
    do {
        cout << "Digite 0 para parar o Programa\n";
        cout << "Digite 1 para Inserir um Elemento\n";
        cout << "Digite 2 para Remover um Elemento\n";
        cout << "Digite 3 para Imprimir\n";
        cin >> opcao;
        if (opcao == 1) {
            cout << "Digite o Elemento a ser Inserido\n";
            cin >> item;
            fila1.inserir(item);
        } else if (opcao == 2) {
            item = fila1.remover();
            cout << "O item removido e: " << item << endl;
        } else if (opcao == 3) {
            fila1.imprimir();
        }


    }while (opcao != 0);

    return 0;
}