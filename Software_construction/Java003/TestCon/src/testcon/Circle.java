/*
 * Name     : Bunthakan Sirikamonthip
 * ID       : 6430200418
 * Section  : 831
 */
public class Circle {
    double radius;
    String color;
    Circle(double r){
        radius = r;
    }
    Circle(double r, String c){
        radius = r;
        color = c;
    }
    public double getArea(){
        return (Math.PI * Math.pow(radius, 2));
    }
    public String getColor(){
        return color;
    }
}
