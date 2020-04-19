//
//  main.cpp
//  Istoki
//
//  Created by Аружан Туткенова on 4/19/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n, m, a[100][100], x=0, y=0, k=0;
int main() {
   
    cin>>n>>m;
    for(int i=1; i<=m; i++)          //пробегаемся по всем ребрам и вводим список реьер
    {
        cin>>x>>y;
        a[x][y]++;
        a[y][x]++;
    }
    for(int i=1; i<n; i++)           //проьегаемсяс по вершинам и смотрим есои на месте ij есть знаечение то увеличваем х, если на следющим  i и j есть элемент тое сть еще ребро то увеличивем y
    {
        x=0;
        y=0;
        for(int j=1; j<=n; j++)
        {
            if(a[i][j]==1) x++;
            if(a[i+1][j]==1) y++;
        }
        if(x==y) k++;
    }
    if(k==n-1) cout<<"YES";      //если к равно n-1 (весь спиок вершин) выводим yes
    else  cout<<"NO";
    return 0;
}