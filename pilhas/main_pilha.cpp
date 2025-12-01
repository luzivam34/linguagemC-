#include <iostream>
#include "../pilhas/pilha.h"

using namespace std;

int main() {
    pilha pilha1; // cria uma instância da pilha //create a stack instance
    TipoInt item;
    int opcao;
    cout << "Programa de Pilha\n"; // Stack Program

    do
    {
        cout << "Digite 0 para sair.\n";                           // Enter 0 to exit.
        cout << "Digite 1 para inserir um elemento na pilha.\n";   // Enter 1 to push an element onto the stack.
        cout << "Digite 2 para remover um elemento da pilha.\n";   // Enter
        cout << "Digite 3 para imprimir os elementos da pilha.\n"; // Enter 3 to print stack elements.
        cin >> opcao;
        if (opcao == 1)
        {
            cout << "Digite o elemento a ser inserido: "; // Enter the element to be pushed:
            cin >> item;
            pilha1.inserir(item);
        }
        else if (opcao == 2)
        {
            TipoInt removido = pilha1.remover();
            if (!pilha1.pilha_vazia())
            {
                cout << "Elemento removido: " << removido << endl; // Removed element:
            }
        }
        else if (opcao == 3)
        {
            pilha1.imprimir();
        }
    } while (opcao != 0);

    return 0;

}