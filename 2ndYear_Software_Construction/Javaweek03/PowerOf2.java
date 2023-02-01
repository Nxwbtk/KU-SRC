public class PowerOf2 {
    public PowerOf2() {}
    public int power2(int n) {
        return 1 << n;
    }
    public static void main(String [] args) {
        PowerOf2 p = new PowerOf2();
        for (int i=1; i<=29; i+=2) {
            System.out.println(i + " " + p.power2(i));
        }
    }
}