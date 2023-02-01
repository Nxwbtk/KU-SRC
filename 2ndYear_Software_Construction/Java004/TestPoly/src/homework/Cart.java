/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   Cart.java                                        :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/10/02 22:08:58 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/10/02 22:09:01 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

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
