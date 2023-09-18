
public class Comparison {
	private final int SECRET;
	public Comparison(int number) {
		SECRET = number;  
	}
	public int compare(int guess) {
		int status = 0;
		if(guess > SECRET)
			status = 1;
		else if(guess < SECRET)
			status = -1;
		else if (guess == SECRET) {
			status = 0;
		}
		return status;
	}  
}
