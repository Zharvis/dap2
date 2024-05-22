#include <cassert>
#include <chrono>
#include <iostream>

// void swap(int data[], int i, int j) {
//   std::cout << "before:" << data[i] << " " << data[j] << "\n";
//   int temp = data[i];
//   data[i] = data[j];
//   data[j] = temp;
//   std::cout << "after:" << data[i] << " " << data[j] << "\n";
// }

// // test if the data[l,r] is partitioned with pivotelement p at position m.
// // data[i] >=p for i < m
// // data[i] <= p for j > m
// bool isPartitioned(int data[], int l, int r, int m, int p) {
//   /**********************************************************/
//   /****                Kurzaufgabe 5.1:                 ****/

//   // Ersetzen Sie diese Kommentarzeile durch Ihren Code!

//   /**********************************************************/
//   return true;
// }
// l,r inclusive -> partition data[l,r]
int partition(int data[], int l, int r) {
  /**********************************************************/
  /****                Kurzaufgabe 5.1:                 ****/

  int pivot = data[r];
  int i = l - 1;
  for (int j = l; j < r; j++) {
    if (data[j] >= pivot) {
      ++i;
      std::swap(data[i], data[j]);
      // swap(data, i, j);
    }
  }
  i++;
  // swap(data, i, r);
  std::swap(data[i], data[r]);
  return i;
  /**********************************************************/
}

// l,r inclusive -> sort data[l,r]
void qsort(int data[], int l, int r) {
  /**********************************************************/
  /****                Kurzaufgabe 5.1:                 ****/

  if (l < r) {
    int m = partition(data, l, r);
    qsort(data, l, m - 1);
    qsort(data, m + 1, r);
  }

  /**********************************************************/
}

// // check if the array sorted discreading.
// bool isSorted(const int data[], int size) {
//   /**********************************************************/
//   /****                Kurzaufgabe 5.3:                 ****/

//   // Ersetzen Sie diese Kommentarzeile durch Ihren Code!

//   /**********************************************************/
// }

int main() {
  int n;
  std::cin >> n;

  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  if (n < 20) {
    std::cout << "Input Array:\n";
    for (int i = 0; i < n; i++) {
      std::cout << arr[i] << " ";
    }
    std::cout << "\n";
  }

  /**********************************************************/
  /****            Kurzaufgabe 5.1 & 5.3 & 5.4:          ****/

  // Ersetzen Sie diese Kommentarzeile durch Ihren Code!

  qsort(arr, 0, n - 1);

  std::cout << "Output Array:\n";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
  delete[] arr;
  /**********************************************************/
  return 0;
}
