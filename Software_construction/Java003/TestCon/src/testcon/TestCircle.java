public class TestCircle {
    public static void main(String[] args) {
        Circle c1 = new Circle(5);
        System.out.printf("The area is %.2f\n", c1.getArea());
        c1.radius = 20;
        System.out.printf("The area is %.2f\n", c1.getArea());
        Circle c2 = new Circle(5, "red");
        System.out.printf("The area is %.2f\n", c2.getArea());
        System.out.println("The color is " + c2.getColor());
        c2.color = "blue";
        System.out.println("The color is " + c2.getColor());
    }    
}
