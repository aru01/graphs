//
//  main.cpp
//  I
//
//  Created by Аружан Туткенова on 4/19/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n, m, a[100][100],x,y, k=0;
int main() {
    cin>>n>>m;
    for(int i=1; i<=m; i++)   //вводим список ребер
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    for(int i=1; i<=n; i++)  // проьеварем на наличие ребер, если нет ребер и начало и конец списка реюер не совпадают
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j]==0 && i!=j) k++;
        }
    }
    if(k) cout<<"NO";
    else cout<<"YES";
    return 0;
}
