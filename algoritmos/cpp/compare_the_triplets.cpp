/**
Compare the Triplets

Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from  to  for three categories: problem clarity, originality, and difficulty.

We define the rating for Alice's challenge to be the triplet , and the rating for Bob's challenge to be the triplet .

Your task is to find their comparison points by comparing  with ,  with , and  with .

If , then Alice is awarded  point.
If , then Bob is awarded  point.
If , then neither person receives a point.
Comparison points is the total points a person earned.

Given  and , can you compare the two challenges and print their respective comparison points?

Input Format

The first line contains  space-separated integers, , , and , describing the respective values in triplet . 
The second line contains  space-separated integers, , , and , describing the respective values in triplet .

Constraints

Output Format

Print two space-separated integers denoting the respective comparison points earned by Alice and Bob.

Sample Input

5 6 7
3 6 10
Sample Output

1 1 
Explanation

In this example:

Now, let's compare each individual score:

, so Alice receives  point.
, so nobody receives a point.
, so Bob receives  point.
Alice's comparison score is , and Bob's comparison score is . Thus, we print 1 1 (Alice's comparison score followed by Bob's comparison score) on a single line.


portugues
    Compara pontos entre alice e bob
    cada pontuação vale 1 ponto, mostra quem mais pontuou
*/
#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    vector<int> objVectorIntResultado(2);  
    
    int nr_alice = 0;
    int nr_bob = 0;
    
    a0 = a0 > 100 ? 100 : a0;
    a1 = a1 > 100 ? 100 : a1;
    a2 = a2 > 100 ? 100 : a2;
    
    b0 = b0 > 100 ? 100 : b0;
    b1 = b1 > 100 ? 100 : b1;
    b2 = b2 > 100 ? 100 : b2;

    nr_alice = (a0 > b0) * 1 + (a1 > b1) * 1 + (a2 > b2) * 1;
    nr_bob = (a0 < b0) * 1 + (a1 < b1) * 1 + (a2 < b2) * 1;
    
    objVectorIntResultado[0] = nr_alice;    
    objVectorIntResultado[1] = nr_bob;

    
    return objVectorIntResultado;
}

int main() {
    // leitura dos valores
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;

	// computa resultados
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    
    // exibe resultados
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;   

    return 0;
}