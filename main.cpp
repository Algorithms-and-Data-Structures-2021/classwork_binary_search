
#include <iostream>
using namespace std;

bool binary_search(int *array, int i1, int i2, int num){
  if (i1 != i2){
    auto index = (i1 + i2) / 2;
    if (array[index] == num) return true;
    else if (array[index] < num ) return binary_search(array, index+1, i2, num);
    else return binary_search(array, i1, index-1, num);
  } else return false;
}

int main(){
    int x[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << binary_search(x, 0, 9, 11);
}