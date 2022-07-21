/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   product.java                                     :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/07/21 16:25:47 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/07/21 16:25:49 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

class GI {
    public void prod()
    {
        System.out.println("The GI product");
    }
}
class RaYong extends GI{
    public void prod() {
        System.out.println("Rayong : Rayong Golden Pineapple");
    }
}
class ChiangRai extends GI{
    public void prod() {
        System.out.println("Chiang Rai : Tea Chaing Rai");
    }
}
class BigMountain extends GI{
    public void prod() {
        System.out.println("Big Mountain : Wine Big Mountain");
    }
}
class Puket extends GI{
    public void prod() {
        System.out.println("Phuket : Pearl Phuket");
    }
}
class RaNong extends GI{
    public void prod() {
        System.out.println("Ra Nong : Durainnai ra nong");
    }
}
class Payao extends GI{
    public void prod() {
        System.out.println("Phayao : Lychee maejai phayao");
    }
}
class SuPhan extends GI{
    public void prod() {
        System.out.println("Suphan Buri : truffle suphan");
    }
}
class Nan extends GI{
    public void prod() {
        System.out.println("Nan : Golden orange Nan");
    }
}
class Trat extends GI{
    public void prod() {
        System.out.println("Trat : Golden pineapple trat");
    }
}
class Trang extends GI{
    public void prod() {
        System.out.println("Trang : Muyang mueang trang");
    }
}
public class product {
    public static void main(String[] args) {
        GI myGI = new GI();
        GI myRayong = new RaYong();
        GI myChiangrai = new ChiangRai();
        GI myBigMountain = new BigMountain();
        GI myPhuket = new Puket();
        GI myRanong = new RaNong();
        GI myPayao = new Payao();
        GI mySuphan = new SuPhan();
        GI myNan = new Nan();
        GI myTrat = new Trat();
        GI myTrang = new Trang();
        myGI.prod();
        myRayong.prod();
        myChiangrai.prod();
        myBigMountain.prod();
        myPhuket.prod();
        myRanong.prod();
        myPayao.prod();
        mySuphan.prod();
        myNan.prod();
        myTrat.prod();
        myTrang.prod();
    }
}
