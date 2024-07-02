  
   int a[5] = {6, 8, 3 , 82,45};
   
   int high = a[0];
   for (int i = 1; i < 5; i++) {
   	if(high < a[i]) {
   		high = a[i];
	   }
	   else {
	   	high = high;
	   }
   	
   }
   
   printf("%d", high);
