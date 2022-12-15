public interface Forecast{
	public String temperature();
	final class Fake implements Forecast {
		@Override
		public String temperature(){
			return new String("23 C");
		}
	}
}
