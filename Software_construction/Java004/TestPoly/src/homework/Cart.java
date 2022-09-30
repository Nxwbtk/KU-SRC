public class Cart{
    Priceable[] items = new Priceable[2];

    public int sumPrice(){
        sum = items[0].getPrice() + items[1].getPrice();
        return sum;
    }
    int sum;
}
