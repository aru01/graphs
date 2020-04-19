//
//  main.cpp
//  zadachaJ
//
//  Created by Аружан Туткенова on 4/16/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n,m,a[1000][1000], x,y;
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
            if(a[i][j]>=2){     //если в этой туочке больше одного ребра - есть парар ребра
                cout<<"YES";
                return 0;
            }
        }
        
        
    }cout<<"NO";
    return 0;
}

