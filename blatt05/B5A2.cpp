#include <iostream>
#include <chrono>
#include <utility>


// test if the data[l,r] is partitioned with pivotelement p1 at position m1, p2
// at m2.
// m1 <= m2 and p1 >= p2
// data[i] >=p1 for l<=i < m1
// p2<=data[i] <= p1 for m1 < p < m2
// data[i] <= p2 for m2 < p <=r
bool isPartitioned(int data[], int l, int r, int m1, int p1, int m2, int p2){
  /**********************************************************/
  /****                Kurzaufgabe 5.2:                 ****/

  // Ersetzen Sie diese Kommentarzeile durch Ihren Code!

  /**********************************************************/
  return true;
} 






std::pair<int, int> partition(int data[], int l, int r)
{
  /**********************************************************/
  /****                Kurzaufgabe 5.2:                 ****/

  // Ersetzen Sie diese Kommentarzeile durch Ihren Code!

  /**********************************************************/
}

void qsort(int data[], int l, int r)
{
  /**********************************************************/
  /****                Kurzaufgabe 5.2:                 ****/

  // Ersetzen Sie diese Kommentarzeile durch Ihren Code!

  /**********************************************************/
}

int main()
{
  int n;
  std::cin >> n;

  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }

  if (n < 20)
  {
    std::cout << "Input Array:\n";
    for (int i = 0; i < n; i++)
    {
      std::cout << arr[i] << " ";
    }
    std::cout << "\n";
  }

  /**********************************************************/
  /****                Kurzaufgabe 5.2:                 ****/

  // Ersetzen Sie diese Kommentarzeile durch Ihren Code!

  /**********************************************************/
}
