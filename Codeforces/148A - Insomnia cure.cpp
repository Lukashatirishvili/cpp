#include <iostream>

using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    d++;
    int arr[d];

    for (int i = 0; i <= d; i++) {
        arr[i] = 0;
    }

    for (int i = k; i <= d; i += k)
        arr[i] = 1;

    for (int i = l; i <= d; i += l)
        arr[i] = 1;

    for (int i = m; i <= d; i += m)
        arr[i] = 1;

    for (int i = n; i <= d; i += n)
        arr[i] = 1;


    int count = 0;
    for (int i = 0; i < d; i++) {
        if (arr[i] == 1) count++;
    }

    cout << count;
}

