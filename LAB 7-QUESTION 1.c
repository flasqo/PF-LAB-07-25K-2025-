#include <stdio.h>

int main() {
    float prices[10], discounted[10];
    float total = 0;
    
    printf("Enter prices of 10 products:\n");
    for(int i = 0; i < 10; i++) {
        printf("Product %d: ", i+1);
        scanf("%f", &prices[i]);
        

  if(prices[i] < 1000)
  discounted[i] = prices[i] * 0.95;       
   else if(prices[i] <= 5000)
            discounted[i] = prices[i] * 0.90;      
        else
            discounted[i] = prices[i] * 0.85;      
        
        total += discounted[i];
    }
    
    printf("\nItem-wise discounted prices:\n");
    for(int i = 0; i < 10; i++) {
        printf("Product %d: Rs. %.2f\n", i+1, discounted[i]);
    }
    

    printf("\nTotal after discount: Rs. %.2f\n", total);
    
    if(total > 25000)
        printf("Congratulations! You earned a Gold Voucher.\n");
    else
        printf("No voucher earned.\n");
    
    return 0;
}