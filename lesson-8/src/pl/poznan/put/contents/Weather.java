public class Weather{
	final private Forecast forecast = new Forecast.Fake();
	
	public String todaysTemperature(){
		return forecast.temperature();
	}
}
