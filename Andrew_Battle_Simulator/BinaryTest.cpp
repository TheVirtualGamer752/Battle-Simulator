//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int binarysearch(int numbers[], int l, int r, int x) {
//    while (l <= r) {
//        int m = l + (r - l) / 2;
//
//        if (numbers[m] == x)
//            return m;
//
//        if (numbers[m] < x)
//            l = m + 1;
//
//        else
//            r = m - 1;
//    }
//    return -1;
//}
//
//void generateNumbers(int* numbers, int size) {
//    for (int i = 0; i < size; i++) {
//        numbers[i] = rand() % 50 + 1;
//    }
//}
//
//void sort(int* array, int amount) {
//    for (int j = 0; j < amount; j++) {
//        for (int k = amount - 1; k >= j; k--) {
//            if (array[k - 1] > array[k]) {
//                int i = array[k - 1];
//                array[k - 1] = array[k];
//                array[k] = i;
//            }
//        }
//    }
//}
//
//int linarySearch(int arr[], int x, int size) {
//    for (int i = 0; i < size; i++) {       // for in arr       
//        cout << arr[i] << " ";
//        if (arr[i] == x) {              // searching x value
//            cout << endl;
//            return i;                   // return finded index 
//        }
//    }
//    cout << endl;
//    return -1;                          // return defaut index -1
//}
//
//int main(void) {
//    srand(time(NULL));
//    
//    int size = rand() % 50 + 1;
//    int* arr = new int[size];
//    
//    int x;
//    cout << "Type the value you are searching for: ";
//    cin >> x;
//    
//    generateNumbers(arr, size);
//
//    sort(arr, size);
//
//    int result = linarySearch(arr, x, size);
//
//    if (result == -1)
//        cout << "Element is not present in array." << endl;
//    else
//        cout << "Element is present at index " << result << endl;
//
// 
//    return 0;
//}
//
////int n = sizeof(arr) / sizeof(arr[0]);
//    //int result = binarysearch(arr, 0, n - 1, x);
//
// /*(result == -1) ? cout << "element is not present in array"
//        : cout << "element is present at index " << result;*/