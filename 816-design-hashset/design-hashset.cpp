class MyHashSet {
public:
    vector<int> arr; // Initialize the vector

    MyHashSet() {
        arr.resize(1000001, -1); // Initialize all elements to -1
    }
    
    void add(int key) {
        arr[key] = 1; // Mark the key as present
    }
    
    void remove(int key) {
        arr[key] = -1; // Mark the key as absent
    }
    
    bool contains(int key) {
        return arr[key] == 1; // Check if the key is present
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
