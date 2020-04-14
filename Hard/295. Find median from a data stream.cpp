class MedianFinder {

private:
    priority_queue<int>maxHeap;
    priority_queue<int, vector<int>, greater<int>>minHeap;
    
public:    
    void addNum(int num) {
        if(maxHeap.empty() || num< maxHeap.top())
            maxHeap.push(num);
        else
            minHeap.push(num);
        
        if(maxHeap.size()+1 < minHeap.size())
         {
            maxHeap.push(minHeap.top());
            minHeap.pop();
         }    
         else if(minHeap.size()+1 < maxHeap.size())
         {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
         }                
    }
    
    double findMedian() {
        if(maxHeap.size()==minHeap.size())
            return (maxHeap.empty())?0:(maxHeap.top() + minHeap.top())/2.0;
        return (maxHeap.size()>minHeap.size())?maxHeap.top():minHeap.top();  
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */