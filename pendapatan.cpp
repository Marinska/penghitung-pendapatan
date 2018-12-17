#include <stdio.h>
int main()
{
	int input,output,hasil;
	printf("Masukan pendapatan anda : ");
	scanf("%d",&input);
	printf("Masukan pengeluaran anda : ");
	scanf("%d",&output);
	hasil=input-output;
	if(hasil<0)
	{
		printf("Mohon maaf, pengeluaran anda lebih besar dibandingkan dengan pemasukan anda \nPendapatan anda senilai Rp.%d",hasil);
	
	}else{
		printf("Pendapatan anda sebesar Rp.%d",hasil);
	}
}
