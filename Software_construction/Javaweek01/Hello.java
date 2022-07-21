/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   Hello.java                                       :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/07/08 01:38:56 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/07/08 01:39:00 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

public class Hello {
    static void sayHello()
    {
        int time = 22;
        if (time < 10)
            System.out.println("Good Morning.");
        else if (time < 20)
            System.out.println("Good Day.");
        else
            System.out.println("Good Evening.");
    }
    public static void main(String[] args) {
        sayHello();
    }
}
