#include <iostream>

using namespace std;

int main(){
    int rows;
    int columns;

    cout << "Enter number of rows (max 3): ";
    cin >> rows;

    while(rows < 1 || rows > 3){
        cout << "Rows must be between 1 and 3!!"<< endl;
        cout << "Enter number of rows (max 3): ";
        cin >>  rows;
    }
    cout << "Enter number of columns (max 3): ";
    cin >> columns;
    while (columns < 1 || columns > 3){
        cout << "Columns must be between 1 and 3!!" << endl;
        cout << "Enter number of rows (max 3): ";
        cin >> columns;
    }
/*Double asterisk creates a pointer to an array of pointers that helps to simulaSte a 2D array
and " new double*[rows]" creates an array of 'rows' pointers to 'double' (this array will store
 individual arrays of doubles in the 2D array )*/
    double** pArrayIn2D = new double*[rows];
    for (int i = 0; i < rows; i++){
        pArrayIn2D[i] = new double [columns];
            }

            for (int i = 0; i < rows; i++){
                for (int j = 0; j < rows; j++){
                    cout << pArrayIn2D[i][j]<< " ";
                }
                cout << "\n";
            }
for (int i = 0; i < rows; i++){
    delete[] pArrayIn2D[i];
}
delete [] pArrayIn2D;
return 0;
    }