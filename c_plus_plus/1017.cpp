#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double tempo,velocidade,gasolina;
cout<<setprecision(3)<<fixed;
cin >>tempo>>velocidade;

gasolina = (tempo*velocidade)/12;

cout<<gasolina<<endl;
return 0;
}
