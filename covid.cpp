#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <windows.h>
#include <unistd.h>

using namespace std;
	
HWND consoleWindow = GetConsoleWindow();
string html;
string email;

int checkWidowsVersion()
{
	SetWindowPos( consoleWindow, 0, 50, 50, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
	system("mode con:cols=50 lines=5");
	printf("Verificando requisitos do sistema operacional!\n\nAguarde...");
	system("systeminfo | findstr /B /C:\"Nome do sistema operacional\" /C:\"Name\" > winver.dat");
	string text;
	ifstream windowsVersion("winver.dat");
	getline(windowsVersion, text);
	
    int n = text.length(); 
    char char_array[n + 1]; 
    strcpy(char_array, text.c_str());
						
    
    for (int i = 0; i < n; i++)
    {
    	if(char_array[i-9] == 'W' && char_array[i-8] == 'i' && char_array[i-7] == 'n' && char_array[i-6] == 'd' && char_array[i-5] == 'o' && char_array[i-4] == 'w' && char_array[i-3] == 's' && char_array[i-2] == ' ' && char_array[i-1] == '1' && char_array[i] == '0')
    	{
    		{
    			return 1;
  		system("del winver.dat");
			}
		}
	}
	
	return 0;
}

void configIexploreToCurl()
{
	system("start /min \"\" iexplore");
	system("cls");
}

void killConfiguredIexplorer()
{
	system("taskkill /IM iexplore.exe");
}

void Logo()
{
	system("mode con:cols=97 lines=55");
	SetWindowPos( consoleWindow, 0, 300, 0, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
	configIexploreToCurl();
	int logotipe;
	for(logotipe=0;logotipe<=40;logotipe++)
	{
		if(logotipe%2==0)
			{
			printf("\n\n                                          ++++++++++++                                          \n");
			printf("                                 ++++NNNNNMMMMMMMMMMMMNNNNN++++                                 \n");
			printf("                             ++NNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNN++                             \n");
			printf("                         //NNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNN/                         \n");
			printf("                      /mmMMMMMMMMMMMMMyyyy............yyyyMMMMMMMMMMMMMmm/                      \n");
			printf("                    /mMMMMMMMMMMyyy...                    ....yyMMMMMMMMMMm//                   \n");
			printf("                 /mmMMMMMMMMyy..           //////////           ..yyMMMMMMMMMm/                 \n");
			printf("               :dMMMMMMMMh--       ::::ddddMMMMMMMMMMdddd::::       --hMMMMMMMMd:               \n");
			printf("              dMMMMMMMMh-      ::ddMMMMMMMMMMMMMMMMMMMMMMMMMMdd::      -hMMMMMMMMd:             \n");
			printf("            :dMMMMMMh--     ::dMMMMMMMMMMMMhhhhhhhhhhMMMMMMMMMMMMdd:     --hMMMMMMM:            \n");
			printf("          :dMMMMMMM-      :dMMMMMMMMMhhh---          ----hhMMMMMMMMMd:      -MMMMMMMd:          \n");
			printf("         -MMMMMMMd:    -hhMMMMMMMdd::                      ::ddMMMMMMMhh-    :dMMMMMMM-         \n");
			printf("        hMMMMMMd:     -MMMMMMMMd:       ----hhhhhhhh----       :dMMMMMMMM-     :dMMMMMMh        \n");
			printf("       -MMMMMMd     -hMMMMMMMd:     --hhMMMMMMMMMMMMMMMMhh--     ::dMMMMMMh-     dMMMMMM-       \n");
			printf("      .MMMMMMm     .MMMMMMMm/     .yMMMMMMMMMMMMMMMMMMMMMMMMy.      mMMMMMMMy     mMMMMMM.      \n");
			printf("     .MMMMMMm     yMMMMMMm/     yyMMMMMMMMMMMMMMMMMMMMMMMMMMMMyy     /mMMMMMMy     mMMMMMM.     \n");
			printf("     MMMMMMm     yMMMMMMm     .yMMMMMMMMMMmmm///////mmmMMMMMMMMMy.     mMMMMMMy     mMMMMMM     \n");
			printf("    .MMMMMM     yMMMMMMm     yMMMMMMMMMmm/             //mMMMMMMMMy     mMMMMMMy     MMMMMMy    \n");
			printf("    MMMMMMN    `MMMMMMM     sMMMMMMMMN+       `````       +NMMMMMMMs     NMMMMMM`    +MMMMMM    \n");
			printf("    MMMMMM     MMMMMMM+    sMMMMMMMMN     ``ssMMMMMss``     +MMMMMMMs     MMMMMMM     MMMMMM`   \n");
			printf("   sMMMMMN    `MMMMMMN     MMMMMMMM+     sM___________Ms`    +MMMMMMM`    NMMMMMM`    +MMMMMM   \n");
			printf("   MMMMMM     MMMMMMM     sMMMMMMMM     sM|   ________|Ms     MMMMMMMM     MMMMMMM     MMMMMM   \n");
			printf("   MMMMMM     MMMMMMM     MMMMMMMM     oMM|  |         MMo     MMMMMMM     MMMMMMM     MMMMMM   \n");
			printf("   MMMMMM     MMMMMMM     MMMMMMMM     MMM|  |         MMM     MMMMMMM     MMMMMMM     MMMMMM   \n");
			printf("   MMMMMM     MMMMMMM     MMMMMMMM     MMM|  |         MMM     MMMMMMM     MMMMMMM     MMMMMM   \n");
			printf("   MMMMMM     MMMMMMM     sMMMMMMM+     MM|  |________ MM     +MMMMMMM     MMMMMMM     MMMMMM   \n");
			printf("   sMMMMM+    sMMMMMMN     MMMMMMMM     `M|___________|Ms     MMMMMMM`    NMMMMMMs    +MMMMMM   \n");
			printf("    MMMMMM     MMMMMMM     sMMMMMMMN     `sMMMMMMMMMMMs`     NMMMMMMs     MMMMMMM     MMMMMM`   \n");
			printf("    MMMMMM     sMMMMMMN     sMMMMMMMN+     ```MMMMM```     +NMMMMMMs     NMMMMMMs     MMMMMM    \n");
			printf("    .MMMMMm     MMMMMMMm     yMMMMMMMMm/                 /mMMMMMMMy     mMMMMMMM     mMMMMMy    \n");
			printf("     MMMMMM/    .MMMMMMMm     .yMMMMMMMMmm///       ///mmMMMMMMMy.     mMMMMMMM.    /MMMMMM     \n");
			printf("     .MMMMMM/    .MMMMMMMm/     yyMMMMMMMMMMMmmmmmmmMMMMMMMMMMyy     /mMMMMMMM.    /MMMMMM.     \n");
			printf("      .MMMMMM/    .MMMMMMMMm      .yMMMMMMMMMMMMMMMMMMMMMMMMy.      mMMMMMMMM.    /MMMMMMy      \n");
			printf("       -MMMMMM:    -hMMMMMMMd::     --hhMMMMMMMMMMMMMMMMhh--     ::dMMMMMMMh-    :MMMMMMh       \n");
			printf("        -MMMMMM:     -hMMMMMMMMd:       ---hhhhhhhhhh---       :dMMMMMMMMM-     :MMMMMMh        \n");
			printf("         -MMMMMMd:     hMMMMMMMMMdd::                      ::ddMMMMMMMMMh-    :dMMMMMM-         \n");
			printf("          :dMMMMMMh     ::dMMMMMMMMMMhh----          ----hhMMMMMMMMMMd::     -MMMMMMd:          \n");
			printf("            :MMMMMMh-      :dMMMMMMMMMMMMMMhhhhhhhhhhMMMMMMMMMMMMMMd:      -hMMMMMM:            \n");
			printf("             :dMMMMMMh--     ::ddMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdd::     --hMMMMMMd:             \n");
			printf("               :dMMMMMMMh-       ::dddMMMMMMMMMMMMMMMMMMMMddd::       -hMMMMMMMd:               \n");
			printf("                 /mMMMMMMMyy..        ////mmmmmmmmmmmm////        ..yyMMMMMMMm/                 \n");
			printf("                   //mMMMMMMMMyy..                            ..yyMMMMMMMMm//                   \n");
			printf("                      /mmMMMMMMMMMyyyy....            ....yyyyMMMMMMMMMmm/                      \n");
			printf("                         /NNMMMMMMMMMMMMMMyyyyyyyyyyyyMMMMMMMMMMMMMMNN/                         \n");
			printf("                            +++NNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNN+++                            \n");
			printf("                                 +++NNNNNMMMMMMMMMMMMMMNNNNN+++                                 \n");
			printf("                                         ++++++++++++++                                         \n\n\n");
			usleep(100000);
			system("cls");
			
		}
		
		else
		{
			printf("                                    ooooooMMMMMMMMMMMMoooooo                                    \n");
			printf("                              oooMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMooo                              \n");
			printf("                         ++NNNMMMMMMMMMMMMssssssssssssMMMMMMMMMMMMNNN++                         \n");
			printf("                      ++NMMMMMMMMssss`````            `````ssssMMMMMMMMNN+                      \n");
			printf("                   +NNMMMMMMMss``                              ``ssMMMMMMMNN+                   \n");
			printf("                 /NMMMMMMyy``                                      ```yMMMMMMN//                \n");
			printf("              /mmMMMMMy..             ////mmmmmmmmmmmm////             ..yMMMMMMm/              \n");
			printf("            /mMMMMMMy.          ///mmmMMMMMMMMMMMMMMMMMMMMmmmm//          .yyMMMMMm/            \n");
			printf("          /mMMMMMy..        //mmMMMMMMMMMMMyyyyyyyyyyMMMMMMMMMMMmm//         .yMMMMMm/          \n");
			printf("         :MMMMMh-        :ddMMMMMMMhhhh----          ----hhhhMMMMMMMdd:        -hMMMMMd         \n");
			printf("       :dMMMMM-        :dMMMMMMhh--                          --hhMMMMMMd:        -hMMMMd:       \n");
			printf("      dMMMMMh-      :ddMMMMMhh-            ::::::::::            --hMMMMMdd:       hMMMMMd      \n");
			printf("    :dMMMMh-       dMMMMMMh-         :::dddMMMMMMMMMMdddd::         -hMMMMMMd       -hMMMMd:    \n");
			printf("   -MMMMMd       -hMMMMd::       --hhMMMMMMMMMMMMMMMMMMMMMMhh--       ::dMMMMh-       dMMMMM-   \n");
			printf("  -MMMMM:      -hMMMMMd        -hMMMMMMMdddd::::::::ddddMMMMMMMh-        dMMMMMh-      :MMMMM-  \n");
			printf("  MMMMMd      -MMMMMd:       -hMMMMMdd::                ::ddMMMMMhh-      :dMMMMM-      dMMMMM  \n");
			printf(" yMMMMm      .MMMMMm       .yMMMMMm/                        /mMMMMMM.       /MMMMM.      mMMMMy \n");
			printf(".MMMMm      .MMMMM/      .yMMMMM//                            //MMMMMy.      /MMMMM.      mMMMMy\n");
			printf("MMMMM      .MMMMM/      .MMMMMm/          ...yyyyyyy...         /mMMMMM.      /MMMMM.      MMMMMM\n");
			printf("MMMMm      MMMMM/      .MMMMM/         ..yMMMMMMMMMMMMMyy.        /MMMMM.      /MMMMM      /MMMMM\n");
			printf("MMMM      `MMMMN       MMMMM+        `sMMMMMMMNNNNNMMMMMMMs`       +MMMMM`      NMMMMs      MMMMM\n");
			printf("MMMM      MMMMM       sMMMM+        `MMMMMNN++     ++NNMMMMMs       +MMMMM       MMMMM      NMMMM\n");
			printf("MMM+     `MMMMN      `MMMMM        sMMMMM+ MMMMMMMMMMM +NMMMMs       NMMMM`      NMMMMs      MMMM\n");
			printf("MMM      MMMMM       MMMMM+        MMMMM+  M|||||||||M   MMMMM        MMMMM       MMMMM      MMMM\n");
			printf("MMM      MMMMM       MMMMM        MMMMMo   M|||MMMMMMM   oMMMMM       MMMMM       MMMMM      MMMM\n");
			printf("MMM      MMMMM       MMMMM        MMMMM    M|||M          MMMMM       MMMMM       MMMMM      MMMM\n");
			printf("MMM      MMMMM       MMMMM        MMMMM    M|||M          MMMMM       MMMMM       MMMMM      MMMM\n");
			printf("MMM      MMMMM       MMMMM+       sMMMMM   M|||MMMMMMM   MMMMMs       MMMMM       MMMMM      MMMM\n");
			printf("MMM+     sMMMM+      `MMMMM        MMMMMN  M|||||||||M  +MMMMM       NMMMM`      +MMMMs      MMMM\n");
			printf("MMMM      MMMMM       MMMMM+       `MMMMMN MMMMMMMMMMM  +NMMM`      +MMMMM       MMMMM      NMMMM\n");
			printf("MMMM      MMMMM+      `MMMMM+       `sMMMMMNNN     NNNMMMMMs`      +MMMMM`      +MMMMM      MMMMM\n");
			printf("MMMMm     .MMMMM       .MMMMM/        .yMMMMMM+++++MMMMMMy.       /MMMMM.       MMMMM.     /MMMMM\n");
			printf("MMMMM      yMMMMm       .MMMMMm/        ..yyyMMMMMMMyyy..       /mMMMMM.       mMMMMy      MMMMM\n");
			printf("yMMMMm      yMMMMm       .yMMMMM//           .......          //MMMMMy.       mMMMMy      mMMMMy\n");
			printf(" yMMMMm      yMMMMm        .MMMMMMm/                        /mMMMMMM.        mMMMMy      /MMMMy \n");
			printf("  MMMMMd      hMMMMd:       -hhMMMMMdd::                ::ddMMMMMhh-       :dMMMMh      :MMMMM  \n");
			printf("  -MMMMMd      hMMMMMd:        -hMMMMMMMddd::::::::::dddMMMMMMMh-         dMMMMMh      :MMMMM-  \n");
			printf("   -MMMMMd      -hMMMMM:         --hhMMMMMMMMMMMMMMMMMMMMMMhh--         :dMMMMh-      dMMMMM-   \n");
			printf("    :dMMMMh-      :MMMMMhh-          ::ddddMMMMMMMMMMdddd::          -hhMMMMMd      -hMMMMd:    \n");
			printf("      dMMMMMh      :dMMMMMMh-              ::::::::::              -hMMMMMMd:      hMMMMMd      \n");
			printf("       :dMMMMh-      :ddMMMMMhh--                              --hhMMMMMdd:      -hMMMMd:       \n");
			printf("         dMMMMMh-       :dMMMMMMMhh---                    ---hhMMMMMMMd:       -hMMMMMd         \n");
			printf("          /mMMMMMy.       //mmMMMMMMMMyyyy............yyyyMMMMMMMMmm//       .yMMMMMm/          \n");
			printf("            /mMMMMMyy.        //mmMMMMMMMMMMMMMMMMMMMMMMMMMMMMmm//        .yyMMMMMm/            \n");
			printf("              /mMMMMMMy..         ////mmmmMMMMMMMMMMMMmmmm////         ..yMMMMMMm/              \n");
			printf("                //NMMMMMMy``              ////////////              ``yMMMMMMN//                \n");
			printf("                   +NNMMMMMMsss``                              ``sssMMMMMMNN+                   \n");
			printf("                      +NNMMMMMMMMsss`````              `````sssMMMMMMMMNN+                      \n");
			printf("                         ++NNNMMMMMMMMMMMssssssssssssssMMMMMMMMMMMNNN++                         \n");
			printf("                              ooMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMoo                              \n");
			printf("                                    oooooMMMMMMMMMMMMMMooooo                                    \n");
			usleep(100000);
			system("cls");
		}
	}
	system("mode con:cols=60 lines=5");
	SetWindowPos( consoleWindow, 0, 550, 200, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
	printf("\nSeja bem vindo ao COVID-19 NEWS!\n\nAqui atualizamos em tempo real o status do coronavirus...");
	system("powershell \"Add-Type -AssemblyName System.speech; $speak = New-Object System.Speech.Synthesis.SpeechSynthesizer; $speak.Speak('Seja bem vindo ao covidi 19 nius. Aqui atualizamos em tempo real o status do coronavirus.')\"");
	killConfiguredIexplorer();
	system("cls");
}

// Menu principal
char* mainMenu(int exibetextomenu)
{
	SetWindowPos( consoleWindow, 0, 250, 100, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
	system("mode con:cols=123 lines=38");
	
    printf(" _________________________________________________________________________________________________________________________\n");
    printf("|    `-///:-       .:///:`   -----.  -----`.----` .-------.`               `---    .:///:.                                |\n");
    printf("|  .hMMMMMMMNs`  :dMMMMMMMd: yMMMMh `MMMMM-yMMMM+ sMMMMMMMMMd/          `:sNMMm  /mMMMMMMMm:                              |\n");
    printf("|  mMMMM/oMMMMy -MMMMm:mMMMM.:MMMMm :MMMMN yMMMM+ sMMMMhoNMMMN.       -NMMMMMMm .MMMMh sMMMM-                             |\n");
    printf("| `MMMMN -MMMMm /MMMMy yMMMM/`NMMMM.oMMMMh yMMMM+ sMMMMs dMMMM-       `--+MMMMm :MMMMs oMMMM/                             |\n");
    printf("| .MMMMN -NNNNd +MMMMy yMMMM/ hMMMM/yMMMM+ yMMMM+ sMMMMs dMMMM-          `MMMMm :MMMMs oMMMM/                             |\n");
    printf("| .MMMMN        +MMMMy yMMMM/ /MMMModMMMM. yMMMM+ sMMMMs dMMMM-./////:`  `MMMMm -MMMMd-hMMMM/                             |\n");
    printf("| .MMMMN .sssso +MMMMy yMMMM/ .NMMMhNMMMm  yMMMM+ sMMMMs dMMMM-+MMMMMN.  `MMMMm  +mMMMNdMMMM/                             |\n");
    printf("| `MMMMN -MMMMd +MMMMy yMMMM/  dMMMNMMMMy  yMMMM+ sMMMMs mMMMM-.//////`  `MMMMm `--:/: oMMMM/                             |\n");
    printf("|  mMMMN-+MMMMy :MMMMh.dMMMM-  +MMMMMMMM/  yMMMM+ sMMMMy/NMMMM.          `MMMMm -MMMMy oMMMM-                             |\n");
    printf("|  :mMMMMMMMMh`  +NMMMMMMMN+   -MMMMMMMN.  yMMMM+ sMMMMMMMMMMh`          `MMMMm  oMMMMdMMMNo                              |\n");
    printf("|    -+osso/.     `:+sss+:`     /++++++/   :++++. -++++++++/.             ++++/   `:+sss+:`                               |\n");
    printf("|                                                                                                                         |\n");
    printf("|                                                                ohhhs  +hhho -hhhhhhhh.hhhhy  shhhho  yhhhh``+hdmmmhs:   |\n");
    printf("|                                                                yMMMM/ sMMMh /MMMMMMMM.dMMMN``NMMMMm -MMMMd`NMMMNmMMMMo  |\n");
    printf("|                                                                yMMMMN`sMMMh /MMMMm::: sMMMM--MMMMMN`+MMMMs/MMMM+`mMMMd  |\n");
    printf("|                                                                yMMMMMysMMMh /MMMMd    :MMMM/+MMMMMM-yMMMM/-MMMMNo:-...  |\n");
    printf("|                                                                yMMMMMMmMMMh /MMMMMNNm .NMMMoyMMMMMM/dMMMM. +NMMMMMd+`   |\n");
    printf("|                                                                yMMMNMMMMMMh /MMMMMNNm  mMMMhmMMhmMMsNMMMm   `/hMMMMMN+  |\n");
    printf("|                                                                yMMMydMMMMMh /MMMMd     sMMMNNMMosMMdMMMMy `++++/+NMMMN` |\n");
    printf("|                                                                yMMMs-MMMMMh /MMMMd```  /MMMMMMM-/MMMMMMM+ .MMMMs yMMMM- |\n");
    printf("| By Guilherme Tondello                                          yMMMs sMMMMh /MMMMMMMM+ .MMMMMMm `NMMMMMM-  mMMMmyNMMMN` |\n");
    printf("|                       &                                        yNNNs `mNNNy :NNNNNNNN+  mNNNNNs  yNNNNNm`  `odNMMMNms.  |\n");
    printf("|                         Filipe Andreis                                                                         ```      |\n");
    printf("|_________________________________________________________________________________________________________________________|\n\n");

    if(exibetextomenu == 1)
    {
    	char action[30];
	    printf("Digite um dos comandos abaixo: \n");
		printf("\n1 - Acessar o dashboard do estado (terminal);");
		printf("\n2 - Acessar o dashboard de todos estados (terminal);");
		printf("\n3 - Acessar o dashboard de todos estados em HTML5 (navegador);");
		printf("\n4 - Enviar um email com o dashboard de todos estados;");
		printf("\n5 - Acessar o dashboard do pais (terminal);");
		printf("\n6 - Acessar o dashboard de todos os paises (terminal);");
		printf("\n7 - Acessar o dashboard de todos os paises em HTML5 (navegador);");
		printf("\n8 - Enviar um email com o dashboard de todos paises;");
		printf("\n9 - Encerrar do programa;");
		printf("\n\nCOMANDO: ");
		scanf("%s",action);
    	return action;
	}
}

// Ações do menu
void menuActions()
{
	for(;;)
	{
	    char action[30];
		printf("\nDigite um dos comandos abaixo:\n");
		printf("\n1 - Para voltar para o menu;");
		printf("\n2 - Para sair;\n");
		printf("\nCOMANDO: ");
		

		scanf("%s",action);
		string castaction = action;
		if(castaction == "2")
		{
			exit(0);
		}
		else if(castaction == "1")
		{
			break;
		}
	}
}

// Recebe os dados da API de todos os países
string getApiDataAllCountry()
{
	system("powershell \"curl https://covid19-brazil-api.now.sh/api/report/v1/countries | Select-Object -Expand Content | Out-File COVID-API-RESULT-ACCENTED-ALL-COUNTRY.dat -Encoding utf8 -Append\"");
	
	system("cls");
	system("powershell \"[Text.Encoding]::ASCII.GetString([Text.Encoding]::GetEncoding('Cyrillic').GetBytes([IO.File]::ReadAllText(\\\"$pwd\\COVID-API-RESULT-ACCENTED-ALL-COUNTRY.dat\\\"))) | Out-File COVID-API-RESULT-ALL-COUNTRY.dat -Encoding utf8 -Append\"");
	system("cls");
	
	string json;

	ifstream dbCovid("COVID-API-RESULT-ALL-COUNTRY.dat");
  	
	getline(dbCovid, json);
	
	return json;
}

// Recebe os dados da API por país específico
void getApiDataCountry(string country)
{
	string datasource = "powershell \"curl https://covid19-brazil-api.now.sh/api/report/v1/";
	datasource.append(country);
	datasource.append(" | Select-Object -Expand Content | Out-File COVID-API-RESULT-ACCENTED-COUNTRY.dat -Encoding utf8 -Append\"");
	
	char * writable = new char[datasource.size() + 1];
	std::copy(datasource.begin(), datasource.end(), writable);
	writable[datasource.size()] = '\0';
	
	system(writable);
	
	system("cls");
	system("powershell \"[Text.Encoding]::ASCII.GetString([Text.Encoding]::GetEncoding('Cyrillic').GetBytes([IO.File]::ReadAllText(\\\"$pwd\\COVID-API-RESULT-ACCENTED-COUNTRY.dat\\\"))) | Out-File COVID-API-RESULT-COUNTRY.dat -Encoding utf8 -Append\"");
	system("cls");
}

// Recebe os dados da API por estado específico
void getApiDataState(string state)
{
	string datasource = "powershell \"curl https://covid19-brazil-api.now.sh/api/report/v1/brazil/uf/";
	datasource.append(state);
	datasource.append(" | Select-Object -Expand Content | Out-File COVID-API-RESULT-ACCENTED-STATE.dat -Encoding utf8 -Append\"");
	
	char * writable = new char[datasource.size() + 1];
	std::copy(datasource.begin(), datasource.end(), writable);
	writable[datasource.size()] = '\0';
	
	system(writable);
	
	system("cls");
	system("powershell \"[Text.Encoding]::ASCII.GetString([Text.Encoding]::GetEncoding('Cyrillic').GetBytes([IO.File]::ReadAllText(\\\"$pwd\\COVID-API-RESULT-ACCENTED-STATE.dat\\\"))) | Out-File COVID-API-RESULT-STATE.dat -Encoding utf8 -Append\"");
	system("cls");
}

// Recebe os dados da API de todos estados brasileiros
string getStringApiData()
{
	system("powershell \"curl https://covid19-brazil-api.now.sh/api/report/v1 | Select-Object -Expand Content | Out-File COVID-API-RESULT-ACCENTED.dat -Encoding utf8 -Append\"");
	system("cls");
	system("powershell \"[Text.Encoding]::ASCII.GetString([Text.Encoding]::GetEncoding('Cyrillic').GetBytes([IO.File]::ReadAllText(\\\"$pwd\\COVID-API-RESULT-ACCENTED.dat\\\"))) | Out-File COVID-API-RESULT.dat -Encoding utf8 -Append\"");
	system("cls");
	
	string json;

	ifstream dbCovid("COVID-API-RESULT.dat");
  	
	getline(dbCovid, json);
	
	return json;
}

// Lê os dados do arquivo e retorna um json
string getStringApiDataCountry()
{
	string json;

	ifstream dbCovid("COVID-API-RESULT-COUNTRY.dat");
  	
	getline(dbCovid, json);
	
	return json;
}

// Lê os dados do arquivo e retorna um json
string getStringApiDataState()
{
	string json;

	ifstream dbCovid("COVID-API-RESULT-STATE.dat");
  	
	getline(dbCovid, json);
	
	return json;
}

// Submenu país
void menuCountry()
{
	mainMenu(0);
	
    char country[150];
	printf("\nDigite o nome do pais (Em Ingles): ");
	scanf("%s",country);
	string castcountry = country;
	
	getApiDataCountry(castcountry);
}

// Submenu estado
void menuState()
{
	mainMenu(0);
	
    char state[150];
	printf("\nDigite o UF do estado (Ex: SP): ");
	scanf("%s",state);
	string caststate = state;
	
	getApiDataState(caststate);
}

// Submenu e-mail
string menuEmail()
{
	mainMenu(0);
	
    char email[150];
	printf("\nDigite o e-mail de destino: ");
	scanf("%s",email);
	string castemail = email;
	
	return castemail;
}

// Faz a interpretação do json e retorna organizado em tela
int ordenateApiReturn(string json)
{
	int counter, first = 1;
    int n = json.length(); 
    char char_array[n + 1]; 
    strcpy(char_array, json.c_str());
	
	if(char_array[11] == '{' && char_array[12] == '}' && char_array[13] == '}')
	{
		SetWindowPos( consoleWindow, 0, 550, 200, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
    	system("mode con:cols=64 lines=5");
		printf("\nNao foi possivel encontrar um retorno para esta solicitacao...");
		getch();
		return 0;
	}
    
    for (int i = 0; i < n; i++)
    {
    	if(char_array[i-4] == 's' && char_array[i-3] == 't' && char_array[i-2] == 'a' && char_array[i-1] == 't' && char_array[i] == 'e')
    	{
    		counter = 0;
    		if(first == 1)
    		{
    			printf(" _________________________________________________________ \n");
			}
			else
			{
    			printf("|_________________________________________________________|\n");
    		}
    		printf("|                                                         |\n");
    		printf("| Estado : ");
			for (int t = i+1; t < n; t++)
    		{
    			if(char_array[t] != '"' && char_array[t] != ':')
    			{
    				if(char_array[t] == ',')
    				{
    					break;
					}
					else
					{
    					printf("%c", char_array[t]);
    					counter++;
					}
				}
			}
			for(counter; counter <= 45; counter++)
			{
				printf(" ");
			}
			printf(" |\n");
			first = 0;
		}
		
		if(char_array[i-6] == 'c' && char_array[i-5] == 'o' && char_array[i-4] == 'u' && char_array[i-3] == 'n' && char_array[i-2] == 't' && char_array[i-1] == 'r' && char_array[i] == 'y')
		{
    		counter = 0;
    		if(first == 1)
    		{
    			printf(" _________________________________________________________ \n");
			}
			else
			{
    			printf("|_________________________________________________________|\n");
    		}
    		printf("|                                                         |\n");
    		printf("| Pais : ");
			for (int t = i+1; t < n; t++)
    		{
    			if(char_array[t] != '"' && char_array[t] != ':')
    			{
    				if(char_array[t] == ',')
    				{
    					break;
					}
					else
					{
    					printf("%c", char_array[t]);
    					counter++;
					}
				}
			}
			for(counter; counter <= 47; counter++)
			{
				printf(" ");
			}
			printf(" |\n");
			first = 0;
		}
		
    	if(char_array[i-4] == 'c' && char_array[i-3] == 'a' && char_array[i-2] == 's' && char_array[i-1] == 'e' && char_array[i] == 's')
    	{
    		counter = 0;
    		printf("|                                                         |\n");
    		printf("| Casos : ");
			for (int t = i+1; t < n; t++)
    		{
    			if(char_array[t] != '"' && char_array[t] != ':')
    			{
    				if(char_array[t] == ',')
    				{
    					break;
					}
					else
					{
    					printf("%c", char_array[t]);
    					counter++;
					}
				}
			}
			for(counter; counter <= 46; counter++)
			{
				printf(" ");
			}
			printf(" |\n");
			first = 0;
		}
		
    	if(char_array[i-8] == 'c' && char_array[i-7] == 'o' && char_array[i-6] == 'n' && char_array[i-5] == 'f' && char_array[i-4] == 'i' && char_array[i-3] == 'r' && char_array[i-2] == 'm' && char_array[i-1] == 'e' && char_array[i] == 'd')
    	{
    		counter = 0;
    		printf("|                                                         |\n");
    		printf("| Confirmados : ");
			for (int t = i+1; t < n; t++)
    		{
    			if(char_array[t] != '"' && char_array[t] != ':')
    			{
    				if(char_array[t] == ',')
    				{
    					break;
					}
					else
					{
    					printf("%c", char_array[t]);
    					counter++;
					}
				}
			}
			for(counter; counter <= 40; counter++)
			{
				printf(" ");
			}
			printf(" |\n");
			first = 0;
		}
		
    	if(char_array[i-5] == 'd' && char_array[i-4] == 'e' && char_array[i-3] == 'a' && char_array[i-2] == 't' && char_array[i-1] == 'h' && char_array[i] == 's')
    	{
    		counter = 0;
    		printf("|                                                         |\n");
    		printf("| Mortes : ");
			for (int t = i+1; t < n; t++)
    		{
    			if(char_array[t] != '"' && char_array[t] != ':')
    			{
    				if(char_array[t] == ',')
    				{
    					break;
					}
					else
					{
    					printf("%c", char_array[t]);
    					counter++;
					}
				}
			}
			for(counter; counter <= 45; counter++)
			{
				printf(" ");
			}
			printf(" |\n");
			first = 0;
		}
		
    	if(char_array[i-8] == 'r' && char_array[i-7] == 'e' && char_array[i-6] == 'c' && char_array[i-5] == 'o' && char_array[i-4] == 'v' && char_array[i-3] == 'e' && char_array[i-2] == 'r' && char_array[i-1] == 'e' && char_array[i] == 'd')
    	{
    		counter = 0;
    		printf("|                                                         |\n");
    		printf("| Recuperados : ");
			for (int t = i+1; t < n; t++)
    		{
    			if(char_array[t] != '"' && char_array[t] != ':')
    			{
    				if(char_array[t] == ',')
    				{
    					break;
					}
					else
					{
    					printf("%c", char_array[t]);
    					counter++;
					}
				}
			}
			for(counter; counter <= 40; counter++)
			{
				printf(" ");
			}
			printf(" |\n");
			first = 0;
		}
		
    	if(char_array[i-7] == 's' && char_array[i-6] == 'u' && char_array[i-5] == 's' && char_array[i-4] == 'p' && char_array[i-3] == 'e' && char_array[i-2] == 'c' && char_array[i-1] == 't' && char_array[i] == 's')
    	{
    		counter = 0;
    		printf("|                                                         |\n");
    		printf("| Suspeitos : ");
			for (int t = i+1; t < n; t++)
    		{
    			if(char_array[t] != '"' && char_array[t] != ':')
    			{
    				if(char_array[t] == ',')
    				{
    					break;
					}
					else
					{
    					printf("%c", char_array[t]);
    					counter++;
					}
				}
			}
			for(counter; counter <= 42; counter++)
			{
				printf(" ");
			}
			printf(" |\n");
			first = 0;
		}
		
    	if(char_array[i-6] == 'r' && char_array[i-5] == 'e' && char_array[i-4] == 'f' && char_array[i-3] == 'u' && char_array[i-2] == 's' && char_array[i-1] == 'e' && char_array[i] == 's')
    	{
    		counter = 0;
    		printf("|                                                         |\n");
    		printf("| Descartados : ");
			for (int t = i+1; t < n; t++)
    		{
    			if(char_array[t] != '"' && char_array[t] != ':')
    			{
    				if(char_array[t] == ',')
    				{
    					break;
					}
					else
					{
    					printf("%c", char_array[t]);
    					counter++;
					}
				}
			}
			for(counter; counter <= 40; counter++)
			{
				printf(" ");
			}
			printf(" |\n");
			first = 0;
		}
	}
    printf("|_________________________________________________________|\n");
	menuActions();
	return 1;
}

// Grava a informação posterior ao header do json
void setCharToWrite(int i, int n, string char_array)
{
	for (int t = i+1; t < n; t++)
	{
		if(char_array[t] != '"' && char_array[t] != ':')
		{
			if(char_array[t] == ',')
			{
				break;
			}
			else
			{
				const char* const_char_array_converted;
				string const_cha_array(1, char_array[t]);
				const_char_array_converted = const_cha_array.c_str();
				html.append(const_char_array_converted);
				email.append(const_char_array_converted);
			}
		}
	}
}

// Gera o arquivo HTML com os dados da API
void generateHtmlFromApi(string json, int countryorstate)
{
	html = "";
	
	if(countryorstate == 0)
	{
		html.append("<!DOCTYPE html> <html lang='en'> <head> <meta charset='UTF-8'> <meta name='viewport' content='width=device-width, initial-scale=1.0'> <title>COVID-19 NEWS</title><link rel='stylesheet' href='https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css' integrity='sha384-9aIt2nRpC12Uk9gS9baDl411NQApFmC26EwAOH8WgZl5MYYxFfc+NcPb1dKGj7Sk' crossorigin='anonymous'> <style> header.header { position: relative; margin-top: 50px; left: 0; width: 100%; transform: translateY(-50%); z-index: 1000; } header.header h1 { font-size: 5rem; color: #222; text-align: center; margin-top: 0; text-transform: uppercase; z-index: 1000; font-weight: 900; } .glitch-window { position: absolute; top: 0; left: -2px; width: 100%; color: #222; text-shadow: 2px 0 #f9f8f8, -1px 0 yellow, -2px 0 green; overflow: hidden; animation: crt-me 2500ms infinite linear alternate-reverse; z-index: 1000; } @keyframes crt-me { 0% { clip: rect(31px, 9999px, 94px, 0); } 10% { clip: rect(112px, 9999px, 76px, 0); } 20% { clip: rect(85px, 9999px, 77px, 0); } 30% { clip: rect(27px, 9999px, 97px, 0); } 40% { clip: rect(64px, 9999px, 98px, 0); } 50% { clip: rect(61px, 9999px, 85px, 0); } 60% { clip: rect(99px, 9999px, 114px, 0); } 70% { clip: rect(34px, 9999px, 115px, 0); } 80% { clip: rect(98px, 9999px, 129px, 0); } 90% { clip: rect(43px, 9999px, 96px, 0); } 100% { clip: rect(82px, 9999px, 64px, 0); } } body { font-family: Arial, Helvetica, 'Liberation Sans', FreeSans, sans-serif; background-color: #000; margin:0; padding:0; border-width:0; } .abc{ opacity: 0.9; z-index: 2 !important; color: white; position: relative; width: 80% !important; margin-left: 10%; margin-bottom: 50px;}</style> </head> <body><header class='header'> <h1 class='glitched'>Covid-19 NEWS</h1> <div class='glitch-window'><h1 class='glitched'>Covid-19 NEWS</h1></div> </header><table class='table table-dark abc'> <thead> <th scope='col'>Estados</th> <th scope='col'>Casos</th> <th scope='col'>Mortes</th> <th scope='col'>Suspeitos</th> <th scope='col'>Descartados</th> </thead> <tbody>");
	}
	else
	{
		html.append("<!DOCTYPE html> <html lang='en'> <head> <meta charset='UTF-8'> <meta name='viewport' content='width=device-width, initial-scale=1.0'> <title>COVID-19 NEWS</title><link rel='stylesheet' href='https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css' integrity='sha384-9aIt2nRpC12Uk9gS9baDl411NQApFmC26EwAOH8WgZl5MYYxFfc+NcPb1dKGj7Sk' crossorigin='anonymous'> <style> header.header { position: relative; margin-top: 50px; left: 0; width: 100%; transform: translateY(-50%); z-index: 1000; } header.header h1 { font-size: 5rem; color: #222; text-align: center; margin-top: 0; text-transform: uppercase; z-index: 1000; font-weight: 900; } .glitch-window { position: absolute; top: 0; left: -2px; width: 100%; color: #222; text-shadow: 2px 0 #f9f8f8, -1px 0 yellow, -2px 0 green; overflow: hidden; animation: crt-me 2500ms infinite linear alternate-reverse; z-index: 1000; } @keyframes crt-me { 0% { clip: rect(31px, 9999px, 94px, 0); } 10% { clip: rect(112px, 9999px, 76px, 0); } 20% { clip: rect(85px, 9999px, 77px, 0); } 30% { clip: rect(27px, 9999px, 97px, 0); } 40% { clip: rect(64px, 9999px, 98px, 0); } 50% { clip: rect(61px, 9999px, 85px, 0); } 60% { clip: rect(99px, 9999px, 114px, 0); } 70% { clip: rect(34px, 9999px, 115px, 0); } 80% { clip: rect(98px, 9999px, 129px, 0); } 90% { clip: rect(43px, 9999px, 96px, 0); } 100% { clip: rect(82px, 9999px, 64px, 0); } } body { font-family: Arial, Helvetica, 'Liberation Sans', FreeSans, sans-serif; background-color: #000; margin:0; padding:0; border-width:0; } .abc{ opacity: 0.9; z-index: 2 !important; color: white; position: relative; width: 80% !important; margin-left: 10%; margin-bottom: 50px;}</style> </head> <body><header class='header'> <h1 class='glitched'>Covid-19 NEWS</h1> <div class='glitch-window'><h1 class='glitched'>Covid-19 NEWS</h1></div> </header><table class='table table-dark abc'> <thead> <th scope='col'>Paises</th> <th scope='col'>Casos</th> <th scope='col'>Confirmados</th> <th scope='col'>Mortes</th> <th scope='col'>Recuperados</th> </thead> <tbody>");
	}
	
    int first = 0, n = json.length(); 
    char char_array[n + 1]; 
    strcpy(char_array, json.c_str());
    
    for (int i = 0; i < n; i++)
    {
    	if(char_array[i-4] == 's' && char_array[i-3] == 't' && char_array[i-2] == 'a' && char_array[i-1] == 't' && char_array[i] == 'e')
    	{
    		html.append("<tr>");
    		html.append("<td>");
			setCharToWrite(i, n, char_array);
			html.append("</td>");
		}
		
    	if(char_array[i-6] == 'c' && char_array[i-5] == 'o' && char_array[i-4] == 'u' && char_array[i-3] == 'n' && char_array[i-2] == 't' && char_array[i-1] == 'r' && char_array[i] == 'y')
    	{
    		html.append("<td>");
			setCharToWrite(i, n, char_array);
			html.append("</td>");
		}
		
		if(char_array[i-4] == 'c' && char_array[i-3] == 'a' && char_array[i-2] == 's' && char_array[i-1] == 'e' && char_array[i] == 's')
    	{
    		html.append("<td>");
			setCharToWrite(i, n, char_array);
			html.append("</td>");
		}
		
		if(char_array[i-8] == 'c' && char_array[i-7] == 'o' && char_array[i-6] == 'n' && char_array[i-5] == 'f' && char_array[i-4] == 'i' && char_array[i-3] == 'r' && char_array[i-2] == 'm' && char_array[i-1] == 'e' && char_array[i] == 'd')
    	{
    		html.append("<td>");
			setCharToWrite(i, n, char_array);
			html.append("</td>");
		}
		
		if(char_array[i-5] == 'd' && char_array[i-4] == 'e' && char_array[i-3] == 'a' && char_array[i-2] == 't' && char_array[i-1] == 'h' && char_array[i] == 's')
    	{
    		html.append("<td>");
			setCharToWrite(i, n, char_array);
			html.append("</td>");
		}
		
		if(char_array[i-7] == 's' && char_array[i-6] == 'u' && char_array[i-5] == 's' && char_array[i-4] == 'p' && char_array[i-3] == 'e' && char_array[i-2] == 'c' && char_array[i-1] == 't' && char_array[i] == 's')
    	{
    		html.append("<td>");
			setCharToWrite(i, n, char_array);
			html.append("</td>");
    	}
    	
    	if(char_array[i-6] == 'r' && char_array[i-5] == 'e' && char_array[i-4] == 'f' && char_array[i-3] == 'u' && char_array[i-2] == 's' && char_array[i-1] == 'e' && char_array[i] == 's')
    	{
    		html.append("<td>");
			setCharToWrite(i, n, char_array);
			html.append("</td>");
    	}
    	
    	if(char_array[i-8] == 'r' && char_array[i-7] == 'e' && char_array[i-6] == 'c' && char_array[i-5] == 'o' && char_array[i-4] == 'v' && char_array[i-3] == 'e' && char_array[i-2] == 'r' && char_array[i-1] == 'e' && char_array[i] == 'd')
    	{
    		html.append("<td>");
			setCharToWrite(i, n, char_array);
			html.append("</td>");
			html.append("</tr>");
    	}
	}
	
	html.append("</tbody></table><script>'use strict';window.addEventListener('load',function(){const t=1,i=1;let n,e,h,o,s,r,a,d,l,c={x:0,y:0},u={x:0,y:0},f=!1;const y=Math.random,w=Math.floor,x=(Math.round,Math.ceil,Math.abs,Math.min),m=(Math.max,Math.PI,Math.PI,2*Math.PI),p=Math.sin,M=Math.cos;Math.atan2,Math.hypot,(0,Math.sqrt)(3),Math.PI;function v(t,i){return void 0===i?t*y():t+(i-t)*y()}function g(t,i){return void 0===i&&(i=t,t=0),w(t+(i-t)*y())}function E(t,i,n,e,h=0,o=1){let s=[],r=[],a=[],d=[],l=[],c=0;t||(t=Math.random),n<1&&(n=1);for(let h=1;h<=n;++h)s[h]=t(),r[h]=t(),a[h]=1==h?1:a[h-1]*e,c+=a[h],d[h]=h/i,l[h]=t();return a.forEach((t,i)=>a[i]=t/c*(o-h)),function(){let i,e,o=0;for(let h=n;h>=1;--h)i=l[h]+=d[h],l[h]>=1&&(i=l[h]-=1,s[h]=r[h],r[h]=t()),e=i*i*(3-2*i),o+=(s[h]*(1-e)+r[h]*e)*a[h];return o+h}}function b(){this.x=u.x,this.y=u.y,this.dir=v(m),this.speed=t*v(.8,1.4),this.genddir=E(null,100,2,.8,-.03,.03),this.r=i,this.color1=`hsl(${l}, 100%, ${v(20,80)}%)`,l=(l+g(-5,5))%360}let P;b.prototype.move=function(){return this.dir=(this.dir+this.genddir())%m,this.speed+=.01,this.r=x(this.r+.1,10),this.x+=this.speed*M(this.dir),this.y+=this.speed*p(this.dir),!(this.y<-this.r||this.y>o+this.r||this.x<-this.r||this.x>h+this.r)},b.prototype.draw=function(){e.beginPath(),e.arc(this.x,this.y,this.r,0,m),e.fillStyle=this.color1,e.fill()};{let t=0,i=0;P=function(y){0==i&&(i=y),!r||(h=window.innerWidth,o=window.innerHeight,h<10||(n.style.left=(window.innerWidth-h)/2+'px',n.style.top=(window.innerHeight-o)/2+'px',e.canvas.width=h,e.canvas.height=o,e.lineJoin='round',d=E(null,200,0,0,-.03,.03),l=g(360),0==u.x&&0==u.y&&(u={x:h/2,y:o/2}),c={x:h/2,y:o/2},s=[],a=v(m),0))||(r=!1),s&&(f&&(t=1e3,f=!1),t>0&&(t+=i-y),i=y,a+=d(),a%=m,e.fillStyle='rgba(0,0,0,0.03)',e.fillRect(0,0,h,o),s.length<300&&s.push(new b),s.forEach((t,i)=>{0==t.move()?function(t,i){let n=t.indexOf(i);if(-1==n)throw'Bug ! indexOf -1 in removeElement';t.splice(n,1)}(s,t):t.draw()})),window.requestAnimationFrame(P)}}(n=document.createElement('canvas')).style.position='fixed',document.body.appendChild(n),e=n.getContext('2d'),window.addEventListener('click',function(){u.x=event.clientX,u.y=event.clientY,r=!0}),window.requestAnimationFrame(P),n.addEventListener('mousemove',function(t){c.x=t.clientX,c.y=t.clientY,f=!0}),r=!0}); document.addEventListener('click',handler,true); function handler(e){ e.stopPropagation(); e.preventDefault(); }</script> <script src='https://code.jquery.com/jquery-3.5.1.slim.min.js' integrity='sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj' crossorigin='anonymous'></script> <script src='https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js' integrity='sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo' crossorigin='anonymous'></script> <script src='https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/js/bootstrap.min.js' integrity='sha384-OgVRvuATP1z7JjHLkuOU7Xw704+h835Lr+6QL9UvYjZE3Ipu6Tp75j7Bh/kR0JKI' crossorigin='anonymous'></script></body></html>");
	
	ofstream outfile ("covid_19_news.html");

	outfile << html << std::endl;
	
	outfile.close();
	
	system(".\\covid_19_news.html");
	sleep(10);
	system("del covid_19_news.html");
	system("cls");
	mainMenu(0);
	menuActions();
}

// Gera o e-mail com os dados da API
void generateEmailFromApi(string json, string emailsend, int countryorstate)
{
	string emailcreate = "";
	email = "";
	
	if(countryorstate == 0)
	{
		email.append("<table style='border: 1px solid black;'><thead> <th style='border: 1px solid black;' scope='col'>Estados</th> <th style='border: 1px solid black;' scope='col'>Casos</th> <th style='border: 1px solid black;' scope='col'>Mortes</th> <th style='border: 1px solid black;' scope='col'>Suspeitos</th> <th style='border: 1px solid black;' scope='col'>Descartados</th> </thead> <tbody>");
	}
	else
	{
		email.append("<table style='border: 1px solid black;'><thead> <th style='border: 1px solid black;' scope='col'>Paises</th> <th style='border: 1px solid black;' scope='col'>Casos</th> <th style='border: 1px solid black;' scope='col'>Confirmados</th> <th style='border: 1px solid black;' scope='col'>Mortes</th> <th style='border: 1px solid black;' scope='col'>Recuperados</th> </thead> <tbody>");
	}
    int first = 0, n = json.length(); 
    char char_array[n + 1]; 
    strcpy(char_array, json.c_str());
    
    for (int i = 0; i < n; i++)
    {
    	if(char_array[i-4] == 's' && char_array[i-3] == 't' && char_array[i-2] == 'a' && char_array[i-1] == 't' && char_array[i] == 'e')
    	{
    		email.append("<tr>");
    		email.append("<td style='border: 1px solid black;'>");
			setCharToWrite(i, n, char_array);
			email.append("</td>");
		}
		
    	if(char_array[i-6] == 'c' && char_array[i-5] == 'o' && char_array[i-4] == 'u' && char_array[i-3] == 'n' && char_array[i-2] == 't' && char_array[i-1] == 'r' && char_array[i] == 'y')
    	{
    		email.append("<td style='border: 1px solid black;'>");
			setCharToWrite(i, n, char_array);
			email.append("</td>");
		}
		
		if(char_array[i-4] == 'c' && char_array[i-3] == 'a' && char_array[i-2] == 's' && char_array[i-1] == 'e' && char_array[i] == 's')
    	{
    		email.append("<td style='border: 1px solid black;'>");
			setCharToWrite(i, n, char_array);
			email.append("</td>");
		}
		
		if(char_array[i-8] == 'c' && char_array[i-7] == 'o' && char_array[i-6] == 'n' && char_array[i-5] == 'f' && char_array[i-4] == 'i' && char_array[i-3] == 'r' && char_array[i-2] == 'm' && char_array[i-1] == 'e' && char_array[i] == 'd')
    	{
    		email.append("<td style='border: 1px solid black;'>");
			setCharToWrite(i, n, char_array);
			email.append("</td>");
		}
		
		if(char_array[i-5] == 'd' && char_array[i-4] == 'e' && char_array[i-3] == 'a' && char_array[i-2] == 't' && char_array[i-1] == 'h' && char_array[i] == 's')
    	{
    		email.append("<td style='border: 1px solid black;'>");
			setCharToWrite(i, n, char_array);
			email.append("</td>");
		}
		
		if(char_array[i-7] == 's' && char_array[i-6] == 'u' && char_array[i-5] == 's' && char_array[i-4] == 'p' && char_array[i-3] == 'e' && char_array[i-2] == 'c' && char_array[i-1] == 't' && char_array[i] == 's')
    	{
    		email.append("<td style='border: 1px solid black;'>");
			setCharToWrite(i, n, char_array);
			email.append("</td>");
    	}
    	
    	if(char_array[i-6] == 'r' && char_array[i-5] == 'e' && char_array[i-4] == 'f' && char_array[i-3] == 'u' && char_array[i-2] == 's' && char_array[i-1] == 'e' && char_array[i] == 's')
    	{
    		email.append("<td style='border: 1px solid black;'>");
			setCharToWrite(i, n, char_array);
			email.append("</td>");
    	}
    	
    	if(char_array[i-8] == 'r' && char_array[i-7] == 'e' && char_array[i-6] == 'c' && char_array[i-5] == 'o' && char_array[i-4] == 'v' && char_array[i-3] == 'e' && char_array[i-2] == 'r' && char_array[i-1] == 'e' && char_array[i] == 'd')
    	{
    		email.append("<td style='border: 1px solid black;'>");
			setCharToWrite(i, n, char_array);
			email.append("</td>");
			email.append("</tr>");
    	}
	}
	
	email.append("</tbody></table>");
		
	ofstream outfile ("email.dat");
	outfile << email << std::endl;
	outfile.close();
	
	emailcreate.append("powershell \"$email = \\\"covid19newscoronavirus@gmail.com\\\";$pass = \\\"Covid@3720\\\";$smtpServer = \\\"smtp.gmail.com\\\";$msg = new-object Net.Mail.MailMessage;$smtp = new-object Net.Mail.SmtpClient($smtpServer, 587);$smtp.EnableSsl = $true;$msg.From = \\\"$email\\\" ;$msg.To.Add(\\\"");
	emailcreate.append(emailsend);
	emailcreate.append("\\\");$msg.BodyEncoding = [system.Text.Encoding]::Unicode;$msg.SubjectEncoding = [system.Text.Encoding]::Unicode;$msg.IsBodyHTML = $true;$msg.Subject = \\\"Covid-19 News\\\";$msg.Body =  Get-Content ./email.dat; $SMTP.Credentials = New-Object System.Net.NetworkCredential(\\\"$email\\\", \\\"$pass\\\"); $smtp.Send($msg);\"");
	
	char * writable = new char[emailcreate.size() + 1];
	std::copy(emailcreate.begin(), emailcreate.end(), writable);
	writable[emailcreate.size()] = '\0';
	
	system(writable);
	system("del email.dat");
	system("cls");
	mainMenu(0);
	printf("O E-Mail foi enviado com sucesso!!!\n");
	menuActions();
}

// INÍCIO DO PROGRAMA
int main()
{
	system("title COVID-19 NEWS");
	
	system("color 0a");
	
	if(checkWidowsVersion() != 1)
	{
		system("cls");
		printf("O seu sistema oporacional nao tem compatibilidade com o COVID-19 NEWS!\n\nUtilize um computador com windows 10 para utilizar o programa.");
		sleep(10);
		exit(0);
	}
	
	Logo();
	
	system("del winver.dat");
	system("cls");
	
	for(;;)
	{
		system("del COVID-API-RESULT-ACCENTED.dat");
		system("cls");
		system("del COVID-API-RESULT.dat");
		system("cls");
		
		string retmenu = mainMenu(1);

		// Acessar o dashboard do estado (terminal)
		if(retmenu == "1")
		{
			menuState();
			string jsonState = getStringApiDataState();
			system("del COVID-API-RESULT-ACCENTED-STATE.dat");
			system("cls");
			system("del COVID-API-RESULT-STATE.dat");
			system("cls");
			
			system("mode con:cols=60 lines=20");
			SetWindowPos( consoleWindow, 0, 550, 200, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
			ordenateApiReturn(jsonState);
		}

		// Acessar o dashboard de todos estados (terminal)
		else if(retmenu == "2")
		{
			string json = getStringApiData();
			system("cls");
			system("mode con:cols=60 lines=310");
			SetWindowPos( consoleWindow, 0, 400, 0, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
			ordenateApiReturn(json);
		}
		
		// Acessar o dashboard de todos estados em HTML5 (navegador)
		else if(retmenu == "3")
		{
			string json = getStringApiData();
			generateHtmlFromApi(json, 0);
		}
		
		// Enviar um email com o dashboard de todos estados
		else if(retmenu == "4")
		{	
			string json = getStringApiData();
			string sendemail = menuEmail();
			system("cls");
			generateEmailFromApi(json, sendemail, 0);
		}
		
		// Acessar o dashboard do pais (terminal)
		else if(retmenu == "5")
		{
			menuCountry();
			string jsonCountry = getStringApiDataCountry();
			system("del COVID-API-RESULT-ACCENTED-COUNTRY.dat");
			system("cls");
			system("del COVID-API-RESULT-COUNTRY.dat");
			system("cls");
			
			system("mode con:cols=60 lines=20");
			SetWindowPos( consoleWindow, 0, 550, 200, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
			ordenateApiReturn(jsonCountry);
		}
		
		// Acessar o dashboard de todos os paises (terminal)
		else if(retmenu == "6")
		{
			string jsonAllCountry = getApiDataAllCountry();
			system("del COVID-API-RESULT-ACCENTED-ALL-COUNTRY.dat");
			system("cls");
			system("del COVID-API-RESULT-ALL-COUNTRY.dat");
			system("cls");
			
			system("mode con:cols=60 lines=2080");
			SetWindowPos( consoleWindow, 0, 400, 0, 0, 0, SWP_NOSIZE | SWP_NOZORDER );
			ordenateApiReturn(jsonAllCountry);
		}
		
		// Acessar o dashboard de todos os paises em HTML5 (navegador)
		else if(retmenu == "7")
		{
			string jsonAllCountry = getApiDataAllCountry();
			system("del COVID-API-RESULT-ACCENTED-ALL-COUNTRY.dat");
			system("cls");
			system("del COVID-API-RESULT-ALL-COUNTRY.dat");
			system("cls");
			
			generateHtmlFromApi(jsonAllCountry, 1);
		}
		
		// Enviar um email com o dashboard de todos paises
		else if(retmenu == "8")
		{
			string jsonAllCountry = getApiDataAllCountry();
			system("del COVID-API-RESULT-ACCENTED-ALL-COUNTRY.dat");
			system("cls");
			system("del COVID-API-RESULT-ALL-COUNTRY.dat");
			system("cls");
			
			string sendemail = menuEmail();
			system("cls");
			generateEmailFromApi(jsonAllCountry, sendemail, 1);
		}
		
		// Encerrar do programa
		else if(retmenu == "9")
		{
			exit(0);
		}
	}
	
    return 0;
}
