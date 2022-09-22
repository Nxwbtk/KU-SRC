/**
 * Name         : Bunthakan Sirikamonthip 
 * ID           : 6430200418
 * Section      : 831
 * Description  : This is a random program that use method from Math class and compare with user input.
 */
import java.util.Scanner;

public class RandomNumber {

    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(System.in);
            int rd = (int) (Math.random() * 100);
            while (1 == 1) {
                System.out.printf("Enter your number : ");
                int u = sc.nextInt();
                if (u < rd) {
                    System.out.println("More than >>");
                    continue;
                } else if (u > rd) {
                    System.out.println("Less than <<");
                    continue;
                } else if (u == rd) {
                    System.out.println("You're Correct :D");
                    break;
                }
            }
        } catch (Exception e) {
            System.out.println("Error " + e);
        }

    }
}