#include <iostream>
void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
int main()
{
  int arr[] = {5, 1, 4, 2, 8};
  int tam = 5;
  bubbleSort(arr, tam);
  std::cout << "Array ordenado: ";
  for (int i = 0; i < tam; i++)
    std::cout << arr[i] << " ";
  return 0;
}

#include <iostream>
void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_idx = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min_idx])
        min_idx = j;
    }
    int temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
  }
}
int main()
{
  int arr[] = {64, 25, 12, 22, 11};
  int tam = 5;
  selectionSort(arr, tam);
  std::cout << "Array ordenado: ";
  for (int i = 0; i < tam; i++)
    std::cout << arr[i] << " ";
  return 0;
}

#include <iostream>
void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
int main()
{
  int arr[] = {12, 11, 13, 5, 6};
  int n = 5;
  insertionSort(arr, n);
  std::cout << "Array ordenado: ";
  for (int i = 0; i < n; i++)
    std::cout << arr[i] << " ";
  return 0;
}