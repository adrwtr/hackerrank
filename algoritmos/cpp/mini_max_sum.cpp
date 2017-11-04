/**
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Input Format

A single line of five space-separated integers.

Constraints

Each integer is in the inclusive range .
Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than 32 bit integer.)

Sample Input

1 2 3 4 5
Sample Output

10 14
Explanation

Our initial numbers are , , , , and . We can calculate the following sums using four of the five integers:

If we sum everything except , our sum is .
If we sum everything except , our sum is .
If we sum everything except , our sum is .
If we sum everything except , our sum is .
If we sum everything except , our sum is .
As you can see, the minimal sum is  and the maximal sum is . Thus, we print these minimal and maximal sums as two space-separated integers on a new line.

Hints: Beware of integer overflow! Use 64-bit Integer.

portugues
    recebe 5 valores, e verifica a soma do minimo e do maximo
    descontando 1 dos valores. (soma dos 4 maiores, e 4 menores)
*/
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arrValores(5);

    // iniciamos os valores
    long long nr_soma = 0;        
    long long nr_minimo = 1000000000;
    long long nr_maximo = 0;
    
    // lendo valores
	for(int i = 0; i < 5; i++){
       cin >> arrValores[i];
       
       // soma todos os valores
       nr_soma += arrValores[i];
       nr_minimo = arrValores[i] < nr_minimo ? arrValores[i] : nr_minimo;
       nr_maximo = arrValores[i] > nr_maximo ? arrValores[i] : nr_maximo;
    }
    
    cout << (nr_soma - nr_maximo) << " " << (nr_soma - nr_minimo);
    
    return 0;
}

