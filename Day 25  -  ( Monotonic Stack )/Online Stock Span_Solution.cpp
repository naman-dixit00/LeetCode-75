#include <iostream>
#include <stack>
using namespace std;

class StockSpanner {
private:
    stack<pair<int,int> > s; // pair: (price, span)
public:
    StockSpanner() {}

    int next(int price) {
        int span = 1;
        while(!s.empty() && s.top().first <= price){
            span += s.top().second;
            s.pop();
        }
        s.push(make_pair(price, span));
        return span;
    }
};

// Test
int main() {
    StockSpanner stock;
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices)/sizeof(prices[0]);

    for(int i = 0; i < n; i++){
        cout << stock.next(prices[i]) << " ";
    }
    cout << endl;
    return 0;
}
