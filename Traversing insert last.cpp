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
    int k = 50;
    arr[n] = k;
    n++;
    cout << "Array after insertion: ";
  for (int i = 0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
