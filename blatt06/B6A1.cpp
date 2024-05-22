#include <algorithm>
#include <cassert>
#include <iostream>

int getMin(const int data[], int size) {
  /**********************************************************/
  /****                Langaufgabe 6.1:                 ****/

  int min = data[0];
  for (int i = 1; i < size; i++) {
    if (data[i] < min) {
      min = data[i];
    }
  }

  /**********************************************************/
  return min;
}

int getMax(const int data[], int size) {
  /**********************************************************/
  /****                Langaufgabe 6.1:                 ****/

  int max = data[0];
  for (int i = 1; i < size; i++) {
    if (data[i] > max) {
      max = data[i];
    }
  }

  /**********************************************************/
  return max;
}

int *count(const int data[], int size, int min, int max) {
  /**********************************************************/
  /****                Langaufgabe 6.1:                 ****/

  int *counter = new int[max - min + 1]{0};

  for (int i = 0; i < size; i++) {
    counter[data[i] - min]++;
  }

  return counter;

  /**********************************************************/
}

int *countingSort(const int data[], int size) {
  /**********************************************************/
  /****                Langaufgabe 6.1:                 ****/
  int *sortedArr = new int[size];

  int min = getMin(data, size);
  int max = getMax(data, size);

  int *counter = count(data, size, min, max);

  for (int i = max - min - 1; i >= 0; i--) {
    counter[i] = counter[i] + counter[i + 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    sortedArr[counter[data[i] - min] - 1] = data[i];
    counter[data[i] - min]--;
  }

  delete[] counter;
  return sortedArr;
  /**********************************************************/
}

int main() {
  int n;
  std::cin >> n;
  assert(n > 0);
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  std::cout << "Input Array: ";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  int min = getMin(arr, n);
  std::cout << "The minimum value: " << min << std::endl;
  int max = getMax(arr, n);
  std::cout << "The maximum value: " << max << std::endl;
  int *count_arr = count(arr, n, min, max);
  std::cout << "Frequencies: ";
  for (int i = 0; i < max - min + 1; i++) {
    std::cout << count_arr[i] << " ";
  }
  std::cout << std::endl;
  int *output = countingSort(arr, n);
  std::cout << "After sorting: ";
  for (int i = 0; i < n; i++) {
    std::cout << output[i] << " ";
  }
  std::cout << std::endl;
  delete[] arr;
  delete[] count_arr;
  delete[] output;
  return 0;
}
