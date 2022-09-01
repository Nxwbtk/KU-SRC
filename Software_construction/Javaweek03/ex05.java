import java.util.ArrayList;
import java.util.Collections;

public class ex05
{
	public static void main(String arg[])
	{
		ArrayList<String>	sort_name = new ArrayList<String>();
		ArrayList<Integer>	people = new ArrayList<Integer>();

		people.add(69800000);
		people.add(1402000000);
		people.add(54410000);
		people.add(97340000);
		people.add(1380000000);
		
		Collections.sort(people);
		Collections.reverse(people);
		for (Integer i : people)
		{
			if (i == 69800000)
				sort_name.add("Thailand");
			else if (i == 1402000000)
				sort_name.add("China");
			else if (i == 54410000)
				sort_name.add("Myanma");
			else if (i == 97340000)
				sort_name.add("Vietnam");
			else if (i == 1380000000)
				sort_name.add("India");
		}
		System.out.println(sort_name);
	}
}