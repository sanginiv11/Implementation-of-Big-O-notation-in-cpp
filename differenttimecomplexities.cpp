#include <iostream>
#include <vector>
using namespace std;
int getFirstElement(const vector<int>& arr) {
    return arr[0]; 
}
void printElements(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
void printPairs(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
        cout << endl;
    }
}
int main() {
    vector<int> numbers = {1, 3, 7, 23, 16};
    cout << "O(1) Example: First element = " << getFirstElement(numbers) << endl;
    cout << "\nO(n) Example: Printing elements:" << endl;
    printElements(numbers);
    cout << "\nO(n^2) Example: Printing pairs:" << endl;
    printPairs(numbers);
    return 0;
}
/*OUTPUT
O(1) Example: First element = 1

O(n) Example: Printing elements:
1 3 7 23 16 

O(n^2) Example: Printing pairs:
(1,1) (1,3) (1,7) (1,23) (1,16) 
(3,1) (3,3) (3,7) (3,23) (3,16) 
(7,1) (7,3) (7,7) (7,23) (7,16) 
(23,1) (23,3) (23,7) (23,23) (23,16) 
(16,1) (16,3) (16,7) (16,23) (16,16)
*/