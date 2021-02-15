#ifndef USER_INTERFACE_H_INCLUDED
#define USER_INTERFACE_H_INCLUDED

using namespace rlutil;

class User_Interface {
private:
    Window Menu_window;
Button Option;
    Window Square;
    Loading Bar;
public:
 void gotoXY(int x, int y)
{
    COORD coord = {x, y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    return;
}
    void Interface_Menu_Principal(){
    Menu_window.Summon_Window(30,0,70,40,"PRUEBA DE MENU PRINCIPAL PROGRAMA DE GESTION(C++)","MENU PRINCIPAL ","(MODO DE APERTURA)","INGRESA UNA OPCION VALIDA PARA CONTINUAR:","OPCION:");
    Option.Summon_Button(40,7,50,3,"OPCION 1.");
    Option.Summon_Button(40,11,50,3,"OPCION 2");
    Option.Summon_Button(40,15,50,3,"OPCION 3");
    Option.Summon_Button(40,19,50,3,"OPCION 4");
    Option.Summon_Button(40,23,50,3,"OPCION 5");
    Option.Summon_Button(40,27,50,3,"OPCION 6");
    Option.Summon_Button(40,33,50,2,"0-SALIR.",RED,RED);
    }


 void firma_Desarrollador(){

 int i;
 ///for(i=0;i<10;i++){
   /// recuadro(30-i,30+i,10-i,10-i);
/// }

gotoXY(55,17);
cout<<"SCHEMED,WRITEN,CODED AND BUILT BY "<<endl;
Square.window(60,20,20,10);
Square.window(61,20.5,18,9);
Square.window(62,21,16,8);
Square.window(63,21.5,14,7);
Square.window(60,23,20,3);
gotoXY(61,24);
 cout<<"   L.N.G. SYSTEM";
 gotoXY(61,25);
 cout<<"    Engineering"<<endl;

 Bar.unity_Loading_Bar(1,1);
 system("pause>nul");


 }




};


#endif // USER_INTERFACE_H_INCLUDED
