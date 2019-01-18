#include <iostream>

//template <class T1, class T>
int *apply_all(int arr1[], size_t SIZE, int arr2[], size_t SIZE2)
{
    int result = 0;
    int SIZEMAX = SIZE * SIZE2;
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE2; j++)
        {
            result = arr1[i] * arr1[j];
            std::cout << result << std::endl;
        };
    };
    
    int *res = new int arr[SIZEMAX];
    return res;
}

template <class T2, class T3>
void print(T2 arr1[], T3 SIZE)
{
    for (int i = 0; i < SIZE; i++)
        std::cout << arr1[i] << std::endl;
}

int main()
{
    const size_t ARR1_SIZE{ 5 };
    const size_t ARR2_SIZE{ 3 };

    int array1[]{ 1,2,3,4,5 };
    int array2[]{ 10,20,30 };

        std::cout << "Array 1: ";
        print(array1, ARR1_SIZE);

        std::cout << "Array 2: ";
        print(array2, ARR2_SIZE);

        int *results = apply_all(array1, ARR1_SIZE, array2, ARR2_SIZE);
        constexpr size_t results_size{ ARR1_SIZE * ARR2_SIZE };

        std::cout << "Result: ";
        print(results, results_size);

        std::cout << std::endl;

        system("pause");
    return 0;
}