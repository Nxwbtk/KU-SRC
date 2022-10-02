/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cart.java                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:06:10 by bsirikam          #+#    #+#             */
/*   Updated: 2022/10/02 22:06:11 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Name     : Bunthakan Sirikamonthip
 * ID       : 6430200418
 * Section  : 831
 */
public class Cart{
    Priceable[] items = new Priceable[2];

    public int sumPrice(){
        sum = items[0].getPrice() + items[1].getPrice();
        return sum;
    }
    int sum;
}
