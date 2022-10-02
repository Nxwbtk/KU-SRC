/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   Test.java                                        :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/10/02 22:08:20 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/10/02 22:08:23 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

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
