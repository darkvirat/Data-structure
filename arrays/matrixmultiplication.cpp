 #include<iostream>
 using namespace std;
 int main() { 

    int m, n; 

    cout << "Enter the number of rows of array1: "; 

    cin >> m; 

    cout << "Enter the number of columns of array1: "; 

    cin >> n; 
    int array1[m][n]; 

    cout << "Give input of array elements for array1:" <<endl; 

    for (int i = 1; i <= m; i++) { 

        for (int j = 1; j <= n; j++) { 

            cin >> array1[i][j]; 

        } 

    } 

 

    int m1, n1; 

    cout << "Enter the number of rows of array2: "; 

    cin >> m1; 

    cout << "Enter the number of columns of array2: "; 

    cin >> n1; 

    if (n != m1) { 

        cout << "Given matrices cannot be multiplied: number of columns of array1 must equal number of rows of array2." << endl; 

        return 1; 

    } 

 

    int array2[m1][n1]; 

    cout << "Give input of array elements for array2:" << endl; 

    for (int i = 1; i <= m1; i++) { 

        for (int j = 1; j <= n1; j++) { 

            cin >> array2[i][j]; 

        } 

    } 

    int c[m][n1];  

    for (int i = 1; i <= m; i++) { 

        for (int j = 1; j <= n1; j++) { 

            c[i][j] = 0;  

            for (int k = 1; k <= n; k++) { 

                c[i][j] += array1[i][k] * array2[k][j];  } } } 

    cout << "Matrix after multiplication becomes: " << endl; 

    for (int i = 1; i <= m; i++) { 

        for (int j = 1; j <= n1; j++) { 

            cout << c[i][j] << " ";   } 

        cout << endl; 
     } 

    return 0; } 