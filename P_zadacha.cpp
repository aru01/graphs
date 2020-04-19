//
//  main.cpp
//  zadachaP
//
//  Created by Аружан Туткенова on 4/16/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int n;
int a[100][100];
int b[100];
int c[100];
int x=0, y=0;
int k=0;  //колво истоков
int m=0;  //колво стоков
int main() {
    cin>>n;    //задаем матрицу смежности
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)   //пробегаемся по всем вершинам и если в матрице смежности в точке ij и ji нет значений то увеличиваем x y
        {
            if(a[i][j]==0) x++;
            
            if(a[j][i]==0) y++;
            
            if(x==n)
            {
                m++;
                b[m]=i;    //заполлняем массив стоков
            }
            if(y==n)
            {
                k++;    //заполняем массив истоков
                c[k]=i;
            }
            
            
        }
        x=0;
        y=0;
    }
    cout<<k<<endl;      //вытаскаваем колво истоков, пробеагемся по истокам и распечатывам массив истоков
    for(int i=1; i<=k; i++)
    {
        cout<<c[i]<<endl;
    }
    cout<<m<<endl;    //распечатываем колво стоков, пробегаемся по стоком и распечатываем массив стококов
    for(int i=1; i<=m; i++)
    {
        cout<<b[i]<<endl;
    }
    м