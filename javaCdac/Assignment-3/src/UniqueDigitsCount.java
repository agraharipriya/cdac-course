public class UniqueDigitsCount{
    public static void main(String args[]){
        int [] digits={1,2,3,4};
        int count=0;
        for(int i=0;i<digits.length;i++){
            for(int j=0;j<digits.length;j++){
                for(int k=0;k<digits.length;k++){
                    if(i!=j && i!=k && j!=k){
                        int num=digits[i]*100+ digits[j]*10+digits[k];
                        System.out.println(num);
                        count++;
                    }
                }
            }
        }
        System.out.println("Total number of the three-digit-number is "+count);
    }
}


//--------------------------------------------output---------------------------
/*123
124
132
134
142
143
213
214
231
234
241
243
312
314
321
324
341
342
412
413
421
423
431
432
Total number of the three-digit-number is 24 */



