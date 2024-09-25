public class Basics {

    static void reverseArray(int[] arr, int index) {
        int end = arr.length - 1 - index;
        if (index >= end)
            return;
        int temp = arr[index];
        arr[index] = arr[end];
        arr[end] = temp;
        reverseArray(arr, index + 1);
    }

    static Boolean isPalindrome(String str, int start) {
        int end = str.length() - 1 - start;
        if (start >= end)
            return true;
        if (str.charAt(start) != str.charAt(end))
            return false;
        return isPalindrome(str, start + 1);
    }

    static int fibonaci(int num) {

        if (num <= 1)
            return 0;
        if (num == 2 || num == 3)
            return 1;

        return fibonaci(num - 1) + fibonaci(num - 2);

    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5 };
        reverseArray(arr, 0);

        // for (int i = 0; i < 5; ++i) {
        // System.out.print(arr[i] + " ");
        // }

        // System.out.println(isPalindrome("AbaCsaCabA", 0));
        // System.out.println(fibonaci(15));
    }
}