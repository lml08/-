//该题注意得记住要回到哪。
import java.util.Scanner;

public class OJ1234 {
	private int n;
	private int[] A;
	private boolean[] Mark;
	public OJ1234(){
		Scanner sc = new Scanner(System.in);
		n=sc.nextInt();
		A=new int[n+n];
		Mark=new boolean[n+n];
		for(int i=0;i<n+n;i++){
			A[i]=0; 
			 Mark[i]=true;
		}
		digui(0);
	}   
	private void digui(int x){//x表示到第几位
		if(x==n+n){
			for(int i=0;i<n+n;i++) 
				System.out.print(A[i]);
			System.out.println();
			return;//这里因为漏了return卡了好久
		}
		if(A[x]!=0) {
			digui(x+1); return;
		}
		for(int i=1;i<=n;i++){
			if(Mark[i] && x+i+1<n+n ){
				if(A[x+i+1]==0){
					Mark[i]=false; A[x+i+1]=i;A[x]=i;
					digui(x+1);
					Mark[i]=true; A[x+i+1]=0; A[x]=0;
				}
				
			}
		}
	}
	public static void main(String []args){
		OJ1234 ob = new OJ1234();
	}
}
