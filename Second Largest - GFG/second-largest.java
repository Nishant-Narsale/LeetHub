//{ Driver Code Starts
//Initial Template for Java




import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            int n = Integer.parseInt(br.readLine().trim());
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            int ans = new Solution().print2largest(arr, n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java
class Solution{
 int print2largest(int arr[], int n) {
        int max = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] > arr[max]){
                max = i;
            }
        }
        
        int temp = arr[max];
        arr[max] = 0;
        
        for(int i = 0; i < arr.length; i++){
            if(arr[i] == temp){
                arr[i] = 0;
            }
        }
        
        int max2 = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] > max2){
                max2 = arr[i];
            }
        }
        
        if(max2 == 0){
            return -1;
        }
        return max2;
        // code here
    }
}

