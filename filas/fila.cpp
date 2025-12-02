#include <iostream>
#include "fila.h"

using namespace std;

fila::fila() {
    primero = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_itens];
}

fila::~fila() {
    delete [] estrutura;
}

bool fila::estavazio() {
    return (primero == ultimo);
}

bool fila::estacheio() {
    return (ultimo-primero == max_itens);
}

void fila::inserir(TipoItem item) {
    if (estacheio()) {
        cout << "A Fila está cheio \n";
        cout << "Este elemento não pode ser Inserido";
    } else {
        estrutura[ultimo % max_itens] = item;
        ultimo++;
    }
}

TipoItem fila::remover() {
    if (estavazio()) {
        cout << "A Fila está vazia\n";
        cout << "Nenhum elemento foi removido\n";
        return 0;
    } else {
        primero++;
        return estrutura[(primero-1) % max_itens];
    }
}

void fila::imprimir() {
    cout <<"Fila: [";
    for (int i = primero; i < ultimo; i++ ) {
        cout << estrutura[i % max_itens] << " ";
    }
    cout << "]\n";
}
