/*
 * Name     : Bunthakan Sirikamonthip
 * ID       : 6430200418
 * Section  : 831
 */

public class Triangle extends Shape {
    private double base;
    private double height;
    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }
    @Override
    public double getArea() {
        return (0.5 * this.base * this.height);
    }
}

