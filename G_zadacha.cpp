//
//  main.cpp
//  zdc466
//
//  Created by Аружан Туткенова on 4/16/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n;
int a[101][101];

int main() {           //n(1<=n<=100)
    cin>>n;
    for(int i=1; i<=n; i++) // вводим матрицу смежности
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j])     //если есть этом месте 1 то мы выводим i  и j
                cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}