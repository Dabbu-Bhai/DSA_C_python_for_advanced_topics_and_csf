#include <iostream>
#include <vector>
using namespace std;
void pri_arr(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void bubblesort(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size() - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
    pri_arr(arr);
  }
}

void selectionsort(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    int si = i; // smallest index
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[j] < arr[si]) {
        si = j;
      }
    }
    swap(arr[i], arr[si]);
    pri_arr(arr);
  }
}

void insertionsort(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    int curr = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] > curr) {
      arr[prev+1] = arr[prev];
      prev--;
    }
    arr[prev + 1] = curr;
    pri_arr(arr);
  }
}

int main() {
  vector<int> arr = {11, 4, 2, 5, 3, 6, 7, 10, 9, 8, 1, 0};
  // bubblesort(arr);
  // selectionsort(arr);
  insertionsort(arr);
  return 0;
}