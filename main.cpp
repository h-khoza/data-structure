#include <iostream>


void centimize(double* ptrd) {
    *ptrd *= 2.24;
}

void order(int* num1, int* num2) {
    if (*num1 > *num2) {

    }
}

int main() {

//Define and initialise variable
    int var1 = 11;
    int var2 = 33;
    int var3 = 46;
    int intArry[5] = {2, 4, 6, 8, 10};
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
    */

    for (int i = 0; i < 5; i++) {
//        std::cout << intArry[i] << std::endl;
        std::cout << *(intArry + i) << std::endl;
    }


//    std::cout << "var = " << var4 << " inches" << std::endl;

    centimize(&var4);
 //   std::cout << "var = " << var4 << " centimetre" << std::endl;


    return 0;
}
