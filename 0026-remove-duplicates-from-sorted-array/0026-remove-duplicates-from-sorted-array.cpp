#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& arr) {
        if (arr.empty()) return 0;
        
        int counter = 1; // Index for the next unique element
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] != arr[i - 1]) {
                arr[counter] = arr[i];
                counter++;
            }
        }
        return counter;
    }
};