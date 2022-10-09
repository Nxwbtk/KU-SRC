package test;

import sc.Animal;

public class D extends Animal {
    public void go (){
        run();
        sleep();
    }
    public static void main(String[] args) {
        Animal a = new Animal();
        a.sleep();
    }
}
