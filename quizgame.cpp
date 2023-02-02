#include <iostream> 

using namespace std; 


// need to find out how to clear the screen after every input 


class gameshit{
private:

public:
string name, yehno; 




  char answer;
    int score = 0;


void playmenu(){   // ready to play menu 

    
    cout<<"NBA Quiz\n\nWhat is your name?\n";
    cin>> name;
    // clear screen
    cout<<"\nAre you ready to play "<< name<<"?\n";
    cout<<"Enter - yes or no: ";
    cin>>yehno;
    // clear screen

    if (yehno == "yes"){
        cout<<"Good Luck, The Games Will Begin Momentarily...";    // wait 3 seconds then clear msg
        

    }
    else if(yehno == "no"){
        cout<<"asdf"; // return to main menu

    }
    else{
        cout<<"Please enter yes or no input"; // loop back to question 
    }
}


void question1(){

//-------------------------------------------------------
    cout<<"-----------------------------------------\n";
    cout<<"Total Score: " << score;
    cout<<"\n-----------------------------------------\n";
    cout<< "What team was Kobe Byrant drafted by?\na. Lakers\nb. Pistons\nc. Hawks\nd. Magic";
    cout<<"\n\n\n\n\n\n\nEnter your answer: ";
    cin >> answer;

    if(answer=='a'){
        score = score +10;
        cout<<"That is correct!     +10 points for dat cuz\n";}
    else if(answer == 'b'|| answer=='c'|| answer=='d'){cout<<"That is incorrect ;( ";}
    else{cout<<"Please enter a valid option.";}
    
//-------------------------------------------------------

}


void scoremenu(){

cout<< "Highest Score'ers"<<endl;
cout<<name << "has a score of "<< score;


}





};










int main() 
{ 

    gameshit game1;
    int input;

  cout << "Welcome to the NBA Quiz Game\n\nPress Enter to Start...";
    cin.get();
    // clear screen

    cout<<"Menu Options:\n\n1. Start Game\n2. View High Score's\n3. View Help Menu\n4. Quit\n\n\nEnter Option:";
    cin>> input;
// clear this after iunput


switch(input){
    case 1:
    game1.playmenu();
    break;

    case 2:
    game1.scoremenu();
// option 2
// list of high scores with the highest at the top 

    break;

    case 3:
    cout<<"help";
    break;

    case 4:
    cout<<"Game Over\n";
    return 0;
    break;

  
    

}


    // class game start // these are where all the questions go, 1-10, in a row.
  game1.question1();
cout<< "Total Score: " << game1.score;

// clear screen


//then at the end of the game, tell them score congraulate them, as if they would like to play again - if so loop the questions, 
// if not go back to main menu
 

















   return 0; 
} 






// so from my understanding 
// cin.get(); - you enter a string and then press enter , that enter is a character deliminator 
// cin.ignore(); ignores that character delimatoor