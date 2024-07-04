#include <iostream>
using namespace std;
int main()
{
    system("cls");
    string nome = "";
    string resposta = "nao";

    cout << "Iniciando programa do Gui \n";
    cin >> resposta;

    if (resposta == "sim")
    {
        cout << "Qual eh seu nome?";
        cin >> nome;
        cout << "bem vindo, " << nome;
    } else {
         cout << "bem vindo, visitante" << endl;
    }
    cout << "Fim do programa!!" << endl;
    return 0;
}