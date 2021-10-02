package Beginner.Java;

public class CheckPrime {
    /*
     * Takes a number as input and Returns true if the given number is prime or
     * false if not
     */
    public boolean isPrime(int number) {
        for (int i = 2; i <= Math.sqrt(number); i++)
            if (number % i == 0)
                return false;
        return true;
    }
}
