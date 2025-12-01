typedef int TipoInt;
const int max_itens = 100;

class pilha // stack
{
private:
    int tamanho;
    TipoInt *estrutura;

public:
    pilha();  // construtor //constructor //stack
    ~pilha(); // destrutor //destructor //~stack

    bool pilha_cheia();         // verifica se a pilha está cheia //isFull
    bool pilha_vazia();         // verifica se a pilha está vazia //isEmpty
    void inserir(TipoInt item); // insere um elemento na pilha //push
    TipoInt remover();          // remove um elemento da pilha //pop
    void imprimir();            // imprime os elementos da pilha //print
    int quantidade();           // retorna a quantidade de elementos na pilha //size
};