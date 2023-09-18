# Latihan 3

Pada Latihan 3 kali ini kita akan membahas program integrator sederhana yang ditulis di C. Ada beberapa *bug* yang sudah disiapkan untuk kalian temukan dan perbaiki.

## Makefile

Untuk mempermudah proses kompilasi, kita akan menggunakan **Makefile** sesuai dengan yang sudah diajarkan pada Workshop.

1. Tulis *Makefile* yang bisa kalian gunakan untuk mengkompilasi program ini sehinggga `make all` akan menggunakan `satu_tambah.c` dan `trapesoidal.c`.

2. Buat *rule* dengan spesifikasi:
| Command | Fungsi | Integrator |
| :- | :-: | :-: |
| `make A` | `satu_tambah.c` | `trapesoidal.c` |
| `make B` | `satu_tambah.c` | `simpson.c` |
| `make C` | `kuadrat.c` | `trapesoidal.c` |
| `make D` | `kubik.c` | `trapesoidal.c` |

3. Buat variabel `DEBUG` yang akan melakukan kompilasi dengan *flag* `-g`.

## Testing dan Debugging

Pada saat kalian berusaha mengkompilasi program di atas, kalian akan menemukan beberapa *bug*. Temukan dan perbaiki *bug* tersebut sehingga program dapat berjalan dengan baik.

### Demo GDB

### Demo Valgrind
