Com posar a prova la pràctica:
Per generar  els 20 jocs de prova que siguin permutacions de un text:
Navegar a la carpeta test
Copiar dins del fitxer “lorem” el text a permutar.
Executar per shell “chmod 755 generador_JJPP.sh”
Executar per shell “./generador_JJPP.sh”
S’hauran generat 20 jocs de proves amb els noms “test&.txt” on &=[0..19]

Per a executar la pràctica sobre uns fitxers donats
Navegar a la carpeta execucuó
Escriure a el fitxer “comparables” el nom sencer de tots els fitxers que es volen comparar, per fer el Joc de Prova bàsic seria “test1.txt test2.txt  … test19.txt”. Aquests fitxers a comparar s’han de posar a la carpeta Pràctica
Executar per shell “chmod 755 open.sh”
Executar per shell “./open.sh” 
La taula resultant de les comparacions quedarà al fitxer “resultat”, en un format copiable a un excel. Nota: Els valors decimals excel els posa per defecte com a europeus, si mires el valor de les Jsim potser et dona >1. Això és un error de interpretació de excel, al fitxer resultat el valor surt correctament.
