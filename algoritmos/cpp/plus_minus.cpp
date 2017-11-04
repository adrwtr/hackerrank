/**
Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers describing an array of numbers .

Output Format

You must print the following  lines:

A decimal representing of the fraction of positive numbers in the array compared to its size.
A decimal representing of the fraction of negative numbers in the array compared to its size.
A decimal representing of the fraction of zeroes in the array compared to its size.
Sample Input

6
-4 3 -9 0 4 1         
Sample Output

0.500000
0.333333
0.166667
Explanation

There are  positive numbers,  negative numbers, and  zero in the array. 
The respective fractions of positive numbers, negative numbers and zeroes are ,  and , respectively.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;


vector<int> contarValores(
    int nr_posicoes, 
    vector<int> arrValores
) {
    int nr_positivos = 0;
    int nr_negativos = 0;
    int nr_zeros = 0;

    for (int i = 0; i < nr_posicoes; i++) {
        if (arrValores[i] > 0) {
            nr_positivos += 1;
            continue;
        }

        if (arrValores[i] < 0) {
            nr_negativos += 1;
            continue;
        }

        nr_zeros += 1;
    }
    
    vector<int> objRetorno(3);
    objRetorno[0] = nr_positivos;
    objRetorno[1] = nr_negativos;
    objRetorno[2] = nr_zeros;

    return objRetorno;
}    


void plus_minus(
    int nr_posicoes,
    vector<int> arrValores
) {
    vector<int> objContador = contarValores(nr_posicoes, arrValores);

    // essa conversao do float é obrigatoria
    // sem ela o C++ converte tudo para int, mesmo querendo 
    // imprimir como float..
    float vl_positivos = objContador[0] / (float)nr_posicoes;
    float vl_negativos = objContador[1] / (float)nr_posicoes;
    float vl_zeros = objContador[2] / (float)nr_posicoes;
    
    std::cout << std::fixed;
    std::cout << std::setprecision(6);    
    std::cout  << vl_positivos << std::endl;
    std::cout  << vl_negativos << std::endl;
    std::cout  << vl_zeros << std::endl;
}

int main() {
    int nr_matrix_size = 0;

    // define o tamanho da matrix
    cin >> nr_matrix_size;

    vector<int> objValores(
    	nr_matrix_size
    );

    // le os elementos da matriz
    for (int a_i = 0; a_i < nr_matrix_size; a_i++) {
       cin >> objValores[a_i];
    }

    plus_minus(nr_matrix_size, objValores);

    return 0;
}
