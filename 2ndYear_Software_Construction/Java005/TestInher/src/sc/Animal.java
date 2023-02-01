package sc;
public class Animal {
    private void eat() {
        System.out.println("Animal is eating");
    } //only same class
    void walk(){ // only in same package
        System.out.println("Animal is walking");
    } // only same package
    protected void run(){ // subclass
        System.out.println("Animal is running");
    } //only same package and subclass and not static method
    public void sleep() { //
        System.out.println("Animal is sleeping");
    } //anywhere
}