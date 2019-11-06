#include "1337gen.h"

char *getsubstitutes(char letter){
	
	char *str;
	str=malloc(sizeof(char));
	str[0]=letter;

	switch(mode){
		
		//no capitals except first letters
		case 1:	mode=2; switch (letter){	//switch to no capitals mode beginning with letter 2
			case 'a': return "aA4@"; break;
			case 'b': return "bB8"; break;			  
			case 'c': return "cC(<"; break;
			case 'd': return "dD"; break;
			case 'e': return "eE3"; break;
			case 'f': return "fF"; break;
			case 'g': return "gG6"; break;
			case 'h': return "hH4#"; break;
			case 'i': return "iI1!|"; break;
			case 'j': return "jJ)"; break;
			case 'k': return "kK{"; break;
			case 'l': return "lL(|"; break;		
			case 'm': return "mM"; break;		
			case 'n': return "nN"; break;			  
			case 'o': return "oO0"; break;
			case 'p': return "pP"; break;		
			case 'q': return "qQ9"; break;		
			case 'r': return "rR"; break;		
			case 's': return "sS5$"; break;		
			case 't': return "tT7+"; break;		
			case 'u': return "uU"; break;		
			case 'v': return "vV"; break;		
			case 'w': return "wW"; break;		
			case 'x': return "xX"; break;		
			case 'y': return "yY"; break;		
			case 'z': return "zZ2"; break;
			default: return str; break;				 
		}break;
	


		//no capitals
		case 2: switch (letter){
			case 'a': return "a4@"; break;
			case 'b': return "b8"; break;			  
			case 'c': return "c(<"; break;
			case 'd': return "d"; break;
			case 'e': return "e3"; break;
			case 'f': return "f"; break;
			case 'g': return "g6"; break;
			case 'h': return "h4#"; break;
			case 'i': return "i1!|"; break;
			case 'j': return "j)"; break;
			case 'k': return "k{"; break;
			case 'l': return "l(|"; break;		
			case 'm': return "m"; break;		
			case 'n': return "n"; break;			  
			case 'o': return "o0"; break;
			case 'p': return "p"; break;		
			case 'q': return "q9"; break;		
			case 'r': return "r"; break;		
			case 's': return "s5$"; break;		
			case 't': return "t7+"; break;		
			case 'u': return "u"; break;		
			case 'v': return "v"; break;		
			case 'w': return "w"; break;		
			case 'x': return "x"; break;		
			case 'y': return "y"; break;		
			case 'z': return "z2"; break;
			default:  return str; break;
		}break;



		//classic - most typical option per letter 
		case 3: switch (letter){
			case 'a': return "4"; break;
			case 'b': return "8"; break;			  
			case 'c': return "c"; break;
			case 'd': return "d"; break;
			case 'e': return "3"; break;
			case 'f': return "f"; break;
			case 'g': return "6"; break;
			case 'h': return "h"; break;
			case 'i': return "1"; break;
			case 'j': return "j"; break;
			case 'k': return "k"; break;
			case 'l': return "l"; break;		
			case 'm': return "m"; break;		
			case 'n': return "n"; break;			  
			case 'o': return "0"; break;
			case 'p': return "p"; break;		
			case 'q': return "9"; break;		
			case 'r': return "r"; break;		
			case 's': return "5"; break;		
			case 't': return "7"; break;		
			case 'u': return "u"; break;		
			case 'v': return "v"; break;		
			case 'w': return "w"; break;		
			case 'x': return "x"; break;		
			case 'y': return "y"; break;		
			case 'z': return "2"; break;
			default: return str; break;
		}break;



		//no special characters		
		case 4: switch (letter){
			case 'a': return "aA4"; break;
			case 'b': return "bB8"; break;			  
			case 'c': return "cC"; break;
			case 'd': return "dD"; break;
			case 'e': return "eE3"; break;
			case 'f': return "fF"; break;
			case 'g': return "gG6"; break;
			case 'h': return "hH4"; break;
			case 'i': return "iI1"; break;
			case 'j': return "jJ"; break;
			case 'k': return "kK"; break;
			case 'l': return "lL"; break;		
			case 'm': return "mM"; break;		
			case 'n': return "nN"; break;			  
			case 'o': return "oO0"; break;
			case 'p': return "pP"; break;		
			case 'q': return "qQ9"; break;		
			case 'r': return "rR"; break;		
			case 's': return "sS5"; break;		
			case 't': return "tT7"; break;		
			case 'u': return "uU"; break;		
			case 'v': return "vV"; break;		
			case 'w': return "wW"; break;		
			case 'x': return "xX"; break;		
			case 'y': return "yY"; break;		
			case 'z': return "zZ2"; break;
			default: return str; break;
		}break;


		//hardcore !!!UTF8?
		case 5: switch (letter){
			case 'a': return "aA4@"; break;
			case 'b': return "bB8"; break;			  
			case 'c': return "cC(<"; break;
			case 'd': return "dD"; break;
			case 'e': return "eE3€"; break;
			case 'f': return "fF"; break;
			case 'g': return "gG6"; break;
			case 'h': return "hH4#"; break;
			case 'i': return "iI1!|"; break;
			case 'j': return "jJ)"; break;
			case 'k': return "kK{"; break;
			case 'l': return "lL(|"; break;		
			case 'm': return "mM"; break;		
			case 'n': return "nN"; break;			  
			case 'o': return "oO0"; break;
			case 'p': return "pP"; break;		
			case 'q': return "qQ9"; break;		
			case 'r': return "rR"; break;		
			case 's': return "sS5$§"; break;		
			case 't': return "tT7+"; break;		
			case 'u': return "uU"; break;		
			case 'v': return "vV"; break;		
			case 'w': return "wW"; break;		
			case 'x': return "xX"; break;		
			case 'y': return "yY¥"; break;		
			case 'z': return "zZ2"; break;
			default: return str; break;
		}break;
	
		
		
		//no capitals letters + no special charrcters
		case 6: switch (letter){				//switch to no capitals mode beginning with letter 2
			case 'a': return "a4"; break;
			case 'b': return "b8"; break;			  
			case 'c': return "c"; break;
			case 'd': return "d"; break;
			case 'e': return "e3"; break;
			case 'f': return "f"; break;
			case 'g': return "g6"; break;
			case 'h': return "h4"; break;
			case 'i': return "i1"; break;
			case 'j': return "j"; break;
			case 'k': return "k"; break;
			case 'l': return "l"; break;		
			case 'm': return "m"; break;		
			case 'n': return "n"; break;			  
			case 'o': return "o0"; break;
			case 'p': return "p"; break;		
			case 'q': return "q9"; break;		
			case 'r': return "r"; break;		
			case 's': return "s5"; break;		
			case 't': return "t7"; break;		
			case 'u': return "u"; break;		
			case 'v': return "v"; break;		
			case 'w': return "w"; break;		
			case 'x': return "x"; break;		
			case 'y': return "y"; break;		
			case 'z': return "z2"; break;
			default: return str; break;				 
		}break;
	
			
			
		//no capitals except first letters + no special characters
		case 7:	mode=6; switch (letter){			//switch to no capitals mode beginning with letter 2
			case 'a': return "aA4"; break;
			case 'b': return "bB8"; break;			  
			case 'c': return "cC"; break;
			case 'd': return "dD"; break;
			case 'e': return "eE3"; break;
			case 'f': return "fF"; break;
			case 'g': return "gG6"; break;
			case 'h': return "hH4"; break;
			case 'i': return "iI1"; break;
			case 'j': return "jJ"; break;
			case 'k': return "kK"; break;
			case 'l': return "lL"; break;		
			case 'm': return "mM"; break;		
			case 'n': return "nN"; break;			  
			case 'o': return "oO0"; break;
			case 'p': return "pP"; break;		
			case 'q': return "qQ9"; break;		
			case 'r': return "rR"; break;		
			case 's': return "sS5"; break;		
			case 't': return "tT7"; break;		
			case 'u': return "uU"; break;		
			case 'v': return "vV"; break;		
			case 'w': return "wW"; break;		
			case 'x': return "xX"; break;		
			case 'y': return "yY"; break;		
			case 'z': return "zZ2"; break;
			default: return str; break;				 
		}break;
	


		//default
		default: switch (letter){
			case 'a': return "aA4@"; break;
			case 'b': return "bB8"; break;			  
			case 'c': return "cC(<"; break;
			case 'd': return "dD"; break;
			case 'e': return "eE3"; break;
			case 'f': return "fF"; break;
			case 'g': return "gG6"; break;
			case 'h': return "hH4#"; break;
			case 'i': return "iI1!|"; break;
			case 'j': return "jJ)"; break;
			case 'k': return "kK{"; break;
			case 'l': return "lL(|"; break;		
			case 'm': return "mM"; break;		
			case 'n': return "nN"; break;			  
			case 'o': return "oO0"; break;
			case 'p': return "pP"; break;		
			case 'q': return "qQ9"; break;		
			case 'r': return "rR"; break;		
			case 's': return "sS5$"; break;		
			case 't': return "tT7+"; break;		
			case 'u': return "uU"; break;		
			case 'v': return "vV"; break;		
			case 'w': return "wW"; break;		
			case 'x': return "xX"; break;		
			case 'y': return "yY"; break;		
			case 'z': return "zZ2"; break;
			default: return str; break;
		}break;
	
	}
}


