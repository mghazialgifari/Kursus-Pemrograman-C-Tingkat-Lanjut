#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, total = 0;
printf("Masukkan jumlah mahasiswa:");
scanf("%d", &n);
int nilai[n];

for (int i = 0; i < n; i++) {
printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
scanf("%d", &nilai[i]);
total += nilai[i];
}

float rataRata = (float) total / n;
int maks = nilai[0];
int min = nilai[0];

for (int i = 1; i < n; i++) {
if (nilai[i] > maks)
maks = nilai[i];
if (nilai[i] < min)
            min = nilai[i];
}

printf("\n=== HASIL PENGOLAHAN NILAI MAHASISWA ===\n");
for (int i = 0; i < n; i++) {
printf("Mahasiswa ke-%d: %d\n", i + 1, nilai[i]);
}
printf("------------------------------------------\n");
printf("Total Nilai     : %d\n", total);
printf("Rata-Rata Nilai : %.2f\n", rataRata);
printf("Nilai Tertinggi : %d\n", maks);
printf("Nilai Terendah  : %d\n", min);

    return 0;
}
