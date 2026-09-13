#include <iostream>

int findLargest(const int numbers[], int size)
{
    int largest = numbers[0]; // BUG!

    for (int i = 1; i < size; ++i)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    return largest;
}

int main()
{
    int numbers[] = {-25, -10, -3, -17, -8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int largest = findLargest(numbers, size);

    std::cout << "Nilai terbesar: " << largest << '\n';

    return 0;
}