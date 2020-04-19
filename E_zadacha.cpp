//
//  main.cpp
//  zasacha464
//
//  Created by Аружан Туткенова on 4/14/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;
int main(){
    int n, a[101][101];
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j]; //задаем матрицу смежности
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j]==1){     //во избежание повтора значени	 в списке ребер приравниваем a[i][j] нулю
                if(a[j][i]==1)
                    a[i][j]=0;
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){  //проьегаемся  в цикле и распечатываем ребра
            if(a[i][j]==1) cout<<j<<" "<<i<<endl;
        }
    }
    
    return 0;
}