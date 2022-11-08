/*
 * Name     : Bunthakan Sirikamonthip
 * ID       : 6430200418
 * Section  : 831
 */

public class Main {
    public static double sumArea(Shape[] a) {
        double sum = 0;
        for (Shape s : a) {
            sum += s.getArea();
        }
        return sum;
    }

    public static void main(String[] args) {
        Shape[] a = {new Triangle(4, 5),
                new Square(3)};
        System.out.println(sumArea(a));
    }
}
