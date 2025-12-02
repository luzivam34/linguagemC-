//
// Created by Pc Vamfamiliatop on 24/11/2025.
//

#ifndef LISTAENCADEADA_PILHADINAMICA_H
#define LISTAENCADEADA_PILHADINAMICA_H
typedef int TipoItem;

struct No {
    TipoItem valor;
    No* proximo;
};

class pilhadinamica {
private:
    No* NoTopo;

public:
    pilhadinamica();
    ~pilhadinamica();
    bool estavazio();
    bool estacheio();
    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();
};

#endif //LISTAENCADEADA_PILHADINAMICA_H