#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> queue2;

    MyStack() {
        // Constructor does not need to initialize anything separately
    }

    void push(int x) {
        queue<int> temp;
        temp.push(x);
        while (!queue2.empty()) {
            temp.push(queue2.front());
            queue2.pop();
        }
        queue2 = temp; // Replace queue2 with the rearranged queue
    }

    int pop() {
        if (!queue2.empty()) {
            int topElement = queue2.front();
            queue2.pop();
            return topElement;
        }
        return -1; // Error case, stack is empty
    }

    int top() {
        return queue2.empty() ? -1 : queue2.front(); // Return -1 if stack is empty
    }

    bool empty() {
        return queue2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
