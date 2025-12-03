#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct Cargas{
    int id_caixa;
    double peso_kg;
    string destino;
};

int main(){
    Cargas carga_1;
    Cargas carga_2;
    Cargas carga_3;

    // Carga 1
    carga_1.id_caixa = 501;
    carga_1.peso_kg = 15.5;
    carga_1.destino = "Setor Leste";

    // Carga 2
    carga_2.id_caixa = 502;
    carga_2.peso_kg = 22.0;
    carga_2.destino = "Setor Oeste";

    // Carga 3
    carga_3.id_caixa = 503;
    carga_3.peso_kg = 10.1;
    carga_3.destino = "Setor Norte";

    stack <Cargas> Carregamento_de_caixas;
    Carregamento_de_caixas.push(carga_1);
    Carregamento_de_caixas.push(carga_2);
    Carregamento_de_caixas.push(carga_3);

    cout << "\n     -----| Processo de retirada|-----\n"<<endl;

    if (!Carregamento_de_caixas.empty()){
        Cargas topo = Carregamento_de_caixas.top();
        cout << "\nID da caixa: " << topo.id_caixa;
        cout << " | Destino: "<< topo.destino<<endl;
    }
    Carregamento_de_caixas.pop();
    cout<< "----|Caixa "<<carga_1.id_caixa<< " removida para processamento|----\n"<<endl;

        if (!Carregamento_de_caixas.empty()){
        Cargas topo = Carregamento_de_caixas.top();
        cout << "\nID da caixa: " << topo.id_caixa;
        cout << " | Destino: "<< topo.destino<<endl;
    }
    Carregamento_de_caixas.pop();
    cout<< "----|Caixa "<<carga_2.id_caixa<< " removida para processamento|----\n"<<endl;
    
    if (!Carregamento_de_caixas.empty()){
        Cargas topo = Carregamento_de_caixas.top();
        cout << "\nID da caixa: " << topo.id_caixa;
        cout << " | Destino: "<< topo.destino<<endl;
    }
    cout<< "\nCaixas para retirada: "<<Carregamento_de_caixas.size();
    return 0;
}
