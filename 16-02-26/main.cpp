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
  return 0;
}
