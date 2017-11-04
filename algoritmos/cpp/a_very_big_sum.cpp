/**
 A Very Big Sum

You are given an array of integers of size . You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.

Input Format

The first line of the input consists of an integer . The next line contains  space-separated integers contained in the array.

Output Format

Print a single value equal to the sum of the elements in the array.

Constraints 
max value: 9999999999 

Sample Input

5
1000000001 1000000002 1000000003 1000000004 1000000005

Output

5000000015
Note:

The range of the 32-bit integer is .
When we add several integer values, the resulting sum might exceed the above range. You might need to use long long int in C/C++ or long data type in Java to store such sums.


portugues
    somar todos os valores de um array - valores grandes
*/
#include <bits/stdc++.h>

using namespace std;

long aVeryBigSum(int nr_qtd_valores, vector <long> objVectorLongValores) {
	long nr_total = 0;
	long nr_temp_value = 0;
	const long NR_MAX_VALUE = 9999999999;

	// soma os valores
    for (int i = 0; i < nr_qtd_valores; i++) {
    	nr_temp_value = objVectorLongValores[i];

    	// verifica a constraint
    	nr_total += (nr_temp_value <= NR_MAX_VALUE ? nr_temp_value : NR_MAX_VALUE);
    }

    return nr_total;
}

int main() {
    // leitura da quantidade de registros
    int n;
    cin >> n;
    vector<long> ar(n);

    // leitura dos registros
    for(int ar_i = 0; ar_i < n; ar_i++) {
       cin >> ar[ar_i];
    }

    // computa resultados
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}