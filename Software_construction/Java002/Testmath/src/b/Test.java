/**
 * Name     : Bunthakan Sirikamonthip 
 * ID       : 6430200418
 * Section  : 831
 */
package b;
import a.*;
import java.util.Scanner;
public class Test {
    public static void main(String[] args) {
        try{
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter your number: ");
            int n = sc.nextInt();
            Hello h = new Hello();
            int result = h.calculate(n);
            System.out.println("Result = "+result);
        }catch(Exception e){
            System.out.println("Error" + e);
        }
    }
}
