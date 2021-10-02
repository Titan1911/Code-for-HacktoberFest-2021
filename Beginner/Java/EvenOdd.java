package Beginner.Java;

import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        if (isEven(number))
            System.out.println("true");
        else
            System.out.println("false");
    }

    /*
     * Takes a number as input and Returns true if the given number is Even or false
     * if not
     */
    private static boolean isEven(int number) {
        return number % 2 == 0;
    }
}
