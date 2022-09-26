#include <iostream>
#include <math.h>
int main(){
	using namespace std;
	double h, t, g, v;
	cout << "starting speed: " << "\n";
	cin >> v;
	cout << "time: " << "\n";
	cin >> t;
	g = 9.81;

	h = (v * t) - (g * pow(t, 2) / 2);
	cout << h << "\n";
	return 0;
}
