#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int i = 1; 

    while (n != 0) {
        int r = n % 2;
        n =n/2;
        ans += r * i;
        i *= 10; 
    }

    cout << ans << endl;
    return 0;
}
