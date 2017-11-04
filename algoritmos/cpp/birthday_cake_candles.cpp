/**
Colleen is turning  years old! Therefore, she has  candles of various heights on her cake, and candle  has height . Because the taller candles tower over the shorter ones, Colleen can only blow out the tallest candles.

Given the  for each individual candle, find and print the number of candles she can successfully blow out.

Input Format

The first line contains a single integer, , denoting the number of candles on the cake. 
The second line contains  space-separated integers, where each integer  describes the height of candle .

Constraints

Output Format

Print the number of candles Colleen blows out on a new line.

Sample Input 0

4
3 2 1 3
Sample Output 0

2
Explanation 0

We have one candle of height , one candle of height , and two candles of height . Colleen only blows out the tallest candles, meaning the candles where . Because there are  such candles, we print  on a new line.

Portugues:
    devemos encontrar  a maior vela
    depois devemos contar qntas delas tem e retornar
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(int nr_valores, vector <int> arrValores) {
    int nr_maior_valor = 0;
    int nr_contador = 0;

    // descobrir a maior vela
    for(int i=0; i<nr_valores; i++) {
        nr_maior_valor = (arrValores[i] > nr_maior_valor ? arrValores[i] : nr_maior_valor);
    }

    // conta a maior
    for(int i=0; i<nr_valores; i++) {
        nr_contador += (arrValores[i] == nr_maior_valor ? 1 : 0);
    }

    return nr_contador;
}

int main() {
    int nr_valores;
    cin >> nr_valores;
    vector<int> arrValores(nr_valores);

    for(int arrValores_i = 0; arrValores_i < nr_valores; arrValores_i++){
       cin >> arrValores[arrValores_i];
    }

    int nr_resultado = birthdayCakeCandles(nr_valores, arrValores);
    cout << nr_resultado << endl;
    return 0;
}
