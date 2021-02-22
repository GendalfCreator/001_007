#include <iostream>

using namespace std;

#define CHECK_VARIABLE(a, b) (cout << (a >= 0 && a < b ? "true" : "false") << endl)
#define ARRAY_ELEMENT_ACCESS(arr, i, j) (cout << *(*(arr + i) + j) << endl)
#define ARRAY_ELEMENTS_COUNT(arr, type) (cout << (sizeof (arr) / sizeof (int)) << endl)

int main()
{
//01. Проверка попадания числа в диапозон
  int a = 0, b = 5;
  CHECK_VARIABLE(a, b);

//02. Доступ к элементу двумерного массива
  int i = 3, j = 3;
  int array[i][j];

  array[0][0] = 54;
  array[0][1] = 55;
  array[1][1] = 58;
  array[2][0] = 60;
  array[2][1] = 61;
  array[2][2] = 70;

  ARRAY_ELEMENT_ACCESS(array, 0, 1);

//03. Вывод количества элементов массива
  int arr[7];

  ARRAY_ELEMENTS_COUNT(arr, int);

  return 0;
}
