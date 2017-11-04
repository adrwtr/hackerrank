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

portugues
    realiza o calculo da diferença diagonal de um array
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int diagonal_difference(
    int nr_matrix_size,
    vector< vector<int> > arrMatriz
) {
    int nr_size_temp = nr_matrix_size;
    int nr_sum_a = 0;
    int nr_sum_b = 0;

    for (int i = 0; i < nr_matrix_size; i++) {
        nr_size_temp--;
        nr_sum_a += arrMatriz[i][i];
        nr_sum_b += arrMatriz[i][nr_size_temp];
    }

    return std::abs(nr_sum_a - nr_sum_b);
}

int main() {
    int nr_matrix_size = 0;
    int nr_resultado = 0;

    // define o tamanho da matrix
    cin >> nr_matrix_size;

    vector< vector<int> > objVectorMatrix(
    	nr_matrix_size,
    	vector<int>(nr_matrix_size)
    );

    // le os elementos da matriz
    for (int a_i = 0; a_i < nr_matrix_size; a_i++) {
       for (int a_j = 0; a_j < nr_matrix_size; a_j++) {
          cin >> objVectorMatrix[a_i][a_j];
       }
    }

    nr_resultado = diagonal_difference(
    	nr_matrix_size,
    	objVectorMatrix
	);

    cout << nr_resultado << endl;

    return 0;
}