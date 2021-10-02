package Beginner.Java;

public class TailRecursion {

    /* Printing numbers upto 10 using tail recursion */
    public void print(int n) {
        if (n <= 10) {
            System.out.println(n);
            print(n + 1);
        }
    }
}
