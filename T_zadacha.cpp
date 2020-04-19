//
//  main.cpp
//  Istoki
//
//  Created by Аружан Туткенова on 4/19/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

//

#include <iostream>
using namespace std;
int main(){
    int n, a[100][100], m, x, y;
    double b=0;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        cin>>x>>y;
        a[x][y]++;
        
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(((a[j][i]==0&&a[i][j]==0) && i!=j)||((a[i][j]==1&&a[j][i]==1)&& i!=j))  //обязательно должно быть строго одно ребро связывающее любый две вершины - турниир
            {
                b++;
             
                
            }
            
        }
        
    }
    if(b) cout<<"NO";
    else cout<<"YES";
    return 0;
}