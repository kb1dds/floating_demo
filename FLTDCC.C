#include <stdio.h>

/*
!	%build
!	cc fltdcc
!	link fltdcc,dcc:flib/bot:2000
!	%end
*/

int main(){
	union{
		float f;
		long u;
	} val;

	printf("Size of float %d\n",sizeof(float));
	printf("Size of unsigned %d\n",sizeof(unsigned));
	printf("Enter floating point value: ");
	scanf("%f",&val.f);
	printf("The number %f has byte representation %04x\n",val.f,val.u);
}
                                                                                                                             