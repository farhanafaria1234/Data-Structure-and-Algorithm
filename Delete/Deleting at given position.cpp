#include <iostream>
using namespace std;
int main ()
{
    int arr[10] = {10,20,30,40,50,60};
   cout << "Array Elements: ";
    int n = 6;
    int pos = 3;
   for (int i = 0; i < n;i++)
   {
       cout << arr[i] <<" ";
}
       cout << endl;

    //int k = 25;
     for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    //arr[pos] --> delete;
        cout << "Array after deletion: ";
  for (int i = 0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
