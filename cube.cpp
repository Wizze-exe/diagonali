#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //size* - размерность измерения массива; sum* - сумма элементов одной из диагоналей массива.
    int sizeA, sizeB, sizeC, sumA = 0, sumB = 0, sumC = 0, sumD = 0;
    
    //Ввод параметров куба:
    cout << "Введите длину: ";
    cin >> sizeA;
    cout << "Введите высоту: ";
    cin >> sizeB;
    cout << "Введите ширину: ";
    cin >> sizeC;
    
    int array[sizeA][sizeB][sizeC];
    
    for (int i = 0; i < sizeA; i++){
        for (int j = 0; j < sizeB; j++){
            for (int k = 0; k < sizeC; k++){
                
                //заполнение массива случайными числами и вывод в консоль:
                array[i][j][k] = rand() % 100;
                cout << "\t (" << i << j << k << ") " << array[i][j][k];
                
                //Главная диагональ:
                if (i == j && i == k){
                    sumA += array[i][j][k];
                }
                
                //Ещё диагональ:
                if (j + k == sizeB - 1 && i - j == 0){
                    sumB += array[i][j][k];
                }
                
                //Ещё одна диагональ:
                if ((j == k && i != j)){
                    sumC += array[i][j][k];
                }
                
            }
            cout << endl;
        }
        cout << endl;
    }
    
    //вывод диагоналей:
    cout << "Какая-то диагональ: " << sumA << endl;
    cout << "Другая диагональ: " << sumB << endl;
    cout << "Ещё одна диагональ: " << sumC << endl;

    return 0;
}
