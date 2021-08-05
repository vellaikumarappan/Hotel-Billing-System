#include<iostream>
#include <string.h>
#include<conio.h>
#include <stdlib.h>
#include<iomanip>
#include "def.h"
using namespace std;
int main()
{
    int o,o1,o2,o3,o4;
    int data,price;
	string item;
    AVL b,l,S,d,b1,l1,d1,s1;
    b.insert(1,"Dosa",40);
	b.insert(2,"Idhly",10);
    b.insert(3,"Puri",30);
	b.insert(4,"Pongal",30);
	b.insert(5,"Rava Upma",40);
	b.insert(6,"Vada",10);
	b.insert(7,"Kesari",20);
	b.insert(8,"Masala Dosa",60);
	b.insert(9,"Podi Dosa",60);
	b.insert(10,"Ghee Roast",60);
	
	l.insert(11,"Meals",80);
	l.insert(12,"Sambhar Rice",50);
	l.insert(13,"Curd Rice",50);
	l.insert(14,"Coriander Rice",50);
	l.insert(15,"Mushroom Rice",50);
	l.insert(16,"Tomato Rice",50);
	l.insert(17,"Ghee Rice",50);
	l.insert(18,"Vegetable Biriyani",100);
	l.insert(19,"Paayasam",20);
	l.insert(20,"Appalam",10);
	
	S.insert(21,"Samosa",10);
	S.insert(22,"Vegetable Puffs",15);
	S.insert(23,"Kit Kat",10);
	S.insert(24,"Vada",10);
	S.insert(25,"Pepsi (1/2 L)",40);
	S.insert(26,"Miranda (1/2 L)",45);
	S.insert(27,"Fanta (1/2 L)",40);
	S.insert(28,"7 Up (1/2 L)",45);
	
	d.insert(31,"Dosa",40);
	d.insert(32,"Idhly",10);
	d.insert(33,"Puri",30);
	d.insert(34,"Pongal",30);
	d.insert(35,"Rava Upma",40);
	d.insert(36,"Vada",10);
    d.insert(37,"Kesari",20);
	d.insert(38,"Masala Dosa",60);
	d.insert(39,"Podi Dosa",60);
	d.insert(40,"Ghee Roast",60);
	
	cout<<"\n1.Order Items\n2.Alter Menu\n3.Exit\nEnter your choice : ";
	cin>>o2;
	while(o2<3){
	    switch(o2){
	    	case 1:{
	            cout<<"\n1.Breakfast\n2.Lunch\n3.Snacks\n4.Dinner\n5.Exit\nEnter your choice : ";
	            cin>>o;
	            while(o<5){
		            switch(o){
			            case 1:{
				            b.print();
				            cout<<"\nBreakfast Menu\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
				            cin>>o1;
				            while(o1<5){
					            switch(o1){
						            case 1:{
							            int x,z,n;
							            string y;
							            b1.s=0;
							            cout<<"Enter the code of item: ";
							            cin>>x;
							            cout<<"Enter the quantity: ";
							            cin>>n;
							            if(b.search(x) == 0 ){
							            	for(int i=0;i<n;i++){
							                    if(b1.search(x) == 0){
							                        b1.count(x);
							                    }
						                        else if(b1.search(x) == 1){
						    	                    y=b.srch(x);
							                        z=b.sch(x);
							                        b1.insert(x,y,z);
						                        }
						                    }
						                }
						                else{
						                	cout<<"Invalid code,Please try again... \n\n";
										}
										break;
					                }
						            case 2:{
							            int x,y;
							            b1.s=0;
							            cout<<"Enter the code of item for deletion: ";
			                            cin>>x;
			                            cout<<"Enter the  quantity  to be  deleted: ";
			                            cin>>y;
			                            if(b1.search(x) == 0){
			                                if(b1.count2(x) >= y){
											    for(int i=0;i<y;i++){
			                                	    if(b1.count2(x) == 1){
			                                		    b1.delete1(x);
			                                		    break;
												    }
												    else if(b1.count2(x) > 1){
													    b1.count1(x);
												    }
											    }
										    }
										    else{
										    	cout<<"Entered quantity is greater then ordered quantity Please enter Valid number... \n\n";
											}
							            }
							            else{
							            	cout<<"Invalid code please try again... \n\n";
										}
										break;
						            }
						            case 3:{
							            b1.frequency();
							            cout<<"\nThe total bill amount :                 "<<b1.s<<endl;
							            cout<<left<<setw(76)<<setfill('-')<<""<<endl;
							            break;
						            }
						            case 4:{
						            	b1.s=0;
										b1.deletetree();
										cout<<"\nThe old Bill was deleted, New Bill can be ordered now...\n";
										break;
									}
					            }
					            cout<<"\nBreakfast Menu\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
					            cin>>o1;
				            }
				            break;
			            }
			            case 2:{
				            l.print();
				            cout<<"\nLunch Menu\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
				            cin>>o1;
				            while(o1<5){
					            switch(o1){
						            case 1:{
							            int x,z,n;
							            string y;
							            l1.s=0;
							            cout<<"Enter the code of item: ";
							            cin>>x;
							            cout<<"Enter the quantity: ";
							            cin>>n;
							            if(l.search(x) == 0){
							            	for(int i=0;i<n;i++){
							                    if(l1.search(x) == 0){
							                        l1.count(x);
							                    }
						                        else if(l1.search(x) == 1){
						    	                    y=l.srch(x);
							                        z=l.sch(x);
							                        l1.insert(x,y,z);
						                        }
						                    }
						                }
						                else{
						                	cout<<"Invalid code Please try again... \n\n";
										}
										break;
					                }
						            case 2:{
							            int x,y;
							            l1.s=0;
							            cout<<"Enter the code of item for deletion: ";
			                            cin>>x;
			                            cout<<"Enter the quantity to be deleted: ";
			                            cin>>y;
			                            if(l1.search(x) == 0){
			                            	if(l1.count2(x) >= y){
			                                    for(int i=0;i<y;i++){
			                                	    if(l1.count2(x) == 1){
			                                		    l1.delete1(x);
			                                		    break;
												    }
												    else if(l1.count2(x) > 1){
													    l1.count1(x);
												    } 
											    }
										    }
										    else{
										    	cout<<"Entered quantity is greater then ordered quantity Please enter Valid number... \n\n";
											}
							            }
							            else{
							            	cout<<"Invalid code please try again... \n\n";
										}
										break;
						            }
						            case 3:{
							            l1.frequency();
							            cout<<"\nThe total bill amount :                 "<<l1.s<<endl;
							            cout<<left<<setw(76)<<setfill('-')<<""<<endl;
							            break;
						            }
						            case 4:{
						            	l1.s=0;
						            	l1.deletetree();
						            	cout<<"\nThe old Bill was deleted, New Bill can be ordered now...\n";
										break;
									}
					            }
					            cout<<"\nLunch Menu\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
					            cin>>o1;
				            }
				            break;
			            }
			            case 3:{
				            S.print();
				            cout<<"\nSnacks Menu\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
				            cin>>o1;
				            while(o1<5){
					            switch(o1){
						            case 1:{
							            int x,z,n;
							            string y;
							            s1.s=0;
							            cout<<"Enter the code of item: ";
							            cin>>x;
							            cout<<"Entter the quantity: ";
							            cin>>n;
							            if(S.search(x) == 0){
							            	for(int i=0;i<n;i++){
							                    if(s1.search(x) == 0){
							                        s1.count(x);
							                    }
						                        else if(s1.search(x) == 1){
						    	                    y=S.srch(x);
							                        z=S.sch(x);
							                        s1.insert(x,y,z);
						                        }
						                    }
						                }
						                else{
						                	cout<<"Invalid code Please try again... \n\n";
										}
										break;
					                }
						            case 2:{
			                            int x,y;
							            s1.s=0;
							            cout<<"Enter the  code of item for deletion: ";
			                            cin>>x;
			                            cout<<"Enter the quantity to be deleted: ";
			                            cin>>y;
			                            if(s1.search(x) == 0){
			                            	if(s1.count2(x) >= y){
			                                    for(int i=0;i<y;i++){
			                                	    if(s1.count2(x) == 1){
			                                		    s1.delete1(x);
			                                		    break;
												    }
												    else if(s1.count2(x) > 1){
													    s1.count1(x);
												    }
											    }
										    }
										    else{
										    	cout<<"Entered quantity is greater then ordered quantity Please enter Valid number... \n\n";
											}
							            }
							            else{
							            	cout<<"Invalid code please try again... \n\n";
										}
										break;
						            }
						            case 3:{
							            s1.frequency();
							            cout<<"\nThe total bill amount :                 "<<s1.s<<endl;
							            cout<<left<<setw(76)<<setfill('-')<<""<<endl;
							            break;
						            }
						            case 4:{
						            	s1.s=0;
						            	s1.deletetree();
						            	cout<<"\nThe old Bill was deleted, New Bill can be ordered now...\n";
										break;
									}
					            }
					            cout<<"\nSnacks Menu\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
					            cin>>o1;
				            }
				            break;
			            }
			            case 4:{
				            d.print();
				            cout<<"\nDinner Menu\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
				            cin>>o1;
				            while(o1<5){
					            switch(o1){
						            case 1:{
							            int x,z,n;
							            string y;
							            d1.s=0;
							            cout<<"Enter the code of item: ";
							            cin>>x;
							            cout<<"Enter the quantity: ";
							            cin>>n;
							            if(d.search(x) == 0){
							            	for(int i=0;i<n;i++){
							                    if(d1.search(x) == 0){
							                        d1.count(x);
							                    }
						                        else if(d1.search(x) == 1){
						    	                    y=d.srch(x);
							                        z=d.sch(x);
							                        d1.insert(x,y,z);
						                        }
						                    }
						                }
						                else{
						                	cout<<"Invalid code pls try again... \n\n";
										}
										break;
					                }
						            case 2:{
			                            int x,y;
							            d1.s=0;
							            cout<<"Enter the code of item for deletion: ";
			                            cin>>x;
			                            cout<<"Enter the quantity to be deleted: ";
			                            cin>>y;
			                            if(d1.search(x) == 0){
			                            	if(d1.count2(x) >= y){
			                                    for(int i=0;i<y;i++){
			                                	    if(d1.count2(x) == 1){
			                                		    d1.delete1(x);
			                                		    break;
												    }
												    else if(d1.count2(x) > 1){
													    d1.count1(x);
												    }
											    }
										    }
										    else{
										    	cout<<"Entered quantity is greater then ordered quantity Please enter Valid number... \n\n";
											}
							            }
										else{
											cout<<"Invalid code please try again... \n\n";
										}
										break;
						            }
						            case 3:{
							            d1.frequency();
							            cout<<"\nThe total bill amount :                 "<<d1.s<<endl;
							            cout<<left<<setw(76)<<setfill('-')<<""<<endl;
							            break;
						            }
						            case 4:{
						            	d1.s=0;
						            	d1.deletetree();
						            	cout<<"\nThe old Bill was deleted, New Bill can be ordered now...\n";
										break;
									}
					            }
					            cout<<"\nDinner Menu\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
					            cin>>o1;
				            }
				            break;
			            }
		            }
		            cout<<"\n1.Breakfast\n2.Lunch\n3.Snacks\n4.Dinner\n5.Exit\nEnter your choice : ";
					cin>>o;
	            }
                break;
			}
			case 2:{
				int I=1234;
				char cass[30]={'S','v','2','!','$','5'};
				int p;
				cout<<"\nEnter UserID: ";
				cin>>p;
	            cout<<"\nEnter Password: ";
	            char pass[30];
	            int i=0;
	            char a;
	            for(i=0;;){
		            a=getch();
		            if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a>='!'&&a<='@')){
			            pass[i]=a;
			            ++i;
			            cout<<"*";
		            }
		            if(a=='\b'&&i>=1){
			            cout<<"\b \b";
			            --i;
		            }
		            if(a=='\r'){
			            pass[i]='\0';
			            break;
		            }
	            }
	            
	            if(i<=5){
		            cout<<"\nMinimum 6 digits needed...";
	            }

	            int g;
	            
				if(p == I){
					for(int i=0;i<6;){
						if(pass[i] == cass[i]){
							g = 1;
							i++;
						}
						else{
							g = 0;
							break;
						}
					}
					
					if(g == 1){
				        cout<<"\n\nAlter Menu\n1.Breakfast\n2.Lunch\n3.Snacks\n4.Dinner\n5.Exit\nEnter your choice : ";
	                    cin>>o3;
	                    while(o3<5){
		                    switch(o3){
			                    case 1:{
				                    cout<<"\n\nAlter Menu\nBreakfast Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
				                    cin>>o4;
				                    while(o4<5){
					                    switch(o4){
						                    case 1:{
						            	        int x,z;
						            	        string y;
							                    cout<<"Enter item code to be inserted: ";
			                                    cin>>x;
			                                    if(b.search(x) == 1){
			                                        cout<<"Enter item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter price for the item: ";
			                                        cin>>z;
											        b.insert(x, y, z);
			                                        cout<<"The Item is Inserted to the Menu... \n\n";
										        }
						                        else if(b.search(x) == 0){
						                	        cout<<"Entered code already exist .Use other code... \n\n";
										        }
										        break;
					                        }
						                    case 2:{
						            	        int x;
							                    cout<<"Enter the item code to be deleted: ";
			                                    cin>>x;
			                                    if(b.search(x) == 0){
			                                        b.delete1(x);
							                        cout<<"The Item is deleted from the menu... \n\n";
									            }
									            else{
									    	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 3:{
						            	        int x,z;
						            	        string y;
							                    cout<<"Enter item code to be updated: ";
			                                    cin>>x;
			                                    if(b.search(x) == 0){
			                                        cout<<"Enter new item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter new price for the item: ";
			                                        cin>>z;
													b.update(x, y, z);
			                                        cout<<"Item is updated successfully... \n\n";
							                    }
							                    else{
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 4:{
						            	        b.print();
										        break;
									        }
					                    }
					                    cout<<"\n\nAlter Menu\nBreakfast Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
					                    cin>>o4;
				                    }
				                    break;
			                    }
			                    case 2:{
				            
				                    cout<<"\n\nAlter Menu\nLunch Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
				                    cin>>o4;
				                    while(o4<5){
					                    switch(o4){
						                    case 1:{
							                    int x,z;
						            	        string y;
							                    cout<<"Enter item code to be inserted: ";
			                                    cin>>x;
			                                    if(l.search(x) == 1){
			                            	        cout<<"Enter item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter price for the item: ";
			                                        cin>>z;
			                                        l.insert(x, y, z);
						                            cout<<"The Item is Inserted to the Menu... \n\n";
						                        }
						                        else{
						                	        cout<<"Entered code already exist .Use other code... \n\n";
										        }
										        break;
					                        }
						                    case 2:{
							                    int x;
							                    cout<<"Enter the item code to be deleted: ";
			                                    cin>>x;
			                                    if(l.search(x) == 0){
			                                        l.delete1(x);   
							                        cout<<"The Item is deleted from the menu... \n\n";
							                    }
							                    else{
							            	        cout<<"Entere code is not Exist Please used to Valid code... \n\n";
										        }
										        break;
						                    }
						                    case 3:{
						            	        int x,z;
						            	        string y;
							                    cout<<"Enter item code to be updated: ";
			                                    cin>>x;
			                                    if(l.search(x) == 0){
			                                        cout<<"Enter new item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter new price for the item: ";
			                                        cin>>z;
													l.update(x, y, z);
			                                        cout<<"Item is updated successfully... \n\n";
							                    }
							                    else{
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 4:{
						            	        l.print();
										        break;
									        }
					                    }
					                    cout<<"\n\nAlter Menu\nLunch Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
					                    cin>>o4;
				                    }
				                    break;
			                    }
			                    case 3:{
				            
				                    cout<<"\n\nAlter Menu\nSnacks Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
				                    cin>>o4;
				                    while(o4<5){
					                    switch(o4){
						                    case 1:{
							                    int x,z;
						            	        string y;
							                    cout<<"Enter item code to be inserted: ";
                                                cin>>x;
			                                    if(S.search(x) == 1){
			                            	        cout<<"Enter item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter price for the item: ";
			                                        cin>>z;
			                                        S.insert(x, y, z);
						                            cout<<"The Item is Inserted to the Menu... \n\n";
						                        }
						                        else{
						                	        cout<<"Entere code is Already Exist Please used to other code... \n\n";
										        }
										        break;
					                        }
						                    case 2:{
							                    int x;
							                    cout<<"Enter the item code to be deleted: ";
			                                    cin>>x;
			                                    if(S.search(x) == 0){
			                                        S.delete1(x);   
							                        cout<<"The Item is deleted from the menu... \n\n";
							                    }
							                    else{
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 3:{
						            	        int x,z;
						            	        string y;
							                    cout<<"Enter item code to be updated: ";
			                                    cin>>x;
			                                    if(S.search(x) == 0){
			                                        cout<<"Enter new item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter new price for the item: ";
			                                        cin>>z;
													S.update(x, y, z);
			                                        cout<<"Item is updated successfully... \n\n";
							                    }
							                    else{
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 4:{
						            	        S.print();
										        break;
									        }
					                    }
					                    cout<<"\n\nAlter Menu\nSnacks Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
					                    cin>>o4;
				                    }
				                    break;
			                    }
			                    case 4:{
				            
				                    cout<<"\n\nAlter Menu\nDinner Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
				                    cin>>o4;
				                    while(o4<5){
					                    switch(o4){
						                    case 1:{
							                    int x,z;
						            	        string y;
							                    cout<<"Enter item code to be inserted: ";
			                                    cin>>x;
			                                    if(d.search(x) == 1){
			                            	        cout<<"Enter item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter price for the item: ";
			                                        cin>>z;
			                                        d.insert(x, y, z);
						                            cout<<"The Item is Inserted to the Menu... \n\n";
						                        }
						                        else{
						                	        cout<<"Entered code already exist .Use other code... \n\n";
										        }
										        break;
					                        }
						                    case 2:{
							                    int x;
							                    cout<<"Enter the item code to be deleted: ";
			                                    cin>>x;
			                                    if(d.search(x) == 0){
			                                        d.delete1(x);   
							                        cout<<"The Item is deleted from the menu... \n\n";
							                    }
							                    else{
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 3:{
						            	        int x,z;
						            	        string y;
							                    cout<<"Enter item code to be updated: ";
			                                    cin>>x;
			                                    if(d.search(x) == 0){
			                                        cout<<"Enter new item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter new price for the item: ";
			                                        cin>>z;
													d.update(x, y, z);
			                                        cout<<"Item is updated successfully... \n\n";
							                    }
							                    else{
							            	        cout<<"Entered code is not Exist Please used to other code... \n\n";
										        }
										        break;
						                    }
						                    case 4:{
						            	        d.print();
										        break;
									        }
					                    }
					                    cout<<"\n\nAlter Menu\nDinner Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
					                    cin>>o4;
				                    }
				                    break;
			                    }
		                    }
		                    cout<<"\n\nAlter Menu\n1.Breakfast\n2.Lunch\n3.Snacks\n4.Dinner\n5.Exit\nEnter your choice : ";
					        cin>>o3;
	                    }
	                }
	                else if(g == 0){
	            	    cout<<"\nPlease Enter the currect Password...\n";
				    }
			    }
			    else{
			    	cout<<"\nPlease Enter the currect UserID & Password...\n";
				}
				break;
			}
        }
        cout<<"\n1.Order Items\n2.Alter Menu\n3.Exit\nEnter your choice : ";
	    cin>>o2;
    }
    return 0;
}
