public class Main{
	public static void main(String[] args){
		Weather weather = new Weather();
		String temperature = weather.todaysTemperature();
		assert temperature.equals("23 C");
		assert temperature.equals("25 C");	// This should be wrong
	}
}
