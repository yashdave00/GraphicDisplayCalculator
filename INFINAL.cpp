
//GRAPHIC CALCULATOR

#include<fstream>         //INCLUDES <iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#define e 2.71828


	void main()
	{       main:
		ofstream output ;
		output.open("graph.xlsx" , ios::app ) ;

		int loop ; const float size = 20 ; char ch ;

		clrscr() ;
		cout << "\n" ; for( loop=0; loop<80; loop++)	cout <<"\f" ;
		cout << "\n    ______________________________________________________________________\n" ;
		cout << "    | 								         |\n" ;
		cout << "    | «««««««««««««««««««««   GRAPHIC CALCULATOR   »»»»»»»»»»»»»»»»»»»»» |\n" ;
		cout << "    | 								         |\n" ;
		cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
		cout << "\n" ; for( loop=0; loop<80; loop++)	cout <<"\f" ;
		cout << "\n\n" ;
		cout << " \n\n\t A--> Linear equation \t\t B--> Quadratic equation \n\t C--> Cubic equation ";
		cout << " \t\tD-->Delete all data  \n\tE-->Modulus function";
		cout <<  "\t\tF-->Ceiling function \n\tG-->Square root function";
		cout << "\t\tH-->Reciprocal function\n\tI-->Exponential function";
		cout << "\t\tJ-->Logarithm function\n\tK-->Inverse Square Function\t";
		cout<<"\tL-->Sine function\n\tM-->Tangent function\t\tX-->Exit";

		ch = getch() ;

		if((ch=='a')||(ch=='A'))

		{
			linear :
			clrscr() ; 																						// REFRESHING PAGE
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::    LINEAR  EQUATION    ::::::::::::::::::::: |\n" ;
			cout << "    | 								         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤\n" ;

				float x, y, a, b ;

			cout <<	"\n Enter coefficient of 'x'\t: " ;
				cin >> a ;
			cout << "\n Enter Constant ('0' if None)\t: " ;
				cin >> b ;

			cout << "\n Your Equation : y = " << a << "(x^1) + " << b << " \n\n\n"  ;

			if(a==0)       			   // LINEAR EQUATION VERIFICATION
			{
				cout << "\n\n  ::::::::::::::ERROR: Co-efficient Of 'x^1' Cannot Be Zero::::::::::::::	\n\n" ;
				cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;

			}
			output << "\n\n\n				Your Equation\t: y = " << a << "(x^1) + " << b << "\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = (-1*size) ;
			for(x=nsize; x<size ; x++) // LOOP TO PRINT * AT CO-ORDINATES
			{
				y = (x*a) + b ;
				output << "	|" <<setfill('-') <<  setw(y+200) << "¤                                    " << "( " << x << " , " << y << " ) \n" ;
			}

			cout << "\n		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;

		}

		else if((ch=='b')||(ch=='B'))

		{
			quadratic :
			clrscr() ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::   QUADRATIC EQUATION   ::::::::::::::::::::: |\n" ;
			cout << "    | 								         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤\n" ;

				float a ,b, c, x ,y ;

			cout <<	"\n\tEnter coefficient of 'x^2'\t: " ;
				cin >> a ;
			cout <<	"\n\tEnter coefficient of 'x'\t: " ;
				cin >> b ;
			cout << "\n\tEnter Constant ('0' If None)\t: " ;
				cin >> c ;
			cout << "\n\tYour Equation\t: y = " << a << "(x^2) + " << b << "(x^1) + " << c <<" \n\n\n";

			if(a==0) 					   // QUADRATIC EQUATION VERIFICATION
			{
				cout << "\n\n  ::::::::::::::ERROR: Co-efficient Of 'x^2' Cannot Be Zero::::::::::::::	\n\n" ;
				cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;
			}

			output << "\n\n\n				Your Equation : y = " << a << "(x^2) + " << b << "(x^1) + " << c <<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = (-1*size) ;
			for(x=nsize; x<=size; x+=0.5)
			{
				y = (a*x*x) + (b*x) + c ;
				output << "	|"<<setfill('-') <<  setw(y+100) << "¤                                    ( " << x << " , " << y << " ) \n" ;
			}
			cout<<"\n\n\tDo you want to find the roots of the equation?Y/N";
			char h;
			cin>>h;
			if(h=='Y'||h=='y')
			{
			 float root1,root2,dis;
			 dis=b*b-4*a*c;
			 if(dis<0)
			 {
			  cout<<"\nRoots dont exist";
			 }
			 else
			 {
			  root1= (-b+sqrt(dis))/(2*a);
			  root2= (-b-sqrt(dis))/(2*a);
			  cout<<"ROOTS ARE"<<root1<<"and"<<root2;
			 }
			 }

			cout << "\t    Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;


		}

		else if((ch=='c')||(ch=='C'))

		{
			cubic :
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     CUBIC EQUATION     ::::::::::::::::::::: |\n" ;
			cout << "    | 								         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float a, b, c, d , x, y ;

			cout <<  "\n\tEnter coefficient of 'x^3'\t: " ;
				cin >> a ;
			cout <<  "\n\tEnter coefficient of 'x^2'\t: " ;
				cin >> b ;
			cout <<	"\n\tEnter coefficient of 'x'\t: " ;
				cin >> c ;
			cout << "\n\tEnter Constant ('0' If None)\t: " ;
				cin >> d ;
			cout << "\n\tYour Equation\t: y = " << a << "(x^3) + " << b << "(x^2) + " << c << "(x^1) + " << d << "\n\n\n" ;

			if(a==0)							// CUBIC EQUATION VERIFICATION
			{
				cout << "\n\n\t\tERROR: Co-efficient Of 'x^3' Cannot Be Zero\n\n" ;
				cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;
			}

			output << "\n\n\n Your Equation : y = " << a << "(x^3) + " << b << "(x^2) + " << c << "(x^1) + " << d << "\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = (-1*size) ;
			for(x=nsize; x<=size; x+=0.5)
			{
				y = (a*x*x*x) + (b*x*x) + (c*x) + d ;
				output << "\t|" <<setfill('-')<< setw(y+500) << "¤                                    " << "( " << x << " , " << y << " ) \n" ;
			}

			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;


		}

		else if(ch=='d'||ch=='D')
		{
			output.close() ;           // CLOSES EXISTING FILE
			clrscr() ;
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\tDATA CLEARED" ;
			ofstream output ;
			output.open("graph.xlsx" , ios::trunc) ;
			output.close() ;
			clrscr() ;                  //NEW FILE CREATED TO REPLACE OLD
			cout << "\n\n\n\n\n\n\n\n\t\t\t\tDATA CLEARED" ;
			getch() ; goto main ;       // GETS USER INPUT AND PROCEEDS
		}
		else if(ch=='e'||ch=='E')
		{
			modx :
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     MODULUS FUNCTION    ::::::::::::::::::::: |\n" ;
			cout << "    | 							         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float x, y ;

			cout << "\n\tYour Equation\t: y = mod(x)";
			output << "\n\n\n Your Equation : y=mod(x)"<<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = -200;
			for(x=nsize; x<=200; x+=5)
			{
				y = abs(x) ;
				output << "\t|" <<setfill('-')<< setw(y+100) << "¤                                    " << "( " << x << " , " << y << " ) \n" ;
			}

			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;


		}
		else if(ch=='f'||ch=='F')
		{
		 ceil:
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     CEILING FUNCTION    ::::::::::::::::::::: |\n" ;
			cout << "    | 							         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float x, y ;
				int lim;

			cout << "\n\tYour Equation\t: y = ceil(x)";
			cout << "\nEnter limit:";
			cin>>lim;
			output << "\n\n\n Your Equation : y=ceil(x)"<<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = 0 ;
			for(x=nsize; x<=lim; x+=0.2)
			{
				y = ceil(x) ;
				output << "\t|" <<setfill('-')<< setw((20*y)+500) << "¤                " << "( " << x << " , " << y << " )"<<" \n" ;
			}

			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;


		}
		else if(ch=='g'||ch=='G')
		{
		  root:
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     SQUARE ROOT FUNCTION    ::::::::::::::::::::: |\n" ;
			cout << "    | 							         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float x, y ;
				int lim;

			cout << "\n\tYour Equation\t: y = SQRT(X)";
			cout<<"\nEnter limit:";
			cin>>lim;
			output << "\n\n\n Your Equation : y=SQRT(x)"<<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = 0 ;
			for(x=nsize; x<=lim; x+=1)
			{
				y =sqrt(x);
				output << "\t|" <<setfill('-')<< setw((50*y)+500) << "¤                " << "( " << x << " , " << y << " )"<<" \n" ;
			}

			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;
		}
		else if(ch=='h'||ch=='H')
		{
			  reciprocal:
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     RECIPROCAL FUNCTION    ::::::::::::::::::::: |\n" ;
			cout << "    | 							         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float x, y ;
				int lim;

			cout << "\n\tYour Equation\t: y = 1/X\n\nEnter limit:";
			cin>>lim;
			output << "\n\n\n Your Equation : y=1/x"<<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize =-1*lim ;
			for(x=nsize; x<=lim; x+=1)
			{       if(x==0)
				  y=0;
				y =1/x;
				output << "\t|" <<setfill('-')<< setw((500*y)+500) << "¤                " << "( " << x << " , " << y << " )"<<" \n" ;
			}

			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;
		}
		else if(ch=='J'||ch=='j')
		{
		 log:
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     LOGARITHMIC FUNCTION    ::::::::::::::::::::: |\n" ;
			cout << "    | 							         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float x, y ;
				int lim;

			cout << "\n\tYour Equation\t: y = log(x)";
			cout << "\nEnter limit:";
			cin>>lim;
			output << "\n\n\n Your Equation : y=log(x)"<<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = 1 ;
			for(x=nsize; x<=lim; x+=1)
			{
				y = log(x);
				output << "\t|" <<setfill('-')<< setw((100*y)+100) << "¤                " << "( " << x << " , " << y << " )"<<" \n" ;
			}

			cout << "		Please Check For The Output File In (.xfls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;


		}
		else if(ch=='I'||ch=='i')
		{

		 exp:
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     Exponential FUNCTION    ::::::::::::::::::::: |\n" ;
			cout << "    | 							         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float x, y ;
				int lim;

			cout << "\n\tYour Equation\t: y =e^x";

			output << "\n\n\n Your Equation : y=exp(x)"<<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = -5 ;
			for(x=nsize; x<=5; x+=0.2)
			{
				y = exp(x) ;
				if(x<0)
				output << "\t|" <<setfill('-')<< setw((100*y+50))<< "¤                " << "( " << x << " , " << y << " )"<<" \n" ;
				else
					output << "\t|" <<setfill('-')<< setw((10*y+140))<< "¤                " << "( " << x << " , " << y << " )"<<" \n" ;

			}

			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;


		}
		else if(ch=='K'||ch=='k')
		{
			invsq :
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     INVERSE SQUARE FUNCTION    ::::::::::::::::::::: |\n" ;
			cout << "    | 							         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float x, y ;

			cout << "\n\tYour Equation\t: y = 1/x^2";
			output << "\n\n\n Your Equation : y=1/x^2"<<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = 1;
			for(x=nsize; x<=20; x+=0.5)
			{
				y = 1/(pow(x,2)) ;
				output << "\t|" <<setfill('-')<< setw(1000*y+500) << "¤                                    " << "( " << x << " , " << y << " ) \n" ;
			}

			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;


		}
			else if(ch=='L'||ch=='l')
		{

		 sin:
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     Sine FUNCTION    ::::::::::::::::::::: |\n" ;
			cout << "    | 							         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float x, y ;
				int lim;

			cout << "\n\tYour Equation\t: y =sinx";

			output << "\n\n\n Your Equation : y=sin(x)"<<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = -10 ;
			for(x=nsize; x<=10; x+=0.2)
			{
				y = sin(x) ;
				output << "\t|" <<setfill('-')<< setw(100*y+500) << "¤                                    " << "( " << x << " , " << y << " )\n\n\n " ;
			}
			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;


		}
				else if(ch=='M'||ch=='m')
		{

		 tan:
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     Tangent FUNCTION    ::::::::::::::::::::: |\n" ;
			cout << "    | 							         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float x, y ;


			cout << "\n\tYour Equation\t: y =tanx";

			output << "\n\n\n Your Equation : y=tan(x)"<<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = -10 ;
			for(x=nsize; x<=10; x+=0.2)
			{
				y = tan(x) ;
				output << "\t|" <<setfill('-')<< setw(100*y+500) << "¤                                    " << "( " << x << " , " << y << " )\n\n\n " ;
			}
			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;
			cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;


		}
		else if(ch=='x'||ch=='X')     // exit
		{
	clrscr() ;
			cout << "\n\n\n\n\n\n\n" ;
			cout << "\t\t\t\f\f\f\f\f\f	\f\f\f       \f\f\f	\f\f\f\f\f\f  \f\f\f\f\f\f  \n" ;
			cout << "\t\t\t\f\f\f\f\f\f	 \f\f\f     \f\f\f    \f\f\f\f\f\f  \f\f\f\f\f\f \n" ;
			cout << "\t\t\t\f\f        \f\f\f   \f\f\f       \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f         \f\f\f \f\f\f        \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f\f\f\f\f      \f\f\f\f\f         \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f         \f\f\f \f\f\f        \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f        \f\f\f   \f\f\f       \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f\f\f\f\f   \f\f\f     \f\f\f    \f\f\f\f\f\f    \f\f   \n" ;
			cout << "\t\t\t\f\f\f\f\f\f  \f\f\f       \f\f\f   \f\f\f\f\f\f    \f\f   \n" ;
			getch() ;
			clrscr() ;
			}

		else    	  						  	// ROBUSTNESS
			{
				cout 	<< "\a\n\n :::::::::::::::::::::::  ERROR:  Invalid Choice  :::::::::::::::::::::::\n\n";

				goto main ;
			}

			output.close() ;
	}
