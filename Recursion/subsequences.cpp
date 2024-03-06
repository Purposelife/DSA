#include <iostream>
#include <vector>
 
void printSubsequences(std::vector<int>& arr, int index,
                       std::vector<int>& subsequence)
{
    if (index == arr.size()) {
        for (int i = 0; i < subsequence.size(); i++) {
            std::cout << subsequence[i] << " ";
        }
        std::cout << std::endl;
        return;
    }
 
    // Include the current element
    subsequence.push_back(arr[index]);
    printSubsequences(arr, index + 1, subsequence);
 
    // Exclude the current element
    subsequence.pop_back();
    printSubsequences(arr, index + 1, subsequence);
}
 
int main()
{
    std::vector<int> arr = { 1, 2, 3 };
 
    std::vector<int> subsequence;
    std::cout << "Subsequences:" << std::endl;
    printSubsequences(arr, 0, subsequence);
 
    return 0;
}