/* ******************************************************************************* */
 /*                                                                                 */
 /*                                                     :::     ::: :::     :::     */
 /*   TestArg.java                                     :+:    :+:  :+:     +:+      */
 /*                                                   +:+   +:+   +:+     +:+       */
 /*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
 /*                                                 +#+ #+#     +#+     +#+         */
 /*   Created: 2022/09/01 17:22:17 by nxwbtk       #+#   #+#   +#+     +#+          */
 /*   Updated: 2022/09/01 17:22:18 by nxwbtk      ###     ###   ########.th         */
 /*                                                                                 */
 /* ******************************************************************************* */

 /*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author buntakansirikamonthip
 */
public class TestArg {

    public static void main(String[] args) {
        try {
            String name = args[1];
            System.out.println(name);
        } catch (Exception e) {
            System.out.println("Index out of Bounds");
        }
    }
}
