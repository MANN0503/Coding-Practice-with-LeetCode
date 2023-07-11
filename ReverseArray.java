import java.util.*;

public class ReverseArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Original Array" + Arrays.toString(arr));
        Collections.reverse(Arrays.asList(arr));
        System.out.println("Reverse Array:" + Arrays.toString(arr));
        
        sc.close();
    }
}