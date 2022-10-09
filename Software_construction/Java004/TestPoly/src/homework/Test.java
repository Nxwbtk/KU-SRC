/*
 * Name     : Bunthakan Sirikamonthip
 * ID       : 6430200418
 * Section  : 831
 */

public class Test {
    public static void main(String[] args) {
        Candy candy = new Candy(); 
        Milk milk = new Milk(); 
        candy.setPrice(150);
        milk.setPrice(15);
        Cart cart = new Cart();
        cart.items[0] = candy; ; 
        cart.items[1] = milk; 
        System.out.println(cart.sumPrice());
        }
}
