class minHeap {
  private:
    // Initialize your data members
    vector<int> arr;

  public:

    void push(int x) {
        // Insert x into the heap
        arr.push_back(x);
        int i=arr.size()-1;
        while(i>0){
            int p=(i-1)/2;
            if(arr[p]<arr[i]){break;}
            else{
                swap(arr[p],arr[i]);
                i=p;
            }
        }
        
    }

    void pop() {
        // Remove the top (minimum) element
        swap(arr[0],arr[arr.size()-1]);
        arr.pop_back();
        int i=0;
        while(2*i+1<arr.size()){
            
            int mini=2*i+1;
            if(2*i+2<arr.size() && arr[mini]>arr[2*i+2]){
                mini=2*i+2;
            }
            if(arr[i]<arr[mini]){
                break;
            }
            else{
                swap(arr[mini],arr[i]);
                i=mini;
            }
            
        }
    }

    int peek() {
        // Return the top element or -1 if empty
        return arr.size()>0?arr[0]:-1;
        
    }

    int size() {
        // Return the number of elements in the heap
        return arr.size();
        
    }
};