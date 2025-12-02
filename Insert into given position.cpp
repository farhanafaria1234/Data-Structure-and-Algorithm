#include <iostream>
using namespace std;
int main ()
{
    int arr[10] = {10,20,30,40};
   cout << "Array Elements: ";
   for (int i = 0; i < 4;i++)
   {
       cout << arr[i] <<" ";
   }
   cout << endl;
    int n = 4;
    int pos = 3;
    int k = 25;
     for(int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = k;
    n++;
    cout << "Array after insertion: ";
  for (int i = 0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
