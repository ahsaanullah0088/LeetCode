#include <unordered_map>
#include <vector>
#include <cstdlib> // For rand()

class RandomizedSet {
private:
    // A dynamic array to store the elements
    std::vector<int> nums;
    // A hashmap to store the value and its index in the array
    std::unordered_map<int, int> valToIndex;
    
public:
    RandomizedSet() {
        // Initialize your data structures here.
    }
    
    bool insert(int val) {
        // If the value already exists, return false
        if (valToIndex.count(val)) return false;
        
        // Add the value to the vector and record its index in the hashmap
        nums.push_back(val);
        valToIndex[val] = nums.size() - 1;
        
        return true;
    }
    
    bool remove(int val) {
        // If the value does not exist, return false
        if (!valToIndex.count(val)) return false;
        
        // Move the last element to the place of the element to delete
        int lastElement = nums.back();
        int index = valToIndex[val];
        nums[index] = lastElement;
        valToIndex[lastElement] = index;
        
        // Remove the last element
        nums.pop_back();
        valToIndex.erase(val);
        
        return true;
    }
    
    int getRandom() {
        // Get a random element from the vector
        int randomIndex = rand() % nums.size();
        return nums[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
