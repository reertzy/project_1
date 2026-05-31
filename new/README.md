# BUILD PORTOFOLIO WITH GITHUB

## Instalasi
download git : https://git-scm.com  
daftar akun GitHub : https://github.com  

## autentikasi
git config --global user.name "Nama Lengkap Anda"  
git config --global user.email "emailanda@example.com"  

## cara upload project ke github
1.Buat repository di github  
2.Git bash folder project  
3.git init  
4.git add README.md (. untuk semua file/folder)  
5.git commit -m "commit pertama project"  
6.git remote add origin https://github.com/karuniaraharjo/app-presensi.git  
7.git branch -M main  
8.git pull --rebase origin main (jika ada readme.md)  
9.git push -u origin main  
  
## Kolaborasi
git branch fitur-baru  
git switch fitur-baru  
git add .  
git commit -m "rilis fitur kalender"  
git push  
git switch main  
git merge fitur-baru   
git push  
git pull (untuk mendapatkan update dari teman di branch yang sama)  

## modified
1.git add .  
2.git commit -m "kata-kata"  
3.git push  

## deploy project
1.settings  
2.pages  
3.branch pilih main  

## file penting
README.md (deskripsi project)  
.gitignore (untuk membatasi supaya file/folder tidak terupload di github)  


Next buat web portofolio pribadi