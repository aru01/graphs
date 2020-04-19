//
//  main.cpp
//  zdc467
//
//  Created by Аружан Туткенова on 4/16/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n,m, x,y, a[1000][1000];


int main() {
    cin>>n>>m;
    for(int i=0; i<m; i++)
        {
            cin>>x>>y;
            a[x][y]=1;   // отличие от неоритированного - ток один вариант без зеркальности
            
        }
    for(int i=1; i<=n; i++)  //пробегаемся по вершинам и распечатываем матрицу смежности
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}