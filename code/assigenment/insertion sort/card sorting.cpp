#include <iostream>
using namespace std;
int compare(char character1,char character2) {
	if(character1=='2' && character2=='J') return 1;
	else if(character1=='2' && character2=='Q') return 1;
	else if(character1=='2' && character2=='K') return 1;
	else if(character1=='2' && character2=='A') return 1;
	else if(character1=='J' && character2=='Q') return 1;
	else if(character1=='J' && character2=='K') return 1;
	else if(character1=='J' && character2=='A') return 1;
	else if(character1=='Q' && character2=='K') return 1;
	else if(character1=='Q' && character2=='A') return 1;
	else if(character1=='K' && character2=='A') return 1;
	else return 0;
	}
int insertionSort(char array[]) 
{	
	int numberOfComparisons=0;
    int i,j;
    char temporaryVariable;
    i=1;
    while(i<5) 
    {
        temporaryVariable=array[i];
        j=i-1;
        while(j>=0 && compare(array[j],temporaryVariable)==1) 
        {
            array[j+1]=array[j];
            j--; 
            numberOfComparisons++;
        }
        array[j+1]=temporaryVariable;
    i++; 
    }
return numberOfComparisons;
}

int main() {
char a[5];
for(int i=0;i<5;i++) scanf("%c ",&a[i]);
cout<<insertionSort(a)<<endl;
return 0;
}
