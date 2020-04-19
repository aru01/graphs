#include <iostream>
using namespace std;
int n, b;
int a[100][100];
int main() {
    cin>>n;
    for(int i=0; i<n; i++)  //пробигаемся по всем вершинам
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j]; //вводим матрицу смежности
        }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if (a[i][j]==1)   //если есть ребро увеличиваем занчение переменной 
            {
               b++;
            }
    cout<<b/2; //так как неоринтированный, чтоб не было зеркальности делим на 2
    
    return 0;
}