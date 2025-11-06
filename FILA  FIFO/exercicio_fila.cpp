#include <iostream>
#include<string>
#include <queue>
using namespace std;

int main(){
    queue<string> fila_produtos;
    cout << "Sistema para fila de produtos\n";
    cout << "Adicionando itens na fila\n";
    fila_produtos.push("tomate\n");
    fila_produtos.push("cebola\n");
    fila_produtos.push("alho\n");
    fila_produtos.push("porta\n");
    fila_produtos.push("galho\n");
    fila_produtos.push("sabonete\n");

    cout << "\nPrimeiro da lista: "<< fila_produtos.front();
    cout << "\nUltimo da lista: "<< fila_produtos.back();
    cout << "\nTamanho da lista: " << fila_produtos.size();

    fila_produtos.pop();
    fila_produtos.pop();

    cout << "\nNOVO Primeiro da lista: "<< fila_produtos.front();
    cout << "\nNOVO Ultimo da lista: "<< fila_produtos.back();
    cout << "\nNOVO Tamanho da lista: " << fila_produtos.size();

    cout <<"finalizado";
}