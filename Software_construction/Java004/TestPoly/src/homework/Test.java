/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.java                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:06:01 by bsirikam          #+#    #+#             */
/*   Updated: 2022/10/02 22:06:02 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
