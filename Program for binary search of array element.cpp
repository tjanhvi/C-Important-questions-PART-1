#include<iostream>
using namespace std;
    
/*program for binary search of array element

*/
int main()
{
  int c, first, last, middle, n, search, array[5]={1,2,3,4,5};

 cin>>search;
  first = 0;
  last = 4;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      cout<<"found"<<middle;
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    cout<<"not found";

  return 0;
}