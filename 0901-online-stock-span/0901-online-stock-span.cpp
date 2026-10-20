class StockSpanner {
        stack<int> s;
        vector<int> prices;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        prices.push_back(price);
        int i = prices.size()-1;
        while(s.size()>0 && prices[s.top()]<=prices[i]){
            s.pop();
        }
        int span;
        if(s.size()==0){
            span = i+1;
        }else{
            span = i-s.top();
        }s.push(i);
        return span;

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */