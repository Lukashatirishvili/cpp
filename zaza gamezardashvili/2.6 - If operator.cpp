#include <iostream>;

using namespace std;
// https://www.youtube.com/watch?v=He6ZUxt-iQ4&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=5

int a1, b1, a2, b2, a3, b3, a4, b4;

int main() {
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;

    int team1 = a1 + a2 + a3 + a4;
    int team2 = b1 + b2 + b3 + b4;

    if (team1 > team2) cout << "FIRST"; else if (team1 < team2) cout << "SECOND"; else cout << "OVERTIME";
}
