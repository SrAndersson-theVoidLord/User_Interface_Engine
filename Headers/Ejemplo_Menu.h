#ifndef EJEMPLO_MENU_H_INCLUDED
#define EJEMPLO_MENU_H_INCLUDED


    void gotoXY(int x, int y)
{
    COORD coord = {x, y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    return;
}

void Menu_Principal_Beta()
{
     system("cls");
     SetConsoleTitle("NOMBRE DEL PROGRAMA (MODO DE APERTURA)");


    int menu_item=1, run, x=9,opcion=0;
char Nombre_opcion[50];
User_Interface M;
M.firma_Desarrollador();
M.Interface_Menu_Principal();




    while(true)
    {

    rlutil::setColor(1);
                    gotoXY(34,x); cout << "[**>>";
                    gotoXY(92,x); cout << "<<**]";
        /// POSICION DEL CURSOR IMPRESA POR PANTALLA:

        switch(x){
           case 9:
        opcion=1;
        strcpy(Nombre_opcion,"OPCION 1");
        break;

	     case 13:
	         opcion=2;
	         strcpy(Nombre_opcion,"OPCION 2");
        break;

        case 17:
	         opcion=3;
	         strcpy(Nombre_opcion,"OPCION 3");
        break;

        case 21:
	         opcion=4;
	         strcpy(Nombre_opcion,"OPCION 4");
        break;
        case 25:
	         opcion=5;
	         strcpy(Nombre_opcion,"OPCION 5");
        break;
        case 29:
	         opcion=6;
	         strcpy(Nombre_opcion,"OPCION 6");
        break;

         case 34:
             opcion=0;
             strcpy(Nombre_opcion,"SALIR");
        break;
	    }




gotoXY(63,39);
cout<<"                                  ";
          rlutil::setColor(2);
          gotoXY(63,39);
          cout<<opcion<<"-" <<Nombre_opcion;



		system("pause>nul"); // the >nul bit causes it the print no message

		if(GetKeyState(VK_DOWN) & 0x8000 && x != 34) //down button pressed
			{

				gotoXY(34,x); cout << "     ";
				gotoXY(92,x); cout << "     ";
				x+=4;
				rlutil::setColor(1);
				gotoXY(34,x); cout << "[**>>";
                gotoXY(92,x); cout << "<<**]";
               if(x==33){
                    gotoXY(34,x); cout << "     ";
				gotoXY(92,x); cout << "     ";
				x++;
				rlutil::setColor(1);
				gotoXY(34,x); cout << "[**>>";
                gotoXY(92,x); cout << "<<**]";
                }

				menu_item++;
				continue;

			}

		if(GetKeyState(VK_UP) & 0x8000 && x != 9) //up button pressed
			{
			    if(x!=34){
                    gotoXY(34,x); cout << "     ";
				gotoXY(92,x); cout << "     ";
				x-=4;
				rlutil::setColor(1);
				gotoXY(34,x); cout << "[**>>";
                gotoXY(92,x); cout << "<<**]";
			    }


                if(x==34){
                    gotoXY(34,x); cout << "     ";
				gotoXY(92,x); cout << "     ";
				x-=5;
				rlutil::setColor(1);
				gotoXY(34,x); cout << "[**>>";
                gotoXY(92,x); cout << "<<**]";
                }

				menu_item--;
				continue;
			}

		if(GetKeyState(VK_RETURN) & 0x8000){ // Enter key pressed

		switch(menu_item){

				case 1:{

               system("cls");
               M.Interface_Menu_Principal();
					break;
}


				case 2:{


					 system("cls");
               M.Interface_Menu_Principal();

					break;

}

				case 3:{


					 system("cls");
               M.Interface_Menu_Principal();
					break;

}
                		case 4:{

					system("cls");
               M.Interface_Menu_Principal();
					break;

					case 5:{


					system("cls");
               M.Interface_Menu_Principal();
					break;

					case 6:{

					system("cls");
               M.Interface_Menu_Principal();
					break;

}
                    		case 7:{
					///salida
					return ;
					break;
                            }
                        }
                    }
                }
            }
        }
    }


#endif // EJEMPLO_MENU_H_INCLUDED
