#include <stdio.h>

int main(){
	
	int mTorre, mBispo = 1, mRainha = 1;/*variaveis referente a movimentação das peças torre, bispo, rainha
										  o nome mPeça: m = movimento ou movimentação seguido da peça a ser movida*/
	
	//Movimento da torre
	for(mTorre = 1; mTorre <= 5; mTorre++){
		
		printf("Direita\n", mTorre);
	
	}
	
	//Movimento do bispo
	while (mBispo <= 5){
		
		printf("Cima, Direita\n", mBispo);
		
		mBispo++;
	}
	
	//movimento da rainha
	do{
		
		printf("Esquerda\n", mRainha);
		
		mRainha++;
		
	}while(mRainha <= 8);
	
	return 0;
}