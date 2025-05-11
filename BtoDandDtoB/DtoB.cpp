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





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//      int arr[n];
//     int i = 0; 

//     while (n != 0) {
//         int r = n % 2;
//         n =n/2;
//         arr[i]=r;
//         i++;
//     }

//     for (int j = i-1; j >= 0; j--)
//     {
//         cout<<arr[j];
//     }
    
//     return 0;
// }
