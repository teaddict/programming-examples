
public class test {
public static void main(String[] args) {
	String x="JESSAJVEARTE";
	String y="JACKIAVILAKO";
	int M = x.length();
	int N=y.length();
	
	int[][] cozum=new int[M+1][N+1]; // Altkümelerin harfler için ne kadar kere ortak olduğunu tuttuğum matrisim
    // LCS uzunluğunun ve tüm alt problemlerin dinamik programlamayla hesaplandığı kısım
	for(int i=M-1; i>=0; i--) //Dizi elemanlarını tersten gelerek kontrol ediyorum
	{
		for(int j=N-1; j>=0; j--)
		{
			if(x.charAt(i)==y.charAt(j))
				cozum[i][j]=cozum[i+1][j+1]+1;
			// eşleşme varsa bu harfin olduğu fazladan bir alt küme daha olduğunu belirtmek için matris üzerinde 
			//bu harflerin bulunduğu konumdaki değeri 1 artırıyorum
			else
				cozum[i][j]=Math.max(cozum[i+1][j], cozum[i][j+1]);
			// Eşleşme yoksa, o ana kadarki en uzun altküme uzunluğunu en uzun altküme olarak alıyorum
			
		}//for
	}//for
	
	// cozum[][] matrisini kullanarak LCS nin bulunması
	int i=0, j=0;
	String result="";
	while(i<M &&j<N)
	{
		if(x.charAt(i)==y.charAt(j))
		{
		// i ve j değerlerine göre x, y stringleri üzerinde dolaşarak eşleşme olup olmadığını kontrol ediyorum
			result+=y.charAt(j);
			i++;
			j++;
		}//if
		else if(cozum[i+1][j]>=cozum[i][j+1])
		{
			//her zaman en uzun alt kümeye gidebilmek için bu kontrolleri yapıyorum
			i++;
		}
		else
			j++;
	}//while
	
	System.out.println("LCS lenght: "+result.length());
	System.out.println("LCS:	  : "+result);
}
}
