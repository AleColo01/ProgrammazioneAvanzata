
public class Menu implements Visitor<String>{
	
	public String nomeBar;
	
	private Menu() {
		nomeBar = "Ale";
	}
	
	public static Menu menucompleto = null;
	
	public static Menu menucompleto() {
		if (menucompleto == null) menucompleto = new Menu();
		return menucompleto;
	}

	public String visit(Prodotto prod) {
		return prod.toString();
	}

	public String visit(Panino prod) {
		String nome = "{ ";
		for(int k=0; k<prod.ingredienti.size(); k++) {
			nome = nome +"[ "+ prod.ingredienti.get(k).toString() + " ]";
		}
		nome = nome +"}";
		return prod.toString() + " " + nome;
	}



}
