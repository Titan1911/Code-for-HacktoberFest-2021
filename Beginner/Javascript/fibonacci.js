let n=10;
var arr=[];
arr[0]=0;
arr[1]=1;

for(var i=0;i<n;i++){
    if(i>1){
        arr[i]=arr[i-1]+arr[i-2];
    }
    console.log(arr[i]);
}
