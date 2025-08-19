#include <stdio.h>

int exists(int map[], int n, int val){
    for(int i = 0; i < n * 2; i = i + 2){
        if(map[i] == val){
            return(i);
        }
    }
    return(-1);
}

int main() {
	int cases;
	scanf("%d", &cases);
	for(int c = 0; c < cases; c++){
	    int n;
	    scanf("%d", &n);
	    int arr[n * 2];
	    int map[n * 2];
	    int r = 0;
	    for(int i = 0; i < n * 2; i++){
	        arr[i] = 0;
	        map[i] = 0;
	    }
	    
	    
	    for(int i = 0; i < n*2; i++){
	        scanf("%d", &arr[i]);
	        int t = exists(map, n, arr[i]);
	        if(t != -1){
	            map[t + 1] = map[t + 1] + 1;
	        }
	        else{
	            map[r] = arr[i];
	            map[r + 1] = 1;
	            r = r + 2;
	        }
	    }
	    
	    int broke = 0;
	    for(int i = 1; i < n*2; i = i + 2){
	        if(map[i] > 2){
	            broke = 1;
	            break;
	        }
	    }
	    
	    if(broke){
	        printf("no\n");
	    }
	    else{
	        printf("yes\n");
	    }
	}

}

