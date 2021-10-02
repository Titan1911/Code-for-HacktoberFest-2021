package Beginner.Java;

public class Random {

    /* Genearates a random number between the given range */
    public static int random(int min, int max) {
        return (int) Math.floor(Math.random() * (max - min + 1) + min);
    }
}
