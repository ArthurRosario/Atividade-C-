#include <iostream>
#include <string>
#include <queue>
using namespace std;
struct Lanche{
    int id;
    string descricao;
    double preco;
};
int main(){
    Lanche lanche_1;
    Lanche lanche_2;
    Lanche lanche_3;

    //Lanche 1
    lanche_1.id= 01;
    lanche_1.descricao = "Pizza GG";
    lanche_1.preco = 40.00;

    //Lanche 2
    lanche_2.id= 20;
    lanche_2.descricao = "X-gaster";
    lanche_2.preco = 1.50;

    //Lanche 3
    lanche_3.id = 05;
    lanche_3.descricao = "Sorvete";
    lanche_3.preco = 15.00;

    queue<Lanche> fila_de_pedidos;

    fila_de_pedidos.push (lanche_1);
    fila_de_pedidos.push (lanche_2);
    fila_de_pedidos.push (lanche_3);
    cout << "Pedido a ser entregue\n";
    cout << "ID: " <<fila_de_pedidos.front().id << " | ";
    cout << "Descricao: " <<fila_de_pedidos.front().descricao<< endl;
    cout << "Pedido de id "<< fila_de_pedidos.front().id<< " foi entregue ";
    fila_de_pedidos.pop();

    cout << "Pedido a ser entregue\n";
    cout << "ID: " <<fila_de_pedidos.front().id << " | ";
    cout << "Descricao: " <<fila_de_pedidos.front().descricao<< endl;
    


    






}