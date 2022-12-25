#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//eğik atış problem çözme programı( yapımcı : yusuf yildiz)

int main(int argc, char *argv[]) {
	int secim ;
	float hiz , hizx , hizy , hmax , menzil , g=9.81 , t , aci , a;
	
	printf("--EGIK ATIS PROBLEM COZUM PROGRAMI--\n\n");
	
	printf("(1)hiz ve aci vererek menzil , t ve hmax bulmak. \n");
	printf("(2)hmax ve menzil vererek atis acisini ve hizini bulmak. \n");
	printf("(3)hmax , t ve aci'yi vererek hiz'i bulmak. \n");
	printf("(4)menzil , t ve aci'yi vererek hiz'i bulmak. \n\n");
	printf("yapmak istediginiz islem numarasini seciniz : ");scanf("%d",&secim);

	if(secim==1){
		printf("lutfen hizi giriniz : ");
		scanf("%f",&hiz);
		printf("lutfen aci'yi giriniz : ");
		scanf("%f",&aci);
		a=aci*(3.1415/180);
		hizy=hiz*sin(a);
		hizx=hiz*cos(a);
		t=2*hizy/g;
		printf("t = %.2f s \n",t);
		menzil=hizx*t;
		printf("menzil(x) = %.2f m \n",menzil);
		hmax=(hizy*(t/2))-g*(t/2)*(t/2)*0.5 ;
		printf("hmax = %.2f m \n",hmax);
	}
	if(secim==2){
		printf("lutfen hmax'i giriniz : ");
		scanf("%f",&hmax);
		printf("lutfen menzil'i giriniz : ");
		scanf("%f",&menzil);
		aci=atan(4*hmax/menzil);
		printf("sin(aci) : %f \n",sin(aci));
		hiz=sqrt(160*g/sin(aci)*sin(aci));
		printf("hiz = %.2f m/s \n",hiz);
		aci=aci*180/3.1415;
		printf("aci = %.2f derece \n",aci);
	}
	if(secim==3){
		printf("lutfen hmax'i giriniz : ");
		scanf("%f",&hmax);
		printf("lutfen t'yi giriniz : ");
		scanf("%f",&t);
		printf("lutfen aci'yi giriniz : ");
		scanf("%f",&aci);
		a=aci* 3.1415/180;
		hiz=4*hmax/(t*sin(a));
		printf("hiz = %f m/s \n",hiz);
		menzil=hiz*cos(a)*t;
		printf("menzil = %f m \n",menzil);
	}
	if(secim==4){
		printf("lutfen menzil'i giriniz : ");
		scanf("%f",&menzil);
		printf("lutfen t'yi giriniz : ");
		scanf("%f",&t);
		printf("lutfen aci'yi giriniz : ");
		scanf("%f",&aci);
		a=aci* 3.1415/180;
		hiz=menzil/(t*cos(a));
		printf("hiz = %f \n",hiz);
		hizy=hiz*sin(a);
		hmax=hizy*hizy/(2*g);
		printf("hmax = %f",hmax);
	}
	
}