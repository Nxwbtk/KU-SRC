/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Milk.java                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:06:07 by bsirikam          #+#    #+#             */
/*   Updated: 2022/10/02 22:06:08 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Name     : Bunthakan Sirikamonthip
 * ID       : 6430200418
 * Section  : 831
 */
public class Milk implements Priceable {
    public int getPrice(){
        sum = 50 * count;
        if (count > 10){
            return (sum - ((sum * 10) / 100));
        }else if (count > 5){
            return (sum - ((sum * 5) / 100));
        }else if (count < 1){
            return (0);
        }else{
            return sum;
        }
    }
    public void setPrice(int x){
        count = x;
    }
    int sum;
    int count;
}
