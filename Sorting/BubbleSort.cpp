#include <iostream>

void bubbleSort(int array[], int size);

int main(){
    int numbs[] = {10,44,6,3,1,2};
    int size = sizeof(numbs)/sizeof(numbs[0]);

    for(int numb: numbs){
        std::cout << numb << " ";
    }

    std::cout << "\n";

    bubbleSort(numbs, size);

    for(int numb: numbs){
        std::cout << numb << " ";
    }

    return 0;



}

void bubbleSort(int array[], int size){
    int temp;

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            
        }
    }
}