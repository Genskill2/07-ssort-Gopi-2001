void swap_max(int []arr, int end, int start){
 int max = arr[start];
 int found = start;
 for(int i = start+1;i<end;i++){
 if(arr[i]>max){ max = arr[i];
               found = i;
               }
 }
  int temp = arr[start]
  arr[start] = max;
  arr[found] = temp;
}
void ssort(int []arr, int l){
for(int i = 0;i<l;i++){
swap_max(arr,l,i);
}

}
