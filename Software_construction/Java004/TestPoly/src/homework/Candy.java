public class Candy implements Priceable{
    public int getPrice(){
        price = 10 * c_count;
        if (c_count > 200){
            return (price - ((price * 10) / 100));
        }else if (c_count > 100){
            return (price - ((price * 5) / 100));
        }else if (c_count < 1){
            return (0);
        }else{
            return price;
        }
    }
    public void setPrice(int x){
        c_count = x;
    }
    int price;
    int c_count;
}
