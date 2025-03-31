int isPrime(int num){
    int k=0;
    for(int s=1;s<=num;s++){
        if(num%s==0){
            k++;
        }
    }
    if(k==2){
        return 1;
    }
    else{
        return 0;
    }
}