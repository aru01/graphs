//
//  main.cpp
//  proverka_neornt
//
//  Created by Аружан Туткенова on 4/13/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
// простой граф не содержит петель. Значит главная диагональ = 0. Если матрица симметрична относительно главной диагонали = неоритированны   гграф

#include <iostream>
using namespace std;
int n;
int a[100][100];
int main() {
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            if ((i == j) && (a[i][j])) //когда оба конца ребра сопадают/все элементы главной диагонали равны 0-
            {                           //если a[i][i]=1 есть петля
                cout<<"NO";
                return 0;
            }
        }
    //дальше проверяем матрицу на симметричность - на ореинтированнасть
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if (a[i][j] != a[j][i])   //если не симметричны
            {
                cout<<"NO";
                return 0;
            }
    cout<<"YES";
    
    return 0;
}