#include <iostream>

int main(){
    using namespace std;
    int sum = 0, n;
    cout << "n - " << "\n";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        sum += pow(n + i, 2);
    }
    cout << sum << "/n";
    return 0;
}
