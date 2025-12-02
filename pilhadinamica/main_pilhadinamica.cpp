#include <iostream>
#include "pilhadinamica.h"

using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    pilhadinamica pilha1; // cria uma instância da pilha //create a stack instance
    TipoItem item;
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
            TipoItem removido = pilha1.remover();
            if (!pilha1.estavazio())
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
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}