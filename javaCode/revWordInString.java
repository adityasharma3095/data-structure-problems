package javaCode;

//import java.util.*;

public class revWordInString {
    public static void main(String[] args) {
        String str = "I love doing competative coding";

        String[] ans = str.split(" ");
        for (int i = ans.length - 1; i >= 0; i--) {
            System.out.print(ans[i] + " ");
        }
    }
}