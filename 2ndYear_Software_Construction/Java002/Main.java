/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   Main.java                                        :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/09/06 14:24:45 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/09/06 14:24:47 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

import myPack.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        try{
            System.out.printf("Enter base : ");
            int base = myObj.nextInt();
            System.out.printf("Enter height : ");
            int height = myObj.nextInt();
            System.out.printf("Triangle area = %d\n", Triangle.area(base, height));
        }catch(Exception e){
            System.out.println("Error: " + e);
        }
    }
}
