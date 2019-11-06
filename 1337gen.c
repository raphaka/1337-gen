#include "1337gen.h"

//exit codes: 1 input file error; 2 output file error; 3 usage error;

//Globals
int bufsize = 20;
int mode = 0;		//modes: 1: No capitals except first letter 2: No capitals; 3: classic 1337; 4: no special characters;  
int modesave;
FILE *output;
FILE *input;
int max, min;		//filters word from input file by length




//prints all 1337 leetspeak combinations of a word to output file
//recursively substitute second param, then call with first param changed
void change(char * prefix, char *input){
	if(strlen(input)==0){
		fputs(prefix, output);
	}else{
		char *pre=malloc(bufsize);				//store new prefix

		char *subs=malloc(5);					//store substitutes for letter
		subs =	getsubstitutes(input[0]);			//get all substitutes for first letter of input;eg a -> aA4@
		
		int i;	
		for (i=0; i<strlen(subs); i++){				//loop subs array;
			snprintf(pre,bufsize, "%s%c",prefix,subs[i]);	//new prefix is old prefix plus next letter substitute		//iteration through all substitutes for current letter
			change(pre,input+sizeof(char));			//new input is old input but first letter skipped in memory 	//recursion to change all letters
		}	
	}
}




//reads words from input file & passes them to change function
int convert(char *inputFile, char *outputFile){
	
	input = fopen(inputFile, "r");
	output = fopen(outputFile, "a"); 
	if(input == NULL){
		fprintf(stderr, "Can't open input file!\n");
	exit(1);}
	if(output == NULL){
		fprintf(stderr, "Can't open output file!\n");
	exit(1);}	


	char *word=calloc(bufsize, sizeof(char));
	while(fgets(word,bufsize,input)){
		int len = strlen(word);
		if(len-1<=max && len-1>=min){		//+1 because of \n
			for (int i=0; word[i]; i++){			//convert word to lower case
				word[i] = tolower(word[i]);
			}

			/*
			 * if(word[len-1] != '\n'){
			 * 	word[len] = '\n';word[len+1]='\0';
			 * }
			 */

			mode = modesave;					//reset mode to beginning mode (modes 1 and 7 are changed within procedure)
			change("", word);
		}
	}


	if(fclose(input)){exit(2);}
	if(fclose(output)){exit(2);}

	return 0;
}



void usage(){
	printf("1337\n\n"
		"leetspeak wordlist generator\n\n"
		"SYNOPSIS: "
	        "[-n minimum word length] "
		"[-x maximum word length] "
		"[-m mode] "
		"<input wordlist> "
		"<output wordlist>\n\n"
		"DESCRIPTION: "
		"appends every possible 1337 leetspeak combination "
	        "of the words from the input file to the output file.\n\n"	
		"modes:\n1: no capitals except first letters"
		"\n2: no capital letters"
		"\n3: simple conversion to most typical 1337 equivalent"
		"\n4: no special characters"
		"\n5: experimental: with added special characters"
		"\n6: no capitals and no special characters"
		"\n7: no capitals except first letters and no special characters"
	);
	exit(3);
}



int main(int argc, char **argv){
	
	max = bufsize;
	min = 1;

	int c;
	while ((c = getopt (argc, argv, "n:x:m:b:")) != -1)
     	switch (c)  {
		case 'b':
			bufsize = atoi(optarg);
			max=bufsize;
        		break;
		case 'n':
			min = atoi(optarg);
			break;
		case 'x':
			max = atoi(optarg);
			break;
          	case 'm':
			mode = atoi(optarg);
	  		break;
		default: usage();
	}
	
//	printf("%d", argc);
//	if(argc!=2){usage();}

	char *inputFile=argv[optind++];
        char *outputFile=argv[optind++];

	modesave=mode;								//save beginning mode
	convert(inputFile, outputFile);

	//change("", argv[optind++]);	
			
	return 0;
}
