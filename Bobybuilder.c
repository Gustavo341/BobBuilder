#include <stdio.h>
#include <stdlib.h>

#define PROGRAMA 100
#define PROCEDIMENTO 101
#define FIMPROCEDIMENTO 102
#define INTEIRO 103
#define BOOLEANO 104
#define SE 105
#define ENTAO 106
#define SENAO 107
#define FIMSE 108
#define ESCREVA 109
#define VERDADEIRO 110
#define FALSO 111
#define ENQUANTO 112
#define FACA 113
#define FIMENQUANTO 115
#define FIMPROGRAMA 115
#define ERROR 000

int scanner(char cod[], int *pos){
	q0: 
		if(cod[*pos] == 'p'){
			printf("\n %c", cod[*pos] );
			goto q1;
		}else if(cod[*pos] == 's'){
			printf("\n %c", cod[*pos] );
			goto q10;
		}else if(cod[*pos] == 'b'){
			printf("\n %c", cod[*pos] );
			goto q27;
		}else if(cod[*pos] == 'e'){
			printf("\n %c", cod[*pos] );
			goto q36;
		}else if(cod[*pos] == 'f'){
			printf("\n %c", cod[*pos] );
			goto q56;
		}


	q1: (*pos)++;
	
		if(cod[*pos] == 'r'){
			printf("\n %c", cod[*pos] );
			goto q2;
		}
  	q2: (*pos)++;
  	
		if(cod[*pos] == 'o'){
			printf("\n %c", cod[*pos] );
			goto q3;
		}
  	q3: (*pos)++;
  	
		if(cod[*pos] == 'g'){
			printf("\n %c", cod[*pos] );
			goto q4;
		}else if(cod[*pos] == 'c'){
			printf("\n %c", cod[*pos] );
			goto q17;
		}
  	q4: (*pos)++;
  	
		if(cod[*pos] == 'r'){
			printf("\n %c", cod[*pos] );
			goto q5;
		}
  	q5: (*pos)++;
  	
		if(cod[*pos] == 'a'){
			printf("\n %c", cod[*pos] );
			goto q6;
		}
  	q6: (*pos)++;
  	
		if(cod[*pos] == 'm'){
			printf("\n %c", cod[*pos] );
			goto q7;
		}
  	q7: (*pos)++;
  	
		if(cod[*pos] == 'a'){
			printf("\n %c", cod[*pos] );
			goto q8;
		}
  	q8: (*pos)++;
  	
		if(cod[*pos] == ' '){
			printf("\n %c", cod[*pos] );
			goto q9;
		}
  	q9: (*pos)++;
  	 return PROGRAMA;

  	q10: (*pos)++;
  	
  	 	if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q11;
  	 	}
  	q11: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q12;
  	 	}else if(cod[*pos] == 'n'){
			printf("\n %c", cod[*pos] );
			goto q13;
		}
  	 q12: (*pos)++;
  	  return SE;

  	 q13: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q14;
  	 	}

  	 q14: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q15;
  	 	}

  	 q15: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q16;
  	 	}

  	 q16: (*pos)++;
  	 	return SENAO;	

  	 q17: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q18;
  	 	}
  	 q18: (*pos)++;
  	 if (cod[*pos] == 'd'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q19;
  	 	}
  	 q19: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q20;
  	 	}
  	 q20: (*pos)++;
  	 if (cod[*pos] == 'm'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q21;
  	 	}
  	 q21: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q22;
  	 	}
  	 q22: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q23;
  	 	}
  	 q23: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q24;
  	 	}
  	 q24: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q25;
  	 	}
  	 q25: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q26;
  	 	}
  	 q26: (*pos)++;
  	 return PROCEDIMENTO;

  	 q27: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q28;
  	 	}
  	 q28: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q29;
  	 	}
  	q29: (*pos)++;
  	 if (cod[*pos] == 'l'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q30;
  	 	}
  	q30: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q31;
  	 	}

  	q31:(*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q32;
  	 	}

  	q32:(*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q33;
  	 	}
  	q33:(*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q34;
  	 	}
  	 q34:(*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q35;
  	 	}
  	 q35:(*pos)++;
  	 return BOOLEANO;

  	 q36: (*pos)++;
  	 if (cod[*pos] == 's'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q37;
  	 	}else if(cod[*pos] == 'n'){
			printf("\n %c", cod[*pos] );
			goto q44;
		}
  	 q37: (*pos)++;
  	 if (cod[*pos] == 'c'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q38;
  	 	}
  	 q38: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q39;
  	 	}
  	 q39: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q40;
  	 	}

  	 q40: (*pos)++;
  	 if (cod[*pos] == 'v'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q41;
  	 	}
  	 q41: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q42;
  	 	}
  	 q42: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q43;
  	 	}
  	 q43: (*pos)++;
 		return ESCREVA;

  	 q44: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q45;
  	 	}else if(cod[*pos] == 'q'){
			printf("\n %c", cod[*pos] );
			goto q49;
		}

  	 q45: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q46;
  	 	}

  	 q46: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q47;
  	 	}

  	 q47: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q48;
  	 	}

  	 q48: (*pos)++;
 		return ENTAO;

  	 q49: (*pos)++;
  	 if (cod[*pos] == 'u'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q50;
  	 	}

  	 q50: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q51;
  	 	}

  	 q51: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q52;
  	 	}

  	 q52: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q53;
  	 	}

  	 q53: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q54;
  	 	}

  	 q54: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q55;
  	 	}

  	 q55: (*pos)++;
	  	 return ENQUANTO;

  	 q56: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q57;
  	 	}

  	 q57: (*pos)++;
  	 if (cod[*pos] == 'c'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q58;
  	 	}

  	 q58: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q59;
  	 	}

  	 q59: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q60;
  	 	}

  	 q60: (*pos)++;
  	 	return FACA;










}

int main(){
	int p = 0;
	char codigo[] = {"enquanto "};

	

  int x = scanner(codigo,&p) ;
	printf("\n codigo = %d",x);
}



