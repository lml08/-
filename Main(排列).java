//��ͨ�ݹ鲻�� ʱ�临�Ӷ�̫��   O(n!)
import java.util.Scanner;

public class Main {
	static int sum = 0;
	static int n ;
	static String line;
	static char[] str;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner reader = new Scanner(System.in);
		n = Integer.parseInt(reader.nextLine());
		line = reader.nextLine();
		str = line.toCharArray();
		pailie(0);
		System.out.println(sum);
	}
	static void pailie(int x){//x��Ҫ�滻���ǵڼ���
		if(x==str.length-1){
			sum+=1;
		}
		for(int i=x;i<str.length;i++){
			if(i>x && str[i] == str[i-1]){
				continue;
			}
			if(i!=x && str[i]==str[x]) continue;
			char temp = str[x];
			str[x] = str[i];
			str[i] = temp;
			pailie(x+1);
			str[i] = str[x];
			str[x] = temp;
			
		}
	}
}
