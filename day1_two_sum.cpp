#include <iostream>
using namespace std;

int* twoSum(int nums[], int size, int target) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = i + 1; j < size; ++j) 
        {
            if (nums[i] + nums[j] == target)
            {
                // Found a pair that adds up to the target
                int* result = new int[2];
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    // If no solution is found, return nullptr
    return nullptr;
}

int main() 
{
  
    int nums[] = {5, 3, 4, 15};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);

    int* result = twoSum(nums, size, target);

    if (result != nullptr) 
    {
        cout << "Indices of the two numbers: " << result[0] << " and " << result[1] << endl;
        delete[] result; // Free the allocated memory
    } 
    else 
    {
      cout << "No solution found." << endl;
    }

    return 0;
}
