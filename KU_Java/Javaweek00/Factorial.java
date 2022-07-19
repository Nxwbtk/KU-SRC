/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   Factorial.java                                   :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/06/30 20:42:23 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/06/30 20:42:27 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

public class Factorial
{
    public static void main(String[] args)
    {   final int NUM_FACTS = 100;
        for(int i = 0; i < NUM_FACTS; i++)
            System.out.println( i + "! is " + factorial(i));
    }
   
    public static int factorial(int n)
    {   int result = 1;
        for(int i = 2; i <= n; i++)
            result *= i;
        return result;
    }
}