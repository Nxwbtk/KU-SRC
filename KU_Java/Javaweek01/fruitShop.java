/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   fruitShop.java                                   :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/07/07 17:09:05 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/07/07 17:09:09 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

public class fruitShop {
    static void sellDisplay(long durian, long mangosteen, long rambutan)
    {
        long result;
        if (durian > (mangosteen + rambutan))
        {
            result = (50 * (durian + mangosteen + rambutan)) / 100;
            System.out.println("Export durian " + result + " ton.");
        }
        else if (durian < (mangosteen + rambutan))
            System.out.println("Don't export.");
        else
        {
            result = (10 * (durian + mangosteen + rambutan) / 100);
            System.out.println("Export durian " + result + " ton.");
        }
    }
    public static void main(String[] args) {
        sellDisplay(50, 10, 20);
    }
}
