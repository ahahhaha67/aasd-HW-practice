#include <iostream>

template <class T>
T *unique(T *a, size_t s)
{
  if (s == 0)
    return a;

  T *end = a + 1;

  for (size_t i = 1; i < s; ++i)
  {
    bool isDuplicate = false;
    for (T *p = a; p != end; ++p)
    {
      if (*p == a[i])
      {
        isDuplicate = true;
        break;
      }
    }
    if (!isDuplicate)
    {
      *end = a[i];
      ++end;
    }
  }
  return end;
}

int main()
{
  int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
  size_t n = sizeof(arr) / sizeof(arr[0]);

  int *newEnd = unique(arr, n);
  size_t newSize = newEnd - arr;

  std::cout << "Unique integers (" << newSize << "): ";
  for (int *p = arr; p != newEnd; ++p)
    std::cout << *p << " ";
  std::cout << std::endl;

  return 0;
}
