/**
GRADING STUDENTS

HackerLand University has the following grading policy:

Every student receives a  in the inclusive range from  to .
Any  less than  is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade.
For example,  will be rounded to  but  will not be rounded because the rounding would result in a number that is less than .

Given the initial value of  for each of Sam's  students, write code to automate the rounding process. For each , round it according to the rules above and print the result on a new line.

Input Format

The first line contains a single integer denoting  (the number of students). 
Each line  of the  subsequent lines contains a single integer, , denoting student 's grade.

Constraints

Output Format

For each  of the  grades, print the rounded grade on a new line.

Sample Input 0

4
73
67
38
33
Sample Output 0

75
67
40
33
Explanation 0

image

Student  received a , and the next multiple of  from  is . Since , the student's grade is rounded to .
Student  received a , and the next multiple of  from  is . Since , the grade will not be modified and the student's final grade is .
Student  received a , and the next multiple of  from  is . Since , the student's grade will be rounded to .
Student  received a grade below , so the grade will not be modified and the student's final grade is .

Em português
    ler várias notas
    se a nota < 38 nao faz nada
    verificar se ela é multipla de 5 e se a diferença for menor que 3
    e entao atribuir

    se trata de uma simples logica de arredondamento para cima
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector < int > solve(vector < int > arrNotas) {
    int vl_multiplo = 0;

    for (ssize_t i = 0; i < arrNotas.size(); i++) {
        if (arrNotas[i] < 38) {
            continue;
        }

        // encontra o próximo multiplo
        int nr_multiplo = arrNotas[i];
        while (nr_multiplo % 5 >= 1) {
            nr_multiplo += 1;
        }

        if (nr_multiplo > arrNotas[i] && (nr_multiplo - arrNotas[i])  < 3) {
            arrNotas[i] = nr_multiplo;
        }
    }

    return arrNotas;
}

int main() {
    int nr_qtd_notas;
    cin >> nr_qtd_notas;
    
    vector<int> arrNotas(nr_qtd_notas);

    for(int nr_grades_i = 0; nr_grades_i < nr_qtd_notas; nr_grades_i++){
       cin >> arrNotas[nr_grades_i];
    }

    vector < int > arrResultado = solve(arrNotas);
    for (ssize_t i = 0; i < arrResultado.size(); i++) {
        cout << arrResultado[i] << (i != arrResultado.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
