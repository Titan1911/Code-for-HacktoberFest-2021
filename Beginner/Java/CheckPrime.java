package Beginner.Java;

import java.util.Scanner;

public class CheckPrime {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        if (isPrime(number))
            System.out.println("true");
        else
            System.out.println("false");
    }

    /*
     * Takes a number as input and Returns true if the given number is prime or
     * false if not
     */
    private static boolean isPrime(int number) {
        for (int i = 2; i <= Math.sqrt(number); i++)
            if (number % i == 0)
                return false;
        return true;
    }
}
