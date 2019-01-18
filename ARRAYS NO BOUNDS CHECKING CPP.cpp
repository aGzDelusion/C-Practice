/**************************************
------------------NO BOUNDS CHECKING IN C++------------------
SAMPLE FOR BOUNDS CHECKING IN C++. This program assigns the integer 900
to 3-element array named values. However, it attempts to write up to
5-elements, accessing illegally two array elements that are out-of-bounds
of declared array size.
This causes the program to crash (a segmentation fault occurs for accessing
memory out of bounds).
The elements 4 and 5 (with subscript 3 and 4 correspondingly) do not exist
but C++ allows the program to write beyond the array boundary as if they were there.
What happens when the loop writes data beyond the boundary of the array?
Even if the program does not cause a segfault, this is still a bug.

**************************************/
#include <iostream>

int main(){
    const int SIZE = 3; 
    int values[SIZE];
    int count;

    std::cout << "This program will store five numbers in the 3-eleement array" << std::endl;
        for (count = 0; count < 10; count++)
            values[count] = 900;
    
    std::cout << "The program has not crashed if you see this message"
              << "Here are the corresponding numbers";
        for (count = 0; count < 10; count++)
            std::cout << values[count] << std::endl;
    
    system("pause");
    return 0;
        
}