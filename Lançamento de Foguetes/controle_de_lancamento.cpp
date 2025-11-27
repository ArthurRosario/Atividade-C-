#include <iostream>
#include <string>
#include <stack>
using namespace std;
struct Foguete{
    string nome;
};
int main(){
    Foguete foguete_1;
    Foguete foguete_2;
    Foguete foguete_3;
    Foguete foguete_4;

    foguete_1.nome= "Alpha";

    foguete_2.nome = "Beta";

    foguete_3.nome = "Gama";

    foguete_4.nome = "Delta";

    stack <Foguete> lancamento_foguete;

    lancamento_foguete.push(foguete_1);
    lancamento_foguete.push(foguete_2);
    lancamento_foguete.push(foguete_3);
    lancamento_foguete.push(foguete_4);

    cout << "----- Foguetes -----\n";

    //FOGUETE DELTA
    if (!lancamento_foguete.empty()){
        Foguete topo = lancamento_foguete.top();
        cout << "Primeiro foguete: " << topo.nome <<endl;
    }
    lancamento_foguete.pop();
    cout<< "Foguete lancado!\n";

    //FOGUETE
    if (!lancamento_foguete.empty()){
        Foguete topo = lancamento_foguete.top();
        cout << "Segundo foguete: " << topo.nome <<endl;
    }
    lancamento_foguete.pop();
    cout<< "Foguete lancado!\n";

    if (!lancamento_foguete.empty()){
        Foguete topo = lancamento_foguete.top();
        cout << "Terceiro foguete: " << topo.nome <<endl;
    }
    lancamento_foguete.pop();
    cout<< "Foguete lancado!\n";

    if (!lancamento_foguete.empty()){
        Foguete topo = lancamento_foguete.top();
        cout << "Quarto foguete: " << topo.nome <<endl;
    }
    lancamento_foguete.pop();
    cout<< "Foguete lancado!\n";


    return 0;

}
