/**
There are two kangaroos on a number line ready to jump in the positive direction 
(i.e, toward positive infinity). The first kangaroo starts at location  and moves 
at a rate of  meters per jump. The second kangaroo starts at location  and moves at
 a rate of  meters per jump. Given the starting locations and movement rates for 
 each kangaroo, can you determine if they'll ever land at the same location at the same time?

Input Format

A single line of four space-separated integers denoting the respective values of , , , and .

Constraints

Output Format

Print YES if they can land on the same location at the same time; otherwise, print NO.

Note: The two kangaroos must land at the same location after making the same number of jumps.

Sample Input 0

0 3 4 2
Sample Output 0

YES
Explanation 0

The two kangaroos jump through the following sequence of locations:

Thus, the kangaroos meet after  jumps and we print YES.

Sample Input 1

0 2 5 3
Sample Output 1

NO
Explanation 1

The second kangaroo has a starting location that is ahead (further to the right) of 
the first kangaroo's starting location (i.e., ). Because the second kangaroo moves 
at a faster rate (meaning ) and is already ahead of the first kangaroo, the first 
kangaroo will never be able to catch up. Thus, we print NO.

Em portugues:
	- 2 cangurus vao pular, iniciando do ponto x
	em uma velocidade v
	
	- na mesma quantidade de pulos, dizer se os dois
	chegam na mesma posição

Objetivo:
	lógica
	loop
	menor maior
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
	if (x2 > x1 && v2 >= v1) {
		return "NO";
	}

	// posição dos pulos
	long nr_land1 = x1;
	long nr_land2 = x2;

	while (nr_land1 < nr_land2) {
		nr_land1 += v1;
		nr_land2 += v2;
	}
    
	return (nr_land1 == nr_land2) ? "YES" : "NO";
}

int main() {
	int x1;
	int v1;
	int x2;
	int v2;
	cin >> x1 >> v1 >> x2 >> v2;
	string result = kangaroo(x1, v1, x2, v2);
	cout << result << endl;
	
	return 0;
}