#include <iostream>
#include <stdlib.h>
#include <string>

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
    cout << "\n";
    
    int array[sizeA][sizeB][sizeC];
    string s(8*sizeA - 1, '_');
    string s1(8*sizeA - 1, '-');
    
    for (int i = 0; i < sizeA; i++){
        string tab(i*2, ' ');
        cout << "block: " << i << s << endl;
        for (int j = 0; j < sizeB; j++){
            for (int k = 0; k < sizeC; k++){
                
                //заполнение массива случайными числами и вывод в консоль:
                array[i][j][k] = rand() % 90 + 10;
                cout << "\t| " << array[i][j][k] << " |";
                
                //Главная диагональ:
                if (i == j && i == k){
                    sumA += array[i][j][k];
                }
                
                //Ещё диагональ:
                if (j + k == sizeA - 1 && i - j == 0){
                    sumB += array[i][j][k];
                }
                
                //Ещё одна диагональ:
                if (j == k && i + j == sizeA - 1){
                    sumC += array[i][j][k];
                }
                
                //Последняя диагональ:
                if (i == k && i + j == sizeA - 1){
                    sumD += array[i][j][k];
                }
                
            }
            cout << endl;
        }
        cout << "\t" << s1 << endl;
    }
    
    //вывод диагоналей:
    cout << "Какая-то диагональ: " << sumA << endl;
    cout << "Другая диагональ: " << sumB << endl;
    cout << "Ещё одна диагональ: " << sumC << endl;
    cout << "Последняя диагональ: " << sumD << endl;

    return 0;
}
