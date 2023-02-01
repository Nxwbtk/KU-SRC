
import java.util.Scanner;
import java.util.Arrays;

/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   TestArray.java                                   :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/09/01 16:55:03 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/09/01 16:55:04 by nxwbtk      ###     ###   ########.th         */
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
public class TestArray {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        int[] array1 = new int[5];
        int i = 0;
        while (i < array1.length)
        {
            System.out.printf("Enter element %d : ", i + 1);
            array1[i] = myObj.nextInt();
            i++;
        }
        while (i > 0)
        {
            System.out.printf("Element %d = %d\n", i, array1[i - 1]);
            i--;
        }
        System.out.println(Arrays.toString(array1));
    }
}
