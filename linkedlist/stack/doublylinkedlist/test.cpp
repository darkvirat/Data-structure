#include<iostream>
using namespace std ;
int main(){
	   int m, n; 

    cout << "Enter the number of rows of array1: "; 

    cin >> m; 

    cout << "Enter the number of columns of array1: "; 
    cin >> n; 
    int array1[m][n]; 

    cout << "Give input of array elements for array1:" <<endl; 

    for (int i = 0; i < m; i++) { 

        for (int j = 0; j < n; j++) { 

            cin >> array1[i][j]; 
        } 
    } 
	  cout << "Matrix after multiplication becomes: " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array1[i][j] << " ";
        }

      cout << endl;
    }	
	return 0 ;
}