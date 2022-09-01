/* ******************************************************************************* */
 /*                                                                                 */
 /*                                                     :::     ::: :::     :::     */
 /*   TestNumber.java                                  :+:    :+:  :+:     +:+      */
 /*                                                   +:+   +:+   +:+     +:+       */
 /*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
 /*                                                 +#+ #+#     +#+     +#+         */
 /*   Created: 2022/09/01 15:49:40 by nxwbtk       #+#   #+#   +#+     +#+          */
 /*   Updated: 2022/09/01 15:49:43 by nxwbtk      ###     ###   ########.th         */
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
import java.util.Scanner;

public class TestNumber {

    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        System.out.print("Enter Number 1 : ");
        int nb1 = myObj.nextInt();
        System.out.print("Enter Number 2 : ");
        int nb2 = myObj.nextInt();
//        int res1 = Integer.parseInt(nb1);
//        int res2 = Integer.parseInt(nb2);
        System.out.println("Result is " + (nb1 + nb2));

//        int nbr;
//
//        nbr = 5;
//        nbr++;//number = number + 1
//        System.out.println(nbr);
    }
}
