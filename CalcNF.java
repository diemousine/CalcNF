import java.util.Scanner;
public class CalcNF {

	public static void main(String[] args) {
		Scanner meuScanner = new Scanner(System.in);
		float mediaAtual;
		double mediaFinal;
		System.out.println("Digite o valor da sua média atual");
		mediaAtual = meuScanner.nextFloat();
		if(mediaAtual>=7){
			System.out.println("Você não precisa fazer a prova final."); 
			} else {
				mediaFinal = ((1-((mediaAtual*0.7)/5))*5)/0.3;
				if(mediaFinal>10){
					System.out.println("Não tem santo no mundo que faça você passar.");
				} else {
						System.out.println("Você precisa tirar "+mediaFinal+" para passar.");
			}
		}
	}
}