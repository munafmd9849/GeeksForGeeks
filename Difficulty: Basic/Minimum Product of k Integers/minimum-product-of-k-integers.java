class Solution {

    int minProduct(int arr[], int k) {
        
        Arrays.sort(arr);
        

        long n = 1000000007;
        
        long product = 1l;
        
        for(int i = 0; i < arr.length && i < k; i++){
            product = ((long)product * (long)arr[i]) % n;
           
        }
        
        return (int)product;
        
        
        
       
    }
}