#include <iostream>
using namespace std;

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++ ){
        cout << arr[i] << "\t";
    }
}

int main() {
    
    int guesses[] = {10, 50, 100, 150, 200, 250};
    int size = sizeof(guesses) / sizeof(guesses[0]);

    // int size = sizeof(guesses) / sizeof(guesses[0]);
    // for (int i = 0; i < size; i++ ){
    //     cout << guesses[i] << endl;
    // }
    print_array(guesses, size);
    

    return 0;
}
