#include<stdio.h> //������ ������������ �����-������
#include<conio.h> /*������ ������� ���������� �����-������*/
#include<windows.h>
#include<math.h> //���������� ���������� �������������� �������

	FILE *fp, *fp1, *fp2;

	
void main()
{ 
	int i=0,z=0,n=0; // ���������� ������ ������ � slowsl
	int glasn,per=0; // ���������� ������� � ����� per ���� �� ��� ����������
	int mznak=1;
	int nslow; // ������ �����
	int pk=1; // ������ �� �� ���� ������� ����� �����
	char slow[40],slowsl[40]; // ����� ���������� �� ����� slowsl ����� ����������� �� ������ ������� ����� ������� � ����
	int slows[40];				// ����� ���� � ������
	int x1, x2, x3, x4, x5, x6, x7,x8, kbukv,k,f=0, Sglasn=0,fl=0;    // kbukv ������� ���� � ����� ��������
	fp=fopen("E:\\A.txt","rt");  // ���� � ��������� �������
	fp1=fopen("E:\\B.txt","wt"); // ����� �����;
	fp2=fopen("E:\\C.txt","wt"); // ����� �� ������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//��������� ����� �� ��������� ������������ ���������� �������. ���� ������ ��� ������ � braik 
	for(i=0;i<40;i++)  // ������ ������ ����� 
	{
		slowsl[i]='\0';
	}
	while((fscanf(fp,"%s",slow))!=EOF) // ��������� ����� ���� �� ����� �����
		{
			i=0;glasn=0; z=0; n=0; Sglasn=0; kbukv=0; per=0; mznak=1;
			f=0; x1=-1; x2=-1; x3=-1; x4=-1; x5=-1; x6=-1; x7=-1; k=0; fl=0;
			while(slow[i]!='\0')   // ���� ������������ ����� �����
			{
				switch(slow[i])
				{
				case '�' : glasn++; slows[z]=1; break;
				case '�' : glasn++; slows[z]=1; break;
				case '�' : glasn++; slows[z]=1; break;
				case '�' : glasn++; slows[z]=1; break;
				case '�' : glasn++; slows[z]=1; break;
				case '�' : glasn++; slows[z]=1; break;
				case '�' : glasn++; slows[z]=1; break;
				case '�' : glasn++; slows[z]=1; break;
				case '�' : glasn++; slows[z]=1; break;
				case '�' : glasn++; slows[z]=1; break;
				
				case '�' : slows[z]=2; break;
				case '�' : slows[z]=2; break;
				case '�' : slows[z]=2; break;
				case '�' : slows[z]=2; break;
				case '�' : slows[z]=2; break;

				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=3; break;
				case '�' : slows[z]=4; break;
				case '-' : z--;k=i; while(slow[i]!='\0') { slow[i]=slow[i+1]; i++; } i=k-1; break;
				default : slows[z]=4;  //������� ����;
				}
				fprintf(fp1, "%d", slows[z]); // ������ ����� � ����
				z++;
				i++;
			}
			fprintf(fp1, "\n", slows[z]);
			slow[i]='\n';
			slow[i+1]='\0';
			i=0;
	kbukv=z+1;  // ���������� ���� � ����� -- ����� ���������� ���������� ����
	nslow=1;
//	slows[z]<0 ;  ������� ��������� ������ ����� �����
	z=0;
	if(glasn>1)         // ���� ������ ����� �������
	{
	while(slows[z]>-1)  // ���� ���� �� ����� �����
	{
		pk=0;
		if(nslow==1)
		{
			x1=slows[z+0];
			x2=slows[z+1];
			x3=slows[z+2];
			x4=slows[z+3];
			x5=slows[z+4];
			x6=slows[z+5];
			x7=slows[z+6];
			x8=slows[z+7];
			if(((x1==3 && x2==1 && x3==2 && x4==3 && x5==2) ||
				(x1==3 && x2==2 && x3==1 && x4==2 && x5==3) ||
				 (x1==3 && x2==1 && x3==2 && x4==3 && x5==3)) && x6!=1)//31232 32123 31233 �����
			{
				for(i=0;i<5;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				slowsl[n++]='-';
				fl=1;
				nslow=0;
				glasn--;
				pk=1;
			}
			if(nslow && (x1==3 && x2==3 && x3==2 && x4==1) && (x5==2 || x5==3) && x6!=1) //33213 33212
			{
				for(i=0;i<5;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				slowsl[n++]='-';
				fl=1;
				nslow=0;
				glasn--;
				pk=1;
			}
			if(nslow && x1==3 && x2==3 && x3==1 && x4==3 && x5!=1) // 3313 ���� ����
			{
				for(i=0;i<4;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				i=z;  // ���� ��������� ��������� ����� ������ ������
				while(slows[i]>0 && slows[i]!=4 && (slows[i]==2 || slows[i]==3)) i++;
				if(slows[i]==4)
				{
					k=i-z+1;
					for(i=0;i<k;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				}
				slowsl[n++]='-';
				fl=1;
				nslow=0;
				glasn--;
				pk=1;
			}
			if(nslow && slow[z]=='�' && slow[z+1]=='�' && slow[z+2]=='�' && slow[z+3]=='�')
			{
				{
				for(i=0;i<4;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				slowsl[n++]='-';
				fl=1;
				nslow=0;
				glasn--;
				pk=1;
				if(x5==1 && x6==2 && x7==3 && x8!=1) //2123-123- ����-���
				{
					k=z;
					for(i=z;i<k+3;i++,n++,kbukv--,z++) slowsl[n]=slow[z]; 
					slowsl[n++]='-';
					glasn--;
					pk=1;
				}
			}
			}
			if(nslow && x1==2 && x2==1 && x3==2 && x4==3 && x5!=1) //2123 � �� 1
			{
				for(i=0;i<4;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				slowsl[n++]='-';
				fl=1;
				nslow=0;
				glasn--;
				pk=1;
			}
			if(nslow && (((x1==2 || x1==3) && x2==1 && x3==3) || 
				(x1==1 && x2==2 & x3==3)) &&  x4!=1) //213 313 123
			{
				if(x4==4) for(i=0;i<4;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				else for(i=0;i<3;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				slowsl[n++]='-';
				fl=1;
				nslow=0;
				glasn--;
				pk=1;
			}
			if(nslow && x1==3 && x2==3 && x3==1 && x4==2 && x5==3 && x6!=1) //33123
			{  
				glasn--;
				if(glasn>1) // ���� ���� ���� ����� ���� 1 ������ ���� � �� � ����� �����
				{
					for(i=0;i<5;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				if(x6!=4) slowsl[n++]='-';
				else
				{
					slowsl[n++]=slow[z++];
					slowsl[n++]='-';
				}
				fl=1;
				nslow=0;
				glasn--;
				pk=1;
				}
			}
		}
		if(nslow==1)
			{
				if(((x1==3 && x2==1 && x3==3) || (x1==1 && x2==3 && x3==3) ||
					x1==1 && x2==3 && x3==2) && x4!=1) //313 133 132 � ������ �����
				{
					for(i=0;i<3;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					slowsl[n++]='-';
					nslow=0;
					fl=1;
					pk=1;
				}
				if(nslow && ((x1==1 && x2==2) || (x1==1 && x2==3)) && x3!=1) //12 13 � ������ �����
				{
					if(x3!=4)
						for(i=0;i<2;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					else for(i=0;i<3;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					nslow=0;
					slowsl[n++]='-';
					glasn--;
					fl=1;
					pk=1;
				}
			}

		if(nslow==1)
		{
		// ������� ������ ����� 1321 1331 1221 1231
		if(((x1==1 && x2==3 && x3==2 && x4==1) || (x1==1 && x2==3 && x3==3 && x4==1) || 
		   (x1==1 && x2==2 && x3==2 && x4==1) || (x1==1 && x2==2 && x3==3 && x4==1)))
			{
			 for(i=0;i<2;i++,z++,n++,kbukv--)  slowsl[n]=slow[z];
				fl=1;
				nslow=0;
				glasn--;
				per=0;
		   /* i=z; 	fl=0; while(slows[i]==3 || slows[i]==2) i++;  //��������� ��������� � ������ ������
		   if(slows[i]==4) 
		   {
			   k=i-z+1;
			   for(i=0;i<k;i++,z++,n++,kbukv--)
			   {
				   slowsl[n]=slow[z];
				   fl=1;
			   }
			   slowsl[n++]='-';
			   nslow=0;
		   }
		   else // ������ ���� �� ��� ������� ���� �� ������ �����
			   { 
				   i=z;
				   while(slows[i]>-1 && slows[i]!=1) i++;
					   if(slows[i]==1) slowsl[n++]='-';
				}
			*/
			}
			if(nslow && x1==3 && x2==2 && x3==1)// 321 � ������ �����
			{
				if(slow[z+3]!='�')
					for(i=0;i<3;i++,z++,n++,kbukv--)  slowsl[n]=slow[z];
				else for(i=0;i<4;i++,z++,n++,kbukv--)  slowsl[n]=slow[z];
				i=z;
				while(slows[i]!=4 && slows[i]!=1) i++; // ����� ��������� � ������� ����� ����� ���
				if(slows[i]==4) // ��������� ��������� ������������ ������ ������
				{
					k=i-z+1;
					for(i=0;i<k;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
				}
				slowsl[n++]='-';
				fl=1;
				nslow=0;
				glasn--;
				per=0;
			}
		}
		if(kbukv>6)
		{
			x1=slows[z+0];
			x2=slows[z+1];
			x3=slows[z+2];
			x4=slows[z+3];
			x5=slows[z+4];
			x6=slows[z+5];
			x7=slows[z+6];
			if(x1==1 && x2==3 && x3==3 && x4==3 && x5==2 && x6==1) //1-33321 ����
			{
				slowsl[n++]=slow[z++];
				slowsl[n++]='-';
				for(i=0;i<4;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
				glasn-=2;
				fl=1;
				pk=1;
				nslow=0;
			}
		}
		if(kbukv>3)
		{
			x1=slows[z+0];
			x2=slows[z+1];
			x3=slows[z+2];
			x4=slows[z+3];
			x5=slows[z+4];
			if((x1==3 && x2==3 && x3==3 && x4==1) || (x1==3 && x2==3 && x3==2 && x4==1) )  //3331 ��� 3321 ���    (2212 ��� ������. ��� ������ ������. ��� ������ ���� ���� ���� ������ ���� ������ ���������
			{  
				if(nslow==0 && slows[z-1]==1 && slowsl[n-1]!='-') slowsl[n++]='-'; //���� ����� ���� ����������� 1
				for(i=0;i<4;i++,n++,z++,kbukv--) slowsl[n]=slow[z];  // ������ ���� ���� � ���������
				// n ���������� ��� ������ ���� � slowsl
				pk=1;
				nslow=0;
				i=z;  
				while(pk==1 && (slows[i]==2  || slows[i]==3)) i++;   // ������� ������� ��������� ����� ���� ���� 
				if(slows[i]<0)                       // ����� ���� ���� ���� ������ ��������� 
				{
					for(k=z;k<i;kbukv--,k++,n++,z++) slowsl[n]=slow[z]; // i ��������� �� ����� �����
					break;
				}
				if(pk==1) pk=0;
				glasn--;
				if(glasn>0) slowsl[n++]='-'; // ���������� ������� ���������� ������
				fl=1;   // ���-�� ��������
				nslow=0;
				if(x5==4 && glasn>0) // ���� ����� ����� ��������� ���� ������ ��� ������� ����
					{
						slowsl[n-1]=slow[z++];
						slowsl[n++]='-';
						nslow=0;
						kbukv--;
					}
			}
			if(x1==3 && x2==3 && x3==3 && x4==3 && x5==1) //33331
			{
				if(nslow==0 && slows[z-1]==1 && slowsl[n-1]!='-') slowsl[n++]='-'; //���� ����� ���� ����������� 1
				for(i=0;i<5;i++,n++,z++,kbukv--) slowsl[n]=slow[z];  // ������ ���� ���� � ���������
				// n ���������� ��� ������ ���� � slowsl
				pk=1;
				nslow=0;
				i=z;  
				while(pk==1 && slows[i]==2  && slows[i]==3) i++;   // ������� ������� ��������� ����� ���� ���� 
				if(slows[i]==-1)                       // ����� ���� ���� ���� ������ ��������� 
				{
					for(k=z;k<i;kbukv--,k++,n++,z++) slowsl[n]=slow[z]; // i ��������� �� ����� �����
					break;
				}
				if(pk==1) pk=0;
				glasn--;
				if(glasn>0) slowsl[n++]='-'; // ���������� ������� ���������� ������
				fl=1;   // ���-�� ��������
				nslow=0;
				if(x5==4 && glasn>0) // ���� ����� ����� ��������� ���� ������ ��� ������� ����
					{
						slowsl[n-1]=slow[z++];
						slowsl[n++]='-';
						nslow=0;
						kbukv--;
					}
			}
		}
		if(kbukv>3)
		{
			x1=slows[z];
			x2=slows[z+1];
			x3=slows[z+2];
			x4=slows[z+3];
			if(x1==2 && x2==1 && x3==2 && (x4==2 || x4==3) && glasn>0)
			{
				glasn--;
				for(i=0;i<3;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
				if(glasn>0) slowsl[n++]='-';
			}
			
			/*
			if((x1==3 && x2==3 && x3==1) || (x1==2 && x2==2 && x3==1) || (x1==3 && x2==2 && x3==1))  //331 ��� 221 ��� 321 // � ������ ���� ����� �� ����
				// �������� ������� ��� ������ ����� ������� ����� (��� ���� ������� � �������)
			{
				i=z+3;								
				while(slows[i]!=1 && slows[i]>-1) i++;
				if(slows[i]>-1)   // ���� ��� �������
				{
					for(i=0;i<3;i++,n++,z++,kbukv--) slowsl[n]=slow[z]; //���������� 331 ��� 221
					slowsl[n++]='-';
					glasn--;
					fl=1;
					nslow=0;
				}
				else // ������� ���
				{
					for(i=0;kbukv>0;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					slowsl[n++]='-';
					fl=1;
					glasn--;
					nslow=0;
					break;
				}
				if(x4==4 && glasn>0)  // ���� ����� ����� ��������� ���� ������ ��� ������� ����
					{
						slowsl[n-1]=slow[z++];
						slowsl[n++]='-';
						nslow=0;
					}
			}
			*/
			// ��� ����������
			if(slows[z]==1 && nslow==1) //13 31 13-21 12-21 12-31 ������� ������ �����
			{
				x1=slows[z+1];
				x2=slows[z+2];
				x3=slows[z+3];
				if(x1==3 && x2==3 && x3==1) //331
					{
						for(i=0;i<4;i++,n++,z++,kbukv--)
						{
							if(i==2) slowsl[n++]='-';
							slowsl[n]=slow[z];
						}
						nslow=0;
						glasn-=2;
						fl=1;
						pk=1;
					}
					if(x1==3 && x2==2 && x3==1) //321
					{
						for(i=0;i<4;i++,n++,z++,kbukv--)
						{
							if(i==2) slowsl[n++]='-';
							slowsl[n]=slow[z];
						}
						nslow=0;
						glasn-=2;
						fl=1;
						pk=1;
					}
					if(x1==2 && x2==2 && x3==1) //221
					{
						for(i=0;i<4;i++,n++,z++,kbukv--)
						{
							if(i==2) slowsl[n++]='-';
							slowsl[n]=slow[z];
						}
						nslow=0;
						glasn-=2;
						fl=1;
						pk=1;
					}
					if(x1==2 && x2==3 && x3==1) //231 
					{
						for(i=0;i<4;i++,n++,z++,kbukv--)
						{
							if(i==2) slowsl[n++]='-';
							slowsl[n]=slow[z];
						}
						nslow=0;
						glasn-=2;
						fl=1;
						pk=1;
					}
					//������� ��������� �� ��� ����(�.�. ������ �� ��� �������)
					i=z;
					while(pk==1 && slows[i]>-1 && slows[i]!=1)
						{
							i++;
						}
					if(slows[i]<-1)
					{
						i=i-z;
						for(k=0;k<i;k++,n++,z++) slowsl[n]=slow[z];
						break;
					}
					if(pk==1) pk=0;
			}
			if(nslow==0)  //���� �� ������ ���� �� ������ �����
			{	
				x4=slows[z+3];
				if(x4==1) 
				{
					x1=slows[z];
					x2=slows[z+1];
					x3=slows[z+2];
					x5=slows[z+4];
					x6=slows[z+5];
					// 213 313 ������
					if(x1==2 && x2==1 && x3==2) //212
					{
						for(i=0;i<4;i++,n++,z++,kbukv--)
						{
							if(i==2) slowsl[n++]='-';
							slowsl[n]=slow[z];
						}
						if(x5==1 || ((x5==2 || x5==3)&& x6==1)) slowsl[n++]='-'; // ������� �.�. ������ ���
						nslow=0;
						glasn-=2;
						fl=1;
						pk=1;
						if(x5==2 && (x6==2 || x6==3)) //21212-3 �������� ���� 3 �� � ����� �����
						{
							slowsl[n++]=slow[z++];
							slowsl[n++]='-';
						}
					}
					if(x1==3 && x2==1 && x3==2) //312
					{
						for(i=0;i<4;i++,n++,z++,kbukv--)
						{
							if(i==2) slowsl[n++]='-';
							slowsl[n]=slow[z];
						}
						if(x5==1 || ((x5==2 || x5==3)&& x6==1)) slowsl[n++]='-'; // ������� �.�. ������ ���
						nslow=0;
						glasn-=2;
						fl=1;
						pk=1;
						if(x5==2 && (x6==2 || x6==3)) //31212-3
						{
							slowsl[n++]=slow[z++];
							slowsl[n++]='-';
						}
					}
				}
				
			}
			if(nslow==1)
			{
				x1=slows[z+0];
				x2=slows[z+1];
				x3=slows[z+2];
				x4=slows[z+3];
				x5=slows[z+4];
				if(x1==1 && x2==3 & x3==3) //133
				{
					for(i=0;i<3;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					nslow=0;
					slowsl[n++]='-';
					fl=1;
					pk=1;
				}
				if(x1==3 && x2==1 && x3==3 && x4==3 && x5!=1) //3133
				{
					for(i=0;i<4;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					slowsl[n++]='-';
					nslow=0;
					fl=1;
					pk=1;
				}
				i=z;
				while(pk==1 && slows[i]>-1 && slows[i]!=1) i++;   // ��������� �� ��������� �� ��� ����
				if(slows[i]<-1)
				{  // ���� ���� ��������� ���������� ��� �������
					i=i-z;
					for(k=0;k<i;k++,n++,z++) slowsl[n]=slow[z];
					break;
				}
				if(pk==1) pk=0;
			}
			x1=slows[z+0];
			x2=slows[z+1];
			x3=slows[z+2];
			x4=slows[z+3];
			if((nslow==0 && ((x1==3 && x2==3 && x3==1) || (x1==2 && x2==2 && x3==1) || 
					(x1==3 && x2==2 && x3==1) || (x1==2 && x2==3 && x3==1) ||
 					(x1==2 && x2==1 && x3==2) || (x1==3 && x2==1 && x3==2 && x4!=1)))||
					((x1==3 || x1==2) && x2==1 && x3==2 && x4!=1))   // 331 221 321 231 312
				{
					if(slowsl[n-1]!='-' && nslow==0) //���� ����� ����� ����������� ��� �����
					{
						slowsl[n++]='-';
					}
					f=0;
					for(i=0;i<3;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					i=z;
					/* while(slows[i]!=4 && slows[i]!=1) i++; // ����� ��������� � ������� ����� ����� ���
					if(slows[i]==4) // ��������� ��������� ������������ ������ ������
					{
						k=i-z+1;
						for(i=0;i<k;i++,z++,n++,kbukv--) slowsl[n]=slow[z];
					}
					*/
					pk=1; // 
					i=z;
					k=i;
					nslow=0;  // ������ ����� �� ������ �����
					while(pk==1 && slows[i]>-1 && (slows[i]==2 || slows[i]==4)) // ��������� ���������
					{ // ������ ���� ����� ���� ����������
							i++;
					}
					k=i-k+1;
					if((slows[i]<0) && k>3)  // ����� ��������� � ��� � ����� �����
					{
						while(slows[z]>-1)
							slowsl[n++]=slow[z++]; // ������ ������������
						break;
					}
					// ����� �� ����� ��������� ������� ?
					else if(k>3)  // ���� ��������� �� � ������ ��� ������ �� ���������
					{
						slowsl[n++]=slow[z++]; // ������������ �� ����� ������ ������� ������ -
						slowsl[n++]='-';
							while(slows[z]>-1)
								slowsl[n++]=slow[z++];
						f=1;   // ���� �������� ����
						pk=1;
					}
					i=z;
					while(pk==1 & slows[i]>-1 && slows[i]!=1) i++; // ��������� �� ��������� �� ��� ����
					if(slows[i]<-1)
					{  // ���� ���� ��������� ���������� ��� �������
						i=i-z;
						for(k=0;k<i;k++,n++,z++) slowsl[n]=slow[z];
						break;
					}
					if(pk==1) pk=0;
					glasn--;
					if(slow[z]=='�' && slow[z+1]=='�' && slow[z+2]=='�' && slow[z+3]=='�')  //����� ����� ��������� ����
					{
						slowsl[n++]='-';
						for(k=0;k<4;k++,n++,z++) slowsl[n]=slow[z];
					}
					else
					{
						if(f!=1 && glasn>0 )  // ���� �� ��������
						{ 
							if(slows[z]==3 && slows[z+1]==3 && slows[z+2]==3 && slows[z+3]==1)
							{
								slowsl[n++]='-';
								for(k=0;k<4;k++,n++,z++) slowsl[n]=slow[z];
								glasn--;
								if(glasn>0) slowsl[n++]='-';
							}
							else
							{
								if((x4==2 || x4==3) && slows[z+1]!=1)
									{
									slowsl[n++]=slow[z++];
									kbukv--;
									slowsl[n++]='-';
									}
								else
								{
								slowsl[n++]='-';
								f=0;
								} 
							}
						}
						fl=1;
						if(x4==4 && glasn>0) // ���� ����� ����� ��������� ���� ������ ��� ������� ����
						{
							i=z+2;  // z==x3
							while(slows[i]>-1 && slows[i]!=4 && (slows[i]==2 || slows[i]==3)) i++;
							if(slows[i]==4)
							{
								slowsl[n-1]=slow[z++];
								for(k=z;k<i+1;k++,z++,kbukv--,n++) slowsl[n]=slow[z];
								slowsl[n++]='-';
								pk=1;
							}
							else
							{
							slowsl[n-1]=slow[z++];
							slowsl[n++]='-';
							pk=1;
							}
						}
					}
					if(slow[z]=='�' && (slows[z+1]==3 || slows[z+1]==2))  //� ������� (2)
					{
						if(glasn>0)
						{
							if(slowsl[n-1]=='-')
							{
								slowsl[n-1]=slow[z++];
								slowsl[n++]='-';
							}
							else
							{
								slowsl[n++]=slow[z++];
								slowsl[n++]='-';
							}
						}
						else 
						{
							while(slow[z]!='\0') slowsl[n++]=slow[z++];

						}
					}
				}
		}
		k=z; f=0;
		while(nslow==0 && slows[k]>-1 && slows[k]==3) {f++; k++; } // ��������� ������� 3 � �����
		if(f>2) //���� 2 ������
			if(slows[k]==2) //��������� ����� ��� 2?
			{
				if(slows[k+1]!=1) 
				{
					for(i=z;i<k+1;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					pk=1;
				}
				else
				{
					if(slows[k+1]==1) 
					for(i=z;i<k;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					slowsl[n++]='-';
					fl=1;
				}
			}
			
			// ��� ��� ������� ��� 4- ������ ���� 0=������� ����
		//x1=slows[z]; x2=slows[z+1]; x3=slows[z+2]; x4=slows[z+3];
		/*
		if((x1==1 && x2==1 && fl==0 && nslow==0) || (x1==1 && x2==2 && fl==0 && nslow==0) || (x1==1 && x2==3 && fl==0 && nslow==0) || (x1==2 && x2==3 && fl==0 && nslow==0))   // 1-1 1-2 1-3 2-3 ������ fl=0
		{
			i=z+1;  // ������� ���� ������� ���������
			while(slows[i]!=1 && slows[i]>-1) i++;    
				if(slows[i]>-1)  // ���� �� ����� ������ ���� ��� ������� 
					{
						if(x2==2 && x3==3 && x4==1)   
						{
							slowsl[n++]=slow[z++] ;
							slowsl[n++]=slow[z++] ;
							slowsl[n++]='-';
							glasn--;
							fl=1;
						}
					   /*	else
						{                              // ��� ��� ������ ����� ������� ��������
							slowsl[n++]=slow[z++] ;
							slowsl[n++]='-';
							glasn--;
							fl=1;
						} 
					}
				else               // ���� ��� ������ ������� ���������� ��� �����
				{
					for(i=z;slows[z]>-1;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
					break;
				}
		}
		*/
		
		Sglasn=0;
		i=z; // ����� ������� ��� �������� �����
		// ���� ������� ������� � ���������� ���������
		if(mznak==1)
		{
			while((slows[i]>-1) && slows[i]!=4)  // -1 ��������� ����� ����� 
			{
				if(slows[i] == 1) 	Sglasn++; // ������� ������� �� ������� �����
				i++;  
			}
			if(slows[i]<-1) mznak=0;
			if(slows[i]>-1)      // ����� ������ ����; i ��������� �� ����
			{                    // i  �������� ������� ������� ����� ��� �������� ����� � �����

				if(slow[i-1]=='�' && slow[i+1]=='�' && slow[i+2]=='�'&& (i==z+1))                // ����
						{
								if(slows[i-2]==1 && slowsl[n-1]!='-') slowsl[n++]='-';
								for(k=i-1;k<i+3;k++,n++,kbukv--) slowsl[n]=slow[k]; // ������� ����� � �� ����� � ����� �����
								slowsl[n++]='-';
								glasn--;
								fl=1;
								z=k;
								if(slows[i+3]<0) break;
						}
				if(Sglasn==1)   // �� ������� ����� ���� ������ ���� �������
					{
						k=i+1;
						i++;
						while(slows[i]>-1 && slows[i]!=1 && slows[i]!=4) i++;
						if(slows[i]==1 && slow[i]!='�' && slow[i-1]!='c')   // ������� ���� �� ����� ���� �������
						{
							for(i=z;i<k;i++,n++,z++,kbukv--) // ���� ���� ����� ����� ������� �����
							{
								slowsl[n]=slow[z];
							}
							slowsl[n++]='-';
							glasn--;
							nslow=0;
							fl=1;
						}
						if(slows[i]==4)   // ����� ������ � ������� ��� �������
						{
							for(i=z;i<k;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
							slowsl[n++]='-';
							nslow=0;
							fl=1;
						}
					}
			}
		}
		/* if(slows[z]==0 || slows[z]==4) // ������ ��� ������� ����
		{ slowsl[n++]=slow[z++]; 
		slowsl[n++]='-'; kbukv--; fl=1; 
		glasn--;
		} 
		*/
		x1=slows[z]; x2=slows[z+1]; x3=slows[z+2]; x4=slows[z+3]; x5=slows[z+4];
		if(fl==0) // ���� �� ���-�� ������?  fl=0 ������
				{
					k=z; i=z+1;
					while(slows[i]>-1 && slows[i]!=1) i++;
					if(slows[i]<0)  //������� ������ ���
					{
						for(k=z;k<i;n++,z++,kbukv--,k++) slowsl[n]=slow[z];
						break;
					}
					else
					{
						if(x1==1 && (x2==1 || x2==3))  //1-3 1-1 113-
						{
							if(nslow==0 && slows[z-1]==1 && x2==3 && x3!=1) // ������� ���� ���������� 1
								{
									i=z;// � �� ����� �����
									while(slows[i]!=1 && slows[i]>0) i++;
									if(slows[i]==1)  // ������ �� ����� �����
									{
										for(i=0;i<2;i++,n++,z++,kbukv--) slowsl[n]=slow[z];
										if(slows[z]!=4) slowsl[n++]='-'; // ���� ����� ����� ��������� �� ������ ����
										else
										{
											slowsl[n++]=slow[z++];
											slowsl[n++]='-';
											kbukv--;
										}
										glasn--;
									}
									else   // ����� �����
									{
										while(slow[z]!='\0') slowsl[n++]=slow[z++];
										break;
									}
								}
							else {
								slowsl[n++]=slow[z++];
								slowsl[n++]='-';
								//slowsl[n++]=slow[z++]; // ����������
								fl=1;
								nslow=0;
								glasn--;
								}
							if(x2==1 && x5==1 && ((x3==3 && x4==3) ||   //11331 11231 11321 11221
								(x3==2 && x4==3) || (x3==3 && x4==2) ||
								(x3==2 && x4==2)))
							{
								slowsl[n++]=slow[z++];
								slowsl[n++]=slow[z++];
								slowsl[n++]='-';
							}

						} 
						if((x1==3 && x2==3 && nslow==0) || (x1==1 && x2==2))  //1-2 3-3 �� ������ �����
						{
							slowsl[n++]=slow[z++];
							// 
							fl=1;
							nslow=0;
							if(x1==1) glasn--;
							if(glasn>0)slowsl[n++]='-';
						}
					}
				}
		if(glasn==1) // ���� �������� ���� �������
		{
			i=z;
			while(slows[i]!=4 && slows[i]>0) i++;
			if(slows[z]<0) //� ��� ������� �����
				{
					while(slow[z]!='\0') slowsl[n++]=slow[z++];
					break;
			}
		}
		if(fl==0)
			{
				if(slows[z+1]==1)
				if(slows[z]==1){ nslow=0; glasn--; }
				slowsl[n++]=slow[z++];
				if(slows[z]==1 && slows[z-1]==4 && nslow==0) slowsl[n++]='-';
			}
		fl=0;
	} // ����� ����� ��������� ������
	if(slowsl[n-1]=='-')
		{
			slowsl[n-1] = '\n';
			slowsl[n]='\0';
		}
	else
		{
			slowsl[n]='\n';
			slowsl[n+1]='\0';
		}
	i=0;
	fputs(slowsl,fp2);
	fprintf(stdout,"%s",slowsl);
	i=0;
	n=0;
	while(slowsl[i]!='\0')  // ������ ������ ����� 
	{
		slowsl[i]='\0';
		slows[i]=-1;
		slow[i]='\0';
		i++;
	}
}    // ���� ������ ����� �������
		else      // ���� ���� ������� � ����� ���������� ��� � �������� ����������
		{
			fprintf(stdout,"%s",slow);
			fprintf(fp2,"%s",slow);
		}
}  // ���� ��������� ����
fclose(fp2);
fclose(fp1);
fclose(fp);
getch();
}