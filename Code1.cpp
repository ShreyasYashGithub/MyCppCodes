#include <iostream>
using namespace std;
 
int main()
{
 
    int n = 5, rows, columns;
    
    for (rows = 1; rows <= n; rows++) {
        
        for (columns = n; columns > rows; columns--) {
            cout << " ";
        }
        
        cout << "*";
       
        for (columns = 1; columns < (rows - 1) * 2;
             columns++) {
            cout << " ";
        }
        if (rows == 1) {
            cout << "\n";
        }
        else {
            cout << "*\n";
        }
    }
   
    for (rows = n - 1; rows >= 1; rows--) {
       
        for (columns = n; columns > rows; columns--) {
            cout << " ";
        }
      
        cout << "*";
        for (columns = 1; columns < (rows - 1) * 2;
             columns++) {
            cout << " ";
        }
        if (rows == 1) {
            cout << "\n";
        }
        else {
            cout << "*\n";
        }
    }
    return 0;
}
