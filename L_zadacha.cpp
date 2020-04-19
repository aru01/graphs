//
//  main.cpp
//  zadachaL
//
//  Created by Аружан Туткенова on 4/16/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n;
int a[1000][1000];
int d=0;

int main() {
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    
    for(int i=1;  i<=n; i++){
        for(int j=1; j<=n; j++)
        {
            if(a[i][j]==1)    //Степень — количество рёбер графа
            {
                d++;
            }  
        }
    cout<<d<<endl;
    d=0;
    }
    
    return 0;
}