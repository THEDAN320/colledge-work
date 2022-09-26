#include <iostream>

int main(){
    setlocale(LC_ALL, "Russian");
    using namespace std;
    int number, x = 1, factorial = 1;
    cout << "Введите число - ";
    cin >> number;
    while (factorial <= number) {
        if (factorial == number) {
            cout << "Число " << number << " является факториалом числа " << x << "\n";
            return 0;
        }
        x++;
        factorial *= x;
    }
    cout << "Число " << number << " не является факториалом" << "\n";
    ;
}
