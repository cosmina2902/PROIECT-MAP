FROM gcc:latest
WORKDIR C:\Users\COSMINA\OneDrive\Desktop\Proiect Sincretic
COPY map.c .
RUN gcc -o map map.c -lstdc++
CMD ["./map"]