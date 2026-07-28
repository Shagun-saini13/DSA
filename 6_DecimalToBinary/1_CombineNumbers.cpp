#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many digits you want to combine: ";
    cin >> n;

    int ans = 0, digit;

    for (int i = 1; i <= n; i++) {
        cout << "Enter digit " << i << ": ";
        cin >> digit;

        ans = ans * 10 + digit;
    }

    cout << "Combined Number = " << ans;

    return 0;
}