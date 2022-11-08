/*
 * Name     : Bunthakan Sirikamonthip
 * ID       : 6430200418
 * Section  : 831
 */

public class Square extends Shape {
    private double w;
    public Square(double w){
        this.w = w;
    }
    @Override
    public double getArea() {
        return (this.w * this.w);
    }
}
