#include <iostream>
#include <vector>

int max_subarray_sum(const std::vector<int>& arr) {
    int n = arr.size();

    if (n == 0) {
        return 0;
    }

    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; ++i) {
        current_sum = std::max(arr[i], current_sum + arr[i]);
        max_sum = std::max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    // Example usage:
    std::vector<int> arr = {1 , 2 , 7 , -4 , 3 , 2 , -10 , 9 , 1};
    int result = max_subarray_sum(arr);

    std::cout << "Maximum subarray sum: " << result << std::endl;

    return 0;
}
