#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
double x1,y1,x2,y2,distancia;
cout<<setprecision(4)<<fixed;
cin >> x1>>y1>>x2>>y2;

distancia = sqrt (pow((x2-x1),2)+pow((y2-y1),2));

cout <<distancia<<endl;

return 0;
}
