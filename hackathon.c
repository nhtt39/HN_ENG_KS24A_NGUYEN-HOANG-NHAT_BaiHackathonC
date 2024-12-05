#include <stdio.h>
int main(){
	int n=0;
	int arr[100];
	int chose;
	int min;
	int max;
	int sum;
	int addIndex;
	int deleteIndex;
	int count=0;
	int item;
	int flag=0;
	int flagg;
	do{
		printf("MENU\n");
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf("2.In ra cac gia tri phan tu trong mang\n");
		printf("3.Tim gia tri nho nhat va lon nhat\n");
		printf("4.In ra tong cua tat ca phan tu\n");
		printf("5.Them mot phan tu vao cuoi mang\n");
		printf("6.Xoa phan tu tai mot vi tri\n");
		printf("7.Sap xep mang theo thu tu giam dan\n");
		printf("8.Kiem tra phan tu co trong mang hay khong\n");
		printf("9.In ra toan bo so nguyen to trong mang\n");
		printf("10.Sap xep mang theo thu tu tang dan\n");
		printf("11.Thoat\n");
		scanf("%d",&chose);
		
	switch(chose){
		case 1:
			printf("Nhap so phan tu cua mang: ");
			scanf("%d",&n);
			for(int i=0; i<n; i++){
				printf("Nhap gia tri thu %d cua mang: ",i+1);
				scanf("%d",&arr[i]);
			}
			break;
		case 2:
			if(n==0){
				printf("Mang chua duoc nhap\n");
			}
			for(int i=0;i<n;i++){
				printf("arr[%d]=%d\t",i,arr[i]);
			}printf("\n");
			break;
		case 3:
			if(n==0){
				printf("Mang chua duoc nhap\n");
			}
			for(int i=0;i<n;i++){
				min=arr[0];
				if(arr[i]<min){
					min=arr[i];
				}
			}printf("Gia tri nho nhat la %d\n",min);
			for(int i=0;i<n;i++){
				max=arr[0];
				if(arr[i]>max){
					max=arr[i];
				}
			}printf("Gia tri lon nhat la %d\n",max);
			break;
		case 4:
			if(n==0){
				printf("Mang chua duoc nhap\n");
			}
			for(int i=0;i<n;i++){
				sum+=arr[i];
			}printf("Tong cua cac phan tu trong mang la: %d\n",sum);
			break;
		case 5:
			printf("Moi ban nhap phan tu muon them :\n");
			scanf("%d",&addIndex);
			arr[n++]=addIndex;
			break;
		case 6:
    		printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
    		scanf("%d", &deleteIndex);
    		if (deleteIndex < 0 || deleteIndex >= n) {
      		  	printf("Vi tri khong hop le\n");
    	    	return 1;
    		}
    		for (int i = deleteIndex; i < n - 1; i++) {
        	arr[i] = arr[i + 1];
   	 		}
    		n--;
    		printf("Mang sau khi xoa: ");
    		for (int i = 0; i < n; i++){
        		printf("%d ", arr[i]);
    		}
    		printf("\n");
			break;
		case 7:
			if(n==0){
				printf("Mang chua duoc nhap\n");
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n-i-1;j++){
				if(arr[j]<arr[j+1]){
					int temp;
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
				}
			}printf("Mang sau khi sap xep la:\n");
			for(int i=0;i<n;i++){
				printf("%d\t",arr[i]);
			}printf("\n");
			break;
		case 8:
			if(n==0){
				printf("Mang chua duoc nhap\n");
			}
			printf("Nhap phan tu ma ban muon kiem tra:\n");
			scanf("%d",&item);
			for(int i=0;i<n;i++){
				if(item==arr[i]){
					count++;
				}if(count!=0){
				printf("Trong mang co ton tai phan tu %d\n",item);
				break;
				}else if(count==0){
					printf("Trong mang khong ton tai phan tu %d\n",item);
					break;
				}
			}
			break;
		case 9:
			if(n==0){
				printf("Mang chua duoc nhap\n");
			}for(int i=0;i<n;i++){
				if(arr[i]==1||arr[i]==2){
					printf("So nguyen to trong mang la %d\n",arr[i]);
					flag++;
				}for(int j=2;j<arr[i];j++){
					if(arr[i] % j==0){
						printf("%d khong phai so nguyen to",arr[i]);
					}else{
						printf("So nguyen to trong mang la %d\n",arr[i]);
						flag++;
					}
				}
			}if(flag==0){
				printf("Khong co so nguyen to nao trong mang\n");
			}
			break;
		case 10:
			if(n==0){
				printf("Mang chua duoc nhap\n");
			}
			printf("Mang ban dau:\n ");
   	 		for (int i = 0; i < n; i++) {
        		printf("%d\t ", arr[i]);
    		}
			for (int i = 0; i < n - 1; i++) {
        		int minIndex = i;     
        	for (int j = i + 1; j < n; j++) {
           		if (arr[j] < arr[minIndex]) {
                	minIndex = j;
            	}
        	}
        	if (minIndex != i) {
        		int temp;
            	temp = arr[i];
            	arr[i] = arr[minIndex];
            	arr[minIndex] = temp;
        	}
    		}printf("\nMang sau khi sap xep:\n ");
    		for (int i = 0; i < n; i++) {
        		printf("%d\t ", arr[i]);
    		}printf("\n");
			break;
		case 11:
			break;
}
	}while(chose!=11);


	
	return 0;
}
