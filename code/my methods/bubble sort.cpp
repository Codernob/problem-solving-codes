// sorts unsorted array in ascending order
void bubblesort(int *a,int size) {
int i,j;
for(i=0;i<size-1;i++) {
for(j=0;j<size-i-1;j++) {
if(*(a+j)>*(a+j+1)) {
*(a+j)=*(a+j)+*(a+j+1);
*(a+j+1)=*(a+j)-*(a+j+1);
*(a+j)=*(a+j)-*(a+j+1);
				}	
			}	
		}
	}
