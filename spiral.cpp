#include <iostream>
using namespace std;

int main() {
        int n, m, arr[1000][1000];
        cout << "Enter the number of rows: " << endl;
        cin >> n;
        cout << "Enter the number of column" << endl;
        cin >> m;

        //Etner the matrix.
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                        cin >> arr[i][j];
                }
        }

        int topRow = 0, bottomRow = n-1, leftColumn = 0, rightColumn = m-1;

        while(topRow <= bottomRow || leftColumn <= rightColumn){
                //top row print.
                for(int i = topRow; i <= rightColumn; i++)
                        cout << arr[topRow][i] << " ";
                topRow++;

                //print the right column.
                for(int i = topRow; i <= bottomRow; i++)
                        cout << arr[i][rightColumn] << " ";
                rightColumn--;

                //print the bottom row.
                for(int i = rightColumn; i >= leftColumn; i--)
                        cout << arr[bottomRow][i] << " ";
                bottomRow--;

                //print the left column.
                for(int i = bottomRow; i >= topRow; i--)
                        cout << arr[i][leftColumn] << " ";
                leftColumn++;

        }
}
