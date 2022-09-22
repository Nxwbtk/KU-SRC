/*
 * 
 */
public class Rectangle {
    double w;
    double h;
    Rectangle(double width, double height){
        w = width;
        h = height;
    }
    Rectangle(){
        w = 0;
        h = 0;
    }
    public double getArea(){
        return w * h;
    }
    public String toString(){
        return "Width: " + w + " Height: " + h;
    }
    public boolean equals(Rectangle r){
        return (w == r.w) && (h == r.h);
    }
}
