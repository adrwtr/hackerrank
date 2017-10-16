/**
Diagonal Difference

Given a square matrix of size , calculate the absolute difference between the sums of its diagonals.

Input Format

The first line contains a single integer, . The next  lines denote the matrix's rows, with each line containing space-separated integers describing the columns.

Constraints
-100 a 100 values
imprimir em valor absoluto

Output Format

Print the absolute difference between the two sums of the matrix's diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15
Explanation

The primary diagonal is:

11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:

     4
   5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19 
Difference: |4 - 19| = 15

Note: |x| is absolute value function
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nr_matrix_size;

    // define o tamanho da matrix
    cin >> nr_matrix_size;
    
    vector< vector<int> > objVectorMatrix(
    	nr_matrix_size, 
    	vector<int>(nr_matrix_size)
    );

    // le os elementos da matriz
    for (int a_i = 0;a_i < n;a_i++) {
       for (int a_j = 0;a_j < n;a_j++) {
          cin >> objVectorMatrix[a_i][a_j];
       }
    }

    nr_resultado = diagonal_difference(
    	nr_matrix_size,
    	objVectorMatrix
	);

    return 0;
}