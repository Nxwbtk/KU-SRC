/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Candy.java                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:06:13 by bsirikam          #+#    #+#             */
/*   Updated: 2022/10/02 22:06:14 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Name     : Bunthakan Sirikamonthip
 * ID       : 6430200418
 * Section  : 831
 */
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
