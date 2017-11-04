#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int nr_tamanho;
    cin >> nr_tamanho;
    
    // cout << "tamanho: " << nr_tamanho << endl;
    
    int nr_espacos = nr_tamanho;
    int nr_estrelas = 0;
    
    while (nr_tamanho > 0) {    	    	
    	nr_espacos = nr_espacos - 1;
    	nr_estrelas = nr_estrelas + 1;
    	
    	for (int i=0; i<nr_espacos; i++) {
    		cout << " ";
		}
	
		for (int i=0; i<nr_estrelas; i++) {
    		cout << "#";
		}
		
		cout << endl;
    	
    	nr_tamanho = nr_tamanho - 1;
	}
        
    return 0;
}

