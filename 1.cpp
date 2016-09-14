#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    srand(time(NULL));
    
    int n = 5;
    int m = 5;    
    int r = 0;
    int c = 0;  
    
    int *sec = new int[n*m];
    int **array = new int* [n]; 
    
    for(int i = 0; i < n; i++){
        array[i] = new int [m];
    }
    
     
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            array[i][j] = 10 + rand() % 20;        
            cout << setw(3) << array[i][j] << "  ";            
        }
        cout << endl << endl;
    }
    cout << endl;
    // LEFT
    /*for(int i = 0; i < n; ++i){
        for(int j = 0 ; j < n-i; ++j){
            sec[r++] = array[j][i+(c++)];
            sec[r++] = array[i+(c++)][j];
            cout << setw(2) << sec[r-1] << " ";
        }
    c = 0; 
    }    
    cout << endl;*/
    
    // RIGHT
    /*for(int i = n-1; i >= 0; --i){
        for(int j = 0; j <= i; ++j){
            sec[r++] = array[j][i-(c++)];
            cout << setw(2) << sec[r-1] << " ";
        }
    c = 0; 
    }    
    cout << endl;*/
    
    
    // SPIROL
    int i = n/2;
    int j = n/2;
    int p = 0;
    do{
        p++;
        for (int k = 0; k < p; k++)
            cout << array[i--][j] << ' ';       
            if (p == m)
                break;
        for (int k = 0; k < p; k++)
            cout << array[i][j++] << ' ';
        p++;
        for (int k = 0; k < p; k++)
            cout << array[i++][j] << ' ';
        for (int k = 0; k < p; k++)
            cout << array[i][j--] << ' ';
    }while (p);
    
    cout << endl << endl << endl;      
    
    for(int i = 0; i < n; i++){
        delete [] array[i];    
    }
    
    system("pause");
    return 0;
}
// 0,0 0,1 0,2 0,3 0,4
// 1,0 1,1 1,2 1,3 1,4
// 2,0 2,1 2,2 2,3 2,4
// 3,0 3,1 3,2 3,3 3,4
// 4,0 4,1 4,2 4,3 4,4
