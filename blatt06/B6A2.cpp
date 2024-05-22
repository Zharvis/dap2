#include <algorithm>
#include <iostream>

int getByte(int value, int b) {
  /**********************************************************/
  /****                Longaufgabe 6.2:                 ****/

  return (value >> (8 * b)) & 0xFF;

  /**********************************************************/
}

void sortByByte(int input[], int l, int r, int b) {
  /**********************************************************/
  /****                Longaufgabe 6.2:                 ****/

  // sortiert die Eingabe im Intervall [l,r) nach dem b-niederwertigsten Byte
  std::sort(input + l, input + r,
            [b](int x, int y) { return getByte(x, b) > getByte(y, b); });

  /**********************************************************/
}

void radix(int data[], int size) {
  /**********************************************************/
  /****                Longaufgabe 6.2:                 ****/

  for (int i = 0; i < 4; i++) {
    sortByByte(data, 0, size, i);
  }

  /**********************************************************/
}

int main() {
  int n;
  std::cin >> n;

  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  std::cout << "Input Array:\n";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";

  radix(arr, n);

  std::cout << "After Sorting: ";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  delete[] arr;

  return 0;
}
