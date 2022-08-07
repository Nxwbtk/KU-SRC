import java.util.ArrayList;
import java.util.Collections;

public class ex05
{
	public static void main(String arg[])
	{
		ArrayList<String>	nameList = new ArrayList<String>();
		ArrayList<String>	nameListSorted = new ArrayList<String>();
		ArrayList<Integer>	popList = new ArrayList<Integer>();
		ArrayList<Integer>	popTemp = new ArrayList<Integer>();

		nameList.add("Thailand");
		popList.add(69800000);
		nameList.add("Chaina");
		popList.add(1402000000);
		nameList.add("Myanma");
		popList.add(54410000);
		nameList.add("Vietnam");
		popList.add(97340000);
		nameList.add("India");
		popList.add(1380000000);

		popTemp.addAll(popList);
		Collections.sort(popTemp);
		Collections.reverse(popTemp);
		for (int i = 0; i < popTemp.size(); i++)
		{
			for (int j = 0; j < popList.size(); j++)
			{
				if (popTemp.get(i) == popList.get(j))
				{
					nameListSorted.add(nameList.get(j));
				}
			}
		}
		System.out.println(nameListSorted);
	}
}