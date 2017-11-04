/**
Given an array of  integers, can you find the sum of its elements?

Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers representing the array's elements.

Output Format

Print the sum of the array's elements as a single integer.

Sample Input

6
1 2 3 4 10 11
Sample Output

31
Explanation

We print the sum of the array's elements, which is: .

portugues
    somar todos os valores de um array
*/
#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(int nr_input, vector<int> objVectorIntInput) {
    int nr_soma = 0;
    
    while (nr_input > 0) {
        nr_soma += objVectorIntInput[nr_input-1];
        nr_input--;
    }
    
    return nr_soma;
}

int main() {    
    int nr_input = 0;
    int nr_temp = 0;
    
    // le quantos elementos serao somados
    cin >> nr_input;

    // cria o vetor com a qntd desejada
    vector<int> objVectorIntInput(nr_input);
        
    // le os elmentos
    for(int i = 0; i < nr_input; i++) {
       cin >> nr_temp;
       objVectorIntInput[i] = nr_temp;
    }

    // retorna o resultado 
    int nr_result = simpleArraySum(
        nr_input, 
        objVectorIntInput
    );

    cout << nr_result << endl;
    return 0;
}