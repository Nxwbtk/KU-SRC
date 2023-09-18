import org.junit.Test;
import static org.junit.Assert.*;

public class CalculatorTest {
	@Test
	public void add_test() {
		Calculator calculator = new Calculator();
		int	expected = 3;
		assertEquals(expected, calculator.add(1, 2), 0);
	}
	
	@Test
	public void add_test2() {
		Calculator calculator = new Calculator();
		assertEquals(7.5, calculator.add(2.5, 5.01), 1);
	}
	
	@Test
	public void minus_test() {
		Calculator cal = new Calculator();
		assertEquals(0, cal.sub(1, 1), 0);
	}
	
//	@Test
//	public void multiple_test() {
//		Calculator cal = new Calculator();
//		assertEquals(10, cal.multiple(2, 5), 0);
//	}
}
