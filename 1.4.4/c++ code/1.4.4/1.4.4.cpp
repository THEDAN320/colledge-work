#include <iostream>
#define _USE_MATH_DEFINES
#include "ATLComTime.h"
#include<cmath>
int main(){
    setlocale(LC_ALL, "Russian");
    using namespace std;
    int n;
    double r,S;
    cout << "Введите количество сторон - " << "\n";
    cin >> n;
    cout << "Введите радиус окружности - " << "\n";
    cin >> r;
    S = (pow(r, 2) * n * sin(2 * M_PI / n)) * 0.5;
    cout << "площадь правильного "<<n<<"-угольника, вписанного в окружность радиуса "<<r<<" , равна "<< S << "\n";
    return 0;

}
