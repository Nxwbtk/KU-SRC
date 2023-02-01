import java.util.ArrayList;
import java.util.Collections;

public class country {
    public static void main(String[] args) {
		ArrayList<Integer> myCountry = new ArrayList<Integer>();
        int	myanMar = 54;
		int	chiNa = 1400;
		int	thaiLand = 69;
		int	inDia = 1380;
		int	gerMany = 83;
		int	french = 67;
		int	engLish = 55;
		int	russia = 144;
		int	japan = 125;
	
		myCountry.add(myanMar);
		myCountry.add(chiNa);
		myCountry.add(thaiLand);
		myCountry.add(inDia);
		myCountry.add(gerMany);
		myCountry.add(french);
		myCountry.add(engLish);
		myCountry.add(russia);
		myCountry.add(japan);
		Collections.sort(myCountry);
		Collections.reverse(myCountry);
	
		for (int i : myCountry)
		{
			System.out.println(i);
		}
    }
}