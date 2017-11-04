/**
Sam's house has an apple tree and an orange tree that yield an abundance of fruit. In the diagram below, the red region denotes his house, where  is the start point and  is the end point. The apple tree is to the left of his house, and the orange tree is to its right. You can assume the trees are located on a single point, where the apple tree is at point  and the orange tree is at point .

Apple and orange(2).png

When a fruit falls from its tree, it lands  units of distance from its tree of origin along the -axis. A negative value of  means the fruit fell  units to the tree's left, and a positive value of  means it falls  units to the tree's right.

Given the value of  for  apples and  oranges, can you determine how many apples and oranges will fall on Sam's house (i.e., in the inclusive range )? Print the number of apples that fall on Sam's house as your first line of output, then print the number of oranges that fall on Sam's house as your second line of output.

Input Format

The first line contains two space-separated integers denoting the respective values of  and . 
The second line contains two space-separated integers denoting the respective values of  and . 
The third line contains two space-separated integers denoting the respective values of  and . 
The fourth line contains  space-separated integers denoting the respective distances that each apple falls from point . 
The fifth line contains  space-separated integers denoting the respective distances that each orange falls from point .

Constraints

Output Format

Print two lines of output:

On the first line, print the number of apples that fall on Sam's house.
On the second line, print the number of oranges that fall on Sam's house.
Sample Input 0

7 11
5 15
3 2
-2 2 1
5 -6
Sample Output 0

1
1
Explanation 0

The first apple falls at position . 
The second apple falls at position . 
The third apple falls at position . 
The first orange falls at position . 
The second orange falls at position . 
Only one fruit (the second apple) falls within the region between  and , so we print  as our first line of output. 
Only the second orange falls within the region between  and , so we print  as our second line of output.

Em portugues:
	- interpretação de texto
	- dado os pontos da casa s e t, verificar se macas e laranjas cairam
	dentro do terreno (entre s e t)
*/
#include <vector>
#include <iostream>
using namespace std;

int main() {

	// aoonde a casa esta
	int s;
    int t;
    cin >> s >> t;
    
    // aonde as arvores estao
    int a;
    int b;
    cin >> a >> b;
    
    // qntas frutas iremos ler
    int m;
    int n;
    cin >> m >> n;
    
    // qntas estao na casa
    int nr_macas_na_casa = 0;
    int nr_larancas_na_casa = 0;
    int nr_temp_distance = 0;

    // leitura de macas
	vector<int> apple(m);
	for(int apple_i = 0;apple_i < m;apple_i++){
		cin >> apple[apple_i];

		nr_temp_distance = a +apple[apple_i]; 

		if (nr_temp_distance >= s && nr_temp_distance <= t) {
			nr_macas_na_casa += 1;
		}
	}

	// leitura de laranjas
	vector<int> orange(n);
	for(int orange_i = 0;orange_i < n;orange_i++){
		cin >> orange[orange_i];

		nr_temp_distance = b + orange[orange_i]; 

		if (nr_temp_distance >= s && nr_temp_distance <= t) {
			nr_larancas_na_casa += 1;
		}
	}

	cout << nr_macas_na_casa << endl;
	cout << nr_larancas_na_casa << endl;
    

    return 0;
}