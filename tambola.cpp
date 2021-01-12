#include<iostream>
#include<stdlib.h>
#include<unordered_map>
#include<ctime>
#include<windows.h>
using namespace std;
int main(){
    char ans;
do{
  int x[9][10];
  int count=1;
  unordered_map<int,int> map;
  for(int i=1;i<=90;i++)
  {
    map[i]=0;
  }
  cout<<"Loading...";
  system("CLS");
  std::cout<<"\t\t\t\t TAMBOLA\n\n\n\n";
  std::cout<<" Press Enter to start the game!";
  std::cin.get();
  while(count<=90)
  {
    system("CLS");
    std::cout<<"\t\t\t\t TAMBOLA\n\n\n\n";
    srand(time(0));
    int num=1;
    for(int i=0;i<9;i++)
    {
      for(int j=0;j<10;j++)
      {
        if(map[num] == 1)
          {
            std::cout<<num<<"\t";
            num++;
          }
        else
          {
            std::cout<<"_\t";
            num++;
          }
      }
      std::cout<<endl<<endl;
    }
    std::cout<<"\t\t Press Enter to generate the next number: ";
    //std::cin.ignore();
    int number;
    while(true){
        number= rand()%90 + 1;
        if(map[number]==0)
            break;
    }
    map[number]=1;
    count++;
    cout<<number<<endl<<endl<<endl;
    std::cin.get();

  }
    int flag=0;
    while(flag == 0)
    {
    system("CLS");
    std::cout<<"\t\t\t\t TAMBOLA\n\n\n\n";
    int num=1;
    for(int i=0;i<9;i++)
    {
      for(int j=0;j<10;j++)
      {
        if(map[num] == 1)
          {
            std::cout<<num<<"\t";
            num++;
          }
        else
          {
            std::cout<<"_\t";
            num++;
          }
      }
      std::cout<<endl<<endl;
    }
    std::cout<<"\t The game has ended. Do you want to play again?(y/n): ";
    std::cin>>ans;
    if(ans == 'n'|| ans == 'N'){
        flag = 1;
    }
    else if(ans == 'y'|| ans == 'Y'){
        flag = 2;
    }
    else{
        std::cout<<"Please enter either y or n.";
        Sleep(3000);
    }
    }
    if(flag == 1)
    {
        break;
    }

}while(ans == 'y'|| ans == 'Y');
cout<<"\n\n Thank you for Playing!";
Sleep(10000);

}
