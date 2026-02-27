/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [COM108 CS21301]
 *****************************************************************************/

//  BÀI 2: SẮP XẾP SINH VIÊN THEO ĐIỂM TĂNG DẦN 

// VIẾT CODE Ở ĐÂY
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
//tạo kiểu dử liệu
struct sinhVien
{
    char tenSV[50];
    char MSSV[50];
    char chuyenNganh[50];
    float diemTrungBinh;
}mangSV[50];

int main(){
    //Nhập số sinh viên
    int soSinhVien,i;
    printf("hãy nhập số sinh viên muốn nhập :");
    scanf("%d",&soSinhVien);
    getchar();
    //nhập thông tin sinh viên
    for ( i = 0; i < soSinhVien; i++)
    {
        printf("nhập thông tin cho sinh viên thứ %d\n",i+1);
        printf("nhập tên sinh viên :");
        gets(mangSV[i].tenSV);
        printf("nhập MSSV :");
        gets(mangSV[i].MSSV);
        printf("nhập chuyên ngành :");
        gets(mangSV[i].chuyenNganh);
        printf("nhập điểm trung bình :");
        scanf("%f",&mangSV[i].diemTrungBinh);
        getchar();
    }
    printf("\n\nDANH SÁCH SINH VIÊN :\n\n");
    for ( i = 0; i < soSinhVien; i++)
    {
        printf("Sinh viên thứ %d\n",i+1);
        printf("Họ và tên : %s\n",mangSV[i].tenSV);
        printf("Mã số sinh viên : %s\n",mangSV[i].MSSV);
        printf("Điểm trung bình : %.2f\n",mangSV[i].diemTrungBinh);
        printf("Chuyên ngành : %s\n\n",mangSV[i].chuyenNganh);
    }
   
    for ( i = 0; i < soSinhVien-1; i++)
    {
        for (int j =i+1; j < soSinhVien; j++)
        {
           if (mangSV[i].diemTrungBinh<mangSV[j].diemTrungBinh)
           {
            struct sinhVien svtemp;
            svtemp=mangSV[i];
            mangSV[i]=mangSV[j];
            mangSV[j]=svtemp;
           }  
        }
    }
    printf("\n\nDANH SÁCH SINH VIÊN SAU KHI XẾP HẠNG :\n\n");
    for ( i = 0; i < soSinhVien; i++)
    {
        printf("Sinh viên HẠNG thứ %d\n",i+1);
        printf("Họ và tên : %s\n",mangSV[i].tenSV);
        printf("Mã số sinh viên : %s\n",mangSV[i].MSSV);
        printf("Điểm trung bình : %.2f\n",mangSV[i].diemTrungBinh);
        printf("Chuyên ngành : %s\n\n",mangSV[i].chuyenNganh);
    }
    system("pause");
return 0;
}

