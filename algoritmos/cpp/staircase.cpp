#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
Consider a staircase of size :

   #
  ##
 ###
####
Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Input Format

A single integer, , denoting the size of the staircase.

Output Format

Print a staircase of size  using # symbols and spaces.

Note: The last line must have  spaces in it.

Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######
Explanation

The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of .
*/
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
	
	// solução usando strings em c++
	// for(int i = 1; i <= nr_tamanho; ++i){
    //        cout << std::setfill(' ') << std::setw(nr_tamanho) << string(i, '#') << "\n";
    // }
        
    return 0;
}

