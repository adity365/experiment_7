// Taking input from user in single dimentional array

# include <iostream>
using namespace std;

int main(){

    int array[5]; // declaration of array
    for (int i = 0; i < 5; i++){
        cout << " Enter value " << i << endl;
        cin >> array[i];
    }

    cout << "Your array is " << endl;
    for(int i = 0; i < 5; i++){ // for printing of array
        cout<< array[i] << endl;
    }
}
