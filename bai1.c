/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [COM108 CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH LƯU THÔNG TIN SINH VIÊN 
//  Input: Nhập vào từ bàn phím các thông tin sinh viên như: mã số sinh viên, tên sinh 
//  viên, ngành học, điểm trung bình. 
//  Output: Xuất ra thông tin của tất cả sinh viên trên màn hình

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct sinhVien
{
    char tenSV[200];
    char MSSV[200];
    char chuyenNganh[200];
    float diemTrungBinh;
} mangSV[50];

int main()
{
    int soSinhVien, i;

    printf("Hãy nhập số sinh viên muốn nhập: ");
    scanf("%d", &soSinhVien);
    getchar();

    for (i = 0; i < soSinhVien; i++)
    {
        printf("\nNhập thông tin cho sinh viên thứ %d\n", i + 1);

        printf("Nhập tên sinh viên: ");
        fgets(mangSV[i].tenSV, sizeof(mangSV[i].tenSV), stdin);
        mangSV[i].tenSV[strcspn(mangSV[i].tenSV, "\n")] = 0;

        printf("Nhập MSSV: ");
        fgets(mangSV[i].MSSV, sizeof(mangSV[i].MSSV), stdin);
        mangSV[i].MSSV[strcspn(mangSV[i].MSSV, "\n")] = 0;

        printf("Nhập chuyên ngành: ");
        fgets(mangSV[i].chuyenNganh, sizeof(mangSV[i].chuyenNganh), stdin);
        mangSV[i].chuyenNganh[strcspn(mangSV[i].chuyenNganh, "\n")] = 0;

        printf("Nhập điểm trung bình: ");
        scanf("%f", &mangSV[i].diemTrungBinh);
        getchar();
    }

    printf("\n\nDANH SÁCH SINH VIÊN:\n\n");

    for (i = 0; i < soSinhVien; i++)
    {
        printf("Sinh viên thứ %d\n", i + 1);
        printf("Họ và tên: %s\n", mangSV[i].tenSV);
        printf("Mã số sinh viên: %s\n", mangSV[i].MSSV);
        printf("Điểm trung bình: %.2f\n", mangSV[i].diemTrungBinh);
        printf("Chuyên ngành: %s\n\n", mangSV[i].chuyenNganh);
    }
    system("pause");
    return 0;
}
