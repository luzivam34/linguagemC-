#include <iostream>
#include "../pilhas/pilha.h"

using namespace std;

pilha::pilha() // construtor //constructor //stack
{
    tamanho = 0;                        // inicializa o tamanho da pilha //initialize stack size
    estrutura = new TipoInt[max_itens]; // aloca memória para a estrutura da pilha //allocate memory for stack structure
}

pilha::~pilha() // destrutor //destructor //~stack
{
    delete[] estrutura; // libera a memória alocada para a pilha //free allocated memory for stack structure
}

bool pilha::pilha_cheia() // verifica se a pilha está cheia //isFull`
{
    return (tamanho == max_itens); // retorna true se a pilha estiver cheia //return true if stack is full
}

bool pilha::pilha_vazia() // verifica se a pilha está vazia //isEmpty
{
    return (tamanho == 0); // retorna true se a pilha estiver vazia //return true if stack is empty
}

void pilha::inserir(TipoInt item) // insere um elemento na pilha //push
{
    if (pilha_cheia())
    {
        cout << "Pilha cheia.\n";                       // Stack full.
        cout << "Nao e possivel inserir o elemento.\n"; // Error: Stack full. Cannot insert element.
    }
    else
    {
        estrutura[tamanho] = item; // insere o elemento no topo da pilha //insert element at top of stack
        tamanho++;                 // incrementa o tamanho da pilha //increment stack size
    }
}

TipoInt pilha::remover() // remove um elemento da pilha //pop
{
    if (pilha_vazia())
    {
        cout << "Pilha vazia.\n";                       // Stack empty.
        cout << "Nao e possivel remover o elemento.\n"; // Error: Stack empty. Cannot remove element.
        return 0;                                       // Retorna um valor inválido //return invalid value
    }
    else
    {
        tamanho--;                 // decrementa o tamanho da pilha //decrement stack size
        return estrutura[tamanho]; // retorna o elemento removido //return removed element
    }
}

void pilha::imprimir() // imprime os elementos da pilha //print
{
    cout << "Elementos da pilha: [\n"; // Stack elements:
    for (int i = tamanho - 1; i >= 0; i--)
    {
        cout << estrutura[i] << " "; // imprime cada elemento da pilha //print each stack element
        cout << "]\n";
    }
}

int pilha::quantidade() // retorna a quantidade de elementos na pilha //size
{
    return tamanho; // retorna o tamanho atual da pilha //return current stack size
}