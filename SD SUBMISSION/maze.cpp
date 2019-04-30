
#include <iostream> 

#include <ctime>
using namespace std; 


int arr[10][10]={{1,1,1,1,0,0,0,0,0,0},
                 {0,0,1,1,0,1,1,1,0,0},
                 {0,0,0,1,1,1,0,1,0,0},
                 {0,0,0,1,0,0,0,1,0,0},
                 {0,0,0,1,0,0,0,1,0,0},
                 {0,0,0,1,1,1,0,1,1,0},
                 {0,0,0,0,0,1,0,0,1,0},
                 {0,0,0,0,1,1,0,0,1,0},
                 {0,0,0,0,1,0,0,0,1,0},
                 {0,0,0,0,1,1,1,1,1,1}};
int track[10][10];
int i,j,f,n;
char m,l,r,u,d,q;
clock_t time_req;
int x=0,y=0;

/*// function to display the timer 
void displayClock() 
{ 
    rat();
    // system call to clear the screen 
    system("clear"); 
  
    cout << setfill(' ') << setw(55) << "         TIMER         \n"; 
    cout << setfill(' ') << setw(55) << " --------------------------\n"; 
    cout << setfill(' ') << setw(29); 
    cout << "| " << setfill('0') << setw(2) << hours << " hrs | "; 
    cout << setfill('0') << setw(2) << minutes << " min | "; 
    cout << setfill('0') << setw(2) << seconds << " sec |" << endl; 
    cout << setfill(' ') << setw(55) << " --------------------------\n"; 
     
} 
  
  


void timer() 
{ 
    // infinte loop because timer will keep  
    // counting. To kill the process press 
    // Ctrl+D. If it does not work ask 
    // ubuntu for other ways. 
    
    while (true) { 
          
        // display the timer 
        displayClock(); 
        
  
        // sleep system call to sleep  
        // for 1 second 
        sleep(1); 
  
        // increment seconds 
        seconds++; 
  
        // if seconds reaches 60 
        if (seconds == 60) { 
          
            // increment minutes 
            minutes++; 
  
            // if minutes reaches 60 
            if (minutes == 60) { 
          
                // increment hours 
                hours++; 
                minutes = 0; 
            } 
            seconds = 0; 
        } 
    }
    
}*/ 
  

int main ()
{
 cout<<"in main \n \n";
for(f=0;f<10;f++)
{
for(n=0;n<10;n++)
{
track[m][n]=0;
}
}

//timer();

cout<<"**************************************************************************************************\n";
cout<< "--------------------------------------LETS START--------------------------------------------------\n";
cout<<"****************************************************************************************************\n";

 
time_req = clock();
cout<<" r=right , l=left ,  u=up  ,  d=down  \n \n";
i=0,j=0;
cout<<"  ";



do
{
if(i!=9 || j!=9)
{

cout<<"----------------------------------------------------------------------------------------  \n";
cout<<"    0123456789\n";
cout<<" ";
for(f=0;f<10;f++)
{ cout<<f<<"  ";
for(n=0;n<10;n++)
{

cout<<arr[f][n];


} cout<<" \n ";
}
 

cout<<" enter your move r / l / u / d  \n ";
cin>>m;


switch(m)
{
case'u':
if(arr[i-1][j]==1)
{
track[i-1][j]=1;
i=i-1;
cout<<" current location("<<i<<","<<j<<") \n";
}
else{
cout<<"error!! wall ahead this move is not possible \n";
cout<<" current location("<<i<<","<<j<<") \n";
     }
break;




case 'd':
if(arr[i+1][j] ==1)
{
track[i+1][j]=1;
i=i+1;
cout<<" current location("<<i<<","<<j<<") \n";

}
else  {
cout<<"error!! wall ahead this move is not possible \n";
cout<<" current location("<<i<<","<<j<<") \n";
       }
break;




case 'r':
if(arr[i][j+1] ==1)
{
track[i][j+1]=1;
j=j+1;
cout<<" current location("<<i<<","<<j<<") \n";

}
else    {
cout<<"error!! wall ahead this move is not possible \n";
cout<<" current location("<<i<<","<<j<<") \n";
	 }
break;




case 'l':
if(arr[i][j-1] ==1)
{
track[i][j-1]=1;
j=j-1;
cout<<" current location("<<i<<","<<j<<") \n";

}
else      {
cout<<"error!! wall ahead this move is not possible \n";
cout<<" current location("<<i<<","<<j<<") \n";   }
break;




}

}

else 
//if(i==9&&j==9)
{
i++;
j++;
cout<<"\n \n \n \n";

x = clock() - time_req;
y=y+x;

cout<<"***************************************************************************** \n";
cout<<"                           !!!CONGRATULATIONS!!!                              \n";
cout<<"                                 YOU WIN                                      \n";
cout<<"******************************************************************************\n";


cout<<" \n \n \n \n";

cout<<" RAT'S TRACK WAS \n";

for(f=0;f<10;f++)
{
for(n=0;n<10;n++)
{
cout<<track[f][n];
}
cout<<"\n";
}

cout <<"Time required to complete the game was"<< (float)y/CLOCKS_PER_SEC << " seconds" << endl;
cout<<"\n \n \n";
}


}while(i!=10&&j!=10);


return 0;
}







