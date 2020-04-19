//
//  main.cpp
//  kolvo_reberoreintirova_gr
//
//  Created by Аружан Туткенова on 4/14/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

//Поскольку граф ориентированный, то количество ребер равно числу единиц в матрице смежности. С другой стороны, количество ребер равно сумме всех чисел матрицы смежности.Подсчитываем количество единиц в переменной cnt. Оно также равно сумме всех чисел матрицы смежности
#include <iostream>
using namespace std;
int n, b;
int a[100][100];
int main() {
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
          return 0;          
        }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if (a[i][j]==1)   //если не симметричны
            {
                b++;
            }
    cout<<b; //ориентированном графе не надо делить колво ребер на 2, так как нет симметричности
    
    return 0;
}