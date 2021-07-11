/* Following program is a C++ implementation of Rabin Karp  
Algorithm given in the CLRS book */
#include <iostream> 

using namespace std; 

  
// d is the number of characters in the input alphabet  
#define d 256

  
/* pat -> pattern  

    txt -> text  

    q -> A prime number  
*/

void search(char pat[], char txt[], int q)  
{  
	//this code is modified to work for 1-indexing
    int M = strlen(pat)-1;  
    int N = strlen(txt)-1;  
    int i, j;  

    int p = 0; // hash value for pattern  

    int t = 0; // hash value for txt  

    int h = int(pow(d,M-1))%q;  

    for (i = 1; i <= M; i++)  

    {  

        p = (d * p + pat[i]) % q;  

        t = (d * t + txt[i]) % q;  

    }  
cout<<"p="<<p<<endl;
cout<<"t="<<t<<endl;
 

    // Slide the pattern over text one by one  

    for (i = 0; i <= N - M; i++)  

    { 
    	 cout<<"d="<<d<<" "<<" t= "<<t<<" T[s+1]="<<txt[i+1]<<" h="<<h<<" T[s+m+1]= "<<txt[i+M+1]<<endl;

  

        // Check the hash values of current window of text  

        // and pattern. If the hash values match then only  

        // check for characters on by one  

        if ( p == t )  

        {  

            /* Check for characters one by one */

            for (j = 1; j<=M; j++)  

            {  

                if (txt[i+j] != pat[j])  

                    break; 

            }  

  

            // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]  

            if (j == M+1)  

                cout<<"Pattern found at index "<< i<<endl;  

        }  

  

        // Calculate hash value for next window of text: Remove  

        // leading digit, add trailing digit  

        if ( i < N-M )  

        {  

            t = (d*(t - txt[i+1]*h) + txt[i+M+1])%q;
            if(t<0) t+=q;
        }  

    }  
}  

  
/* Driver code */

int main()  
{  

    char txt[] = "AAABAACAADAABAABA";  

    char pat[] = "AAABA"; 

        


    int q = 41;  

      

      // Function Call 

      search(pat, txt, q);  

    return 0;  
}  

  
