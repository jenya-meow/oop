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
    
    int l = 0;
    int i = 0;
    int j = 0;
    
    for(i = 0; i < n; i++){
        array[i] = new int [m];
    }
    cout << "\t\tKRASIVO" << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            array[i][j] = 10 + rand() % 20;        
            cout << setw(3) << array[i][j] << "  ";            
        }
        cout << endl << endl;
    }
    cout << endl << endl;
    
    // LEFT
    cout << "\t\tLEFT D" << endl;
    l = 0;
	for (int k = 0; k < n; k++){
		j = k;
		for (i = 0; i < n && j >= 0; i++)
			sec[l++] = array[i][j--];
	}
	
	for (int k = 1; k < n; k++){
		i = k;
		for (j = n - 1; i < n; j--)
			sec[l++] = array[i++][j];
	}
	
	printf ("\n");
	
	for (i = 0; i < l; i++)
		printf ("%3d", sec[i]);
    
    // RIGHT
    cout << endl << endl;
    cout << "\t\tRIGHT D" << endl;
    l = 0;
	for (int k = n - 1; k >= 0; k--){
		j = k;
		for (i = 0; i < n && j < n; i++)
			sec[l++] = array[i][j++];
	}
	
	for (int k = 1; k < n; k++){
		i = k;
		for (j = 0; i < n; j++)
			sec[l++] = array[i++][j];
	}
	printf ("\n");
	for (i = 0; i < l; i++)
		printf ("%3d", sec[i]);
    cout << endl;
    cout << endl << endl;
    // SPIROL
    
    i = n/2;
    j = n/2;
    int p = 0;
    cout << "\t\tSPIROL CENTER" << endl;
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
    
    cout << endl << endl;
    cout << endl << endl;
    cout << "\t\tSPIROL TOP LEFT" << endl;
    l = 0;
    j;
    i = 0;
    for (int k = 0; k < (n / 2 + n % 2); k++){
		for (j = k; j < n - k; j++)
			sec[l++] = array[k][j];
		if (j == (n / 2 + n % 2)) break;
		j -= 1;
		for (i = 1 + k; i < n - k; i++)
			sec[l++] = array[i][j];
		i -= 1;
		for (j = n - k - 2; j >= 0 + k; j--)
			sec[l++] = array[i][j];
		j += 1;
		for (i = n - k - 2; i > 0 + k; i--)
			sec[l++] = array[i][j];
	}   
    for (int i = 0; i < l; i++)
		printf ("%3d", sec[i]); 
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
