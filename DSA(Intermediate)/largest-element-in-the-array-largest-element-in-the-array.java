import java.util.* ;
import java.io.*; 

public class Solution {

    static int largestElement(int[] arr, int n) {
        // Write your code here.
        Arrays.sort(arr);
        return arr[arr.length-1];
    }
}
