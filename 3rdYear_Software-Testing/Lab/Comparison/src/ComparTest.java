import static org.junit.Assert.*;

import org.junit.Test;

public class ComparTest {
	@Test
	public void compare_test() {
		Comparison comp = new Comparison(5);
		assertEquals(1, comp.compare(6), 0);
		assertEquals(-1, comp.compare(4), 0);
		assertEquals(0, comp.compare(5), 0);
	}
	
//	@Test
//	public void compare_less_test() {
//		Comparison comp = new Comparison(5);
//		assertEquals(-1, comp.compare(4), 0);
//	}
//	@Test
//	public void compare_eq_test() {
//		Comparison comp = new Comparison(5);
//		assertEquals(0, comp.compare(5), 0);
//	}
}
