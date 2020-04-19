//
//  main.cpp
//  zdc465
//
//  Created by Аружан Туткенова on 4/16/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n; //число вершин
int m; //число ребер
int a[101][101];
int x,y;  //список ребер

int main() {
    cin>>n>>m;
    
    //для того чтоб список не повторялся, (x y) и (y x) = 1 для каждого ребра графа
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        a[x][y] = a[y][x] = 1;
    }
    //выводим матрицу смежности графа
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}