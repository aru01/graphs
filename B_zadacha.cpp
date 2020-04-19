//
//  main.cpp
//  proverka_neornt
//
//  Created by Аружан Туткенова on 4/13/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
// если граф  содержит петли значит главная диагональ != 0. Если матрица симметрична относительно главной диагонали = неоритированны   гграф

#include <iostream>
using namespace std;
int n;
int a[100][100];
int main() {
    cin>>n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) // проверка на оренитровнность
            if (a[i][j] != a[j][i])   
            {
                cout<<"NO";
                return 0;
            }
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            if ((i == j) && (a[i][j])) //проверка на наличие петлей
            {                           //если a[i][i]=1 есть петля
                cout<<"YES";
                return 0;
            }
        }
   
    cout<<"NO";
    
    return 0;
}