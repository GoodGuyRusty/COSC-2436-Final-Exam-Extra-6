#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

// HackerRank (Medium) | Queue using Two Stacks | https://www.hackerrank.com/challenges/queue-using-two-stacks/problem

int main() {

    stack<int> stack1;
    stack<int> stack2;
    
    int q;
    if (!(cin >> q)) return 0;
    
    for (int i = 0; i < q; ++i) {
        int type;
        if (!(cin >> type)) break;
        
        if (type == 1) {
            int x;
            if (!(cin >> x)) break;
            stack1.push(x);
        } else {
            if (stack2.empty()) {
                while (!stack1.empty()) {
                    stack2.push(stack1.top());
                    stack1.pop();
                }
            }
            
            if (type == 2) {
                if (!stack2.empty()) {
                    stack2.pop();
                }
            } else if (type == 3) {
                if (!stack2.empty()) {
                    cout << stack2.top() << endl;
                }
            }
        }
    }
    
    return 0;
}
