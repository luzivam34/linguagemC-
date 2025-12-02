
typedef int TipoItem;
const int max_itens = 100;

class fila {
private:
    int primero, ultimo;
    TipoItem* estrutura;

public:
    fila(); // Construtor
    ~fila(); // Destrutor
    bool estavazio(); // isempty
    bool estacheio(); // isfull
    void inserir(TipoItem item);

    TipoItem remover(); // pop
    void imprimir(); // print
};

