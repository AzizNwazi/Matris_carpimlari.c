#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

//****************************************************Matris çarpým
    int matris1[4][4],matris2[4][4],yeniMatris[4][4],i,j,k,toplam;
    srand(time(NULL));
    
    printf("1.Matris:\n\n");
    for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
    		matris1[i][j]=rand()%9;
    		printf("%d ",matris1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n2.Matris:\n\n");
    for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
    		matris2[i][j]=rand()%9;
    		printf("%d ",matris2[i][j]);
		}
		printf("\n");
	}
    
    printf("\nMatris carpimlari:\n\n");
    for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
                toplam=0;    		
    		for(k=0;k<4;k++){
    			toplam+=matris1[i][k]*matris2[k][j];
			}
    		yeniMatris[i][j]=toplam;
    		printf("%d ",yeniMatris[i][j]);
		}
		printf("\n");
	}
	return 0;
}
