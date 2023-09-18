import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class Main {
    @Test
    public void test_unit() {
        String str = "test";
        assertEquals("test", str);
        assertEquals("fail", str);
    }
}