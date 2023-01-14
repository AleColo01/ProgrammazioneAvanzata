
public class Birra extends Prodotto {
	
	public Birra() {
		this.tipologia = type.BEVANDA;
		this.costo = getCosto();
	}

	@Override
	public double getCosto() {
		return 4.00;
	}
	
	@Override
	public String toString() {
		return "{ Birra --> " + costo + " $ }";
	}

}
