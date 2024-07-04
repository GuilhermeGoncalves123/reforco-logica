#include <iostream>
using namespace std;
int main()
{
    system("cls");
 int idade = 8;
 if (idade >=3 && idade <= 11){
    cout << "Voce esta na categoria: infantil" << endl;
 } else if (idade >= 12 && idade <=17){
     cout << "Voce esta na categoria: juvenil"  << endl;
 } else if (idade >= 18 && idade <=34){
     cout << "Voce esta na categoria: adulto"  << endl;
 }  else if (idade >= 35){
     cout << "Voce esta na categoria: master"  << endl;
 } else {
    cout << "voce nao tem idade suficiente para fazer este esporte" << endl;
 }

    return 0;
}