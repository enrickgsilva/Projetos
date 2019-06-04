#include <stdio.h>

int main() {
   system("cscript slmgr.vbs /IPK W269N-WFGWX-YVC9B-4J6C9-T83GX");
                    /*chave de ativação do windows PRO*/
            /*para ativar outra versão é nescessário outra chave*/                  
   system("cscript slmgr.vbs /skms kms.lotro.cc");
   system("cscript slmgr.vbs /ato");

   sleep(10);
   system("pause");
    return 0;
}