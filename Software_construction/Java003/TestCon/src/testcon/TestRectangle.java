/**
 * TestRectangle
 */
public class TestRectangle {

    public static void main(String[] args) {
        Rectangle r = new Rectangle(10, 20);
        System.out.println(r.getArea());

        Rectangle p = new Rectangle(5, 7);
        System.out.println(p.getArea());

        System.out.println(p.toString());
        System.out.println(r.toString());
        System.out.println(p.equals(r));
    }
}
