import static org.junit.Assert.*;

import org.junit.jupiter.api.Test;

public class BasicJUnit {
	@Test
	public void test_unit() {
		String str = "Test";
		int	a = 1;
//		assertEquals("Tet", str);
		assertEquals(1, a);
	}
}
