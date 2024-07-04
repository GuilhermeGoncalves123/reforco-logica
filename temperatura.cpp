#include <iostream>
using namespace std;
int main()
{
    system("cls");
 int temperatura = 5;
 if (temperatura >=0 && temperatura <= 15){
    cout << "acender led vermelho" << endl;
 } else if (temperatura >= 16 && temperatura <=23){
     cout << "acender led azul"  << endl;
 } else if (temperatura >= 24 && temperatura <=30){
     cout << "acender led verde"  << endl;
 }  else if (temperatura >= 32 && temperatura <= 37 ){
     cout << "acender led roxo"  << endl;
 } else {
    cout << "acender led vermelho e roxo" << endl;
 }
 cout << "Fim do programa!!" << endl;
    return 0;
}