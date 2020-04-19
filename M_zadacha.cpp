//
//  main.cpp
//  zadachaM
//
//  Created by Аружан Туткенова on 4/16/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n,m,a[1000][1000],x,y,d=0;

int main() {
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j]==1)
            {
                d++;          //Степень — количество рёбер графа
            }
        }
    
        cout<<d<<endl;
    d=0;
    }
    return 0;
}