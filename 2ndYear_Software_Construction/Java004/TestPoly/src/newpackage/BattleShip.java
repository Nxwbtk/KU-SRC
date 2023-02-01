public class BattleShip implements Priceable {
    @Override
    public int getPrice(int year) {
        if (O_PRICE - (year * 100000) < 10000){
            return (10000);
        }else{
            return (O_PRICE - (year * 100000));
        }
        // return 1000000;
    }
}
