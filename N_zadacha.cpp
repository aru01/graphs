//
//  main.cpp
//  zadachaN
//
//  Created by Аружан Туткенова on 4/16/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n;
int a[1000][1000];
int b[1000];
int c[1000];
int main() {
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++)    //пробегаемся по всем вершинам и если в точке ij есть ребро то записываем в мматрицу b полустпент
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j]==1)
            {
                b[i]++;
            }
            if(a[j][i]==1)     //если в ji есть значение то записываем в матрицу с 
            {
                c[i]++;
            }
        }
    }
    
    for(int i=1; i<=n; i++)
    {
        cout<<c[i]<<endl;
        cout<<b[i]<<endl;
    }
    return 0;
}