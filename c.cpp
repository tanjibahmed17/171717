#include <iostream>
using namespace std;
int main()
{
    int initialAlllocation = 5;
    int a[initialAlllocation]= {10, 20, 30, 40, 50};
    int logicalSize = 5;
       cout<<"Array before insertion; ";
       for(int i=0; i<logicalSize; i++)
       {
           cout<<a[i]<<" ";
       }
    int insertPosition;
    cout<< "Enter the number's index: ";
    cin>> insertPosition;
    int valueToInsert;
    cout<< "Enter the value to be inserted: ";
    cin>> valueToInsert;
    if (logicalSize>= initialAlllocation)
 {
        int b[initialAlllocation *2];
    for (int i=0; i<logicalSize; i++)
     {
        b[i]=a[i];
     }
    for (int i=logicalSize-1; i>= insertPosition; i--)
     {
        b[i+1]= b[i];
     }
    b[insertPosition]=valueToInsert;
    logicalSize++;

    cout<<"Array after insertion without overflow: ";
    for (int i=0; i<logicalSize; i++)
    {
       cout<<b[i]<<" ";
    }
    cout<<endl;
}
    else
        {
            for (int i=logicalSize-1; i>=insertPosition; i--){
    a[i=1]= a[i];
        }
        a[insertPosition]= valueToInsert;
        logicalSize++;
    for (int i=0; i<logicalSize; i++)
    {
        cout<<a[i]<<" ";
    }
      return 0;
 }
}//

