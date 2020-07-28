#include <iostream>


void centimize(double* ptrd) {
    *ptrd *= 2.24;
}

void order(int* num1, int* num2) {
    if (*num1 > *num2) {            // if first value is large than the second value
        int tempNum = *num1;        // Swape values
        *num1 = *num2;
        *num2 = tempNum;

    }
}

void bsort(int* arryPtr, int arrySize){
    for ( int i = 0; i < arrySize - 1; i++ ) {
        for (int j = i + 1; j < arrySize; j++) {
            order(arryPtr + i, arryPtr + j);
        }
    }

}

int main() {

//Define and initialise variable
    int var1 = 11;
    int var2 = 33;
    int var3 = 46;
    int arrySize = 10;
    int intArry[arrySize] = {39, 23, 90, 60, 13, 12, 24, 16, 88, 110};
    double var4 = 10.0;

//Print out the address of those variable
    /*
    std::cout << &var1 << std::endl
        << &var2 << std::endl
        << &var3 << std::endl;

    int *ptr = &var1;       //pointer point to var 1
    std::cout << *ptr << std::endl;

    ptr = &var2;            //pointer point to var 2
    std::cout << *ptr << std::endl;

    for (int i = 0; i < 5; i++) {
//        std::cout << intArry[i] << std::endl;
        std::cout << *(intArry + i) << std::endl;
    }
    */


//    std::cout << "var = " << var4 << " inches" << std::endl;

//    centimize(&var4);
 //   std::cout << "var = " << var4 << " centimetre" << std::endl;

    bsort(intArry, arrySize);

    // print out sorted array
    for (int i = 0; i < arrySize; i++) {
        std::cout << intArry[i] << " ";
    }

    return 0;
}
