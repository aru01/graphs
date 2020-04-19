//
//  main.cpp
//  Istoki
//
//  Created by Аружан Туткенова on 4/19/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n, m, a[100][100], x=0, y=0, b=0;
int main() {
    cin>>n>>m;
    for(int i=1; i<=m; i++)
        
    {
        cin>>x>>y;
        a[x][y]++;
        a[y][x]++;
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((a[i][j]==0) && (a[j][i]==0 & i!=j)) b++;   //если нет ребра в точки ij и ji и конец с началом ребра не совпадают то выводим no - граф не полуполный
        }
    }
    if(b) cout<<"NO";
    else cout<<"YES";
    return 0;
}
