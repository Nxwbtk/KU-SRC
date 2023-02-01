/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   shopCal.java                                     :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/07/08 01:38:31 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/07/08 01:38:37 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

public class shopCal {
    static void buy(float cake, float coffee)
    {
        if (cake > coffee)
            System.out.println("Buy 1 cake and 1 coffee");
        else if (cake == coffee)
            System.out.println("Buy 2 cake and 2 coffee");
        else if ((cake * 2) == coffee)
            System.out.println("Buy 2 cake");
        else
            System.out.println("Not buy waiting for promotion");
    }
    public static void main(String[] args) {
        buy(10, 10);
    }
}
