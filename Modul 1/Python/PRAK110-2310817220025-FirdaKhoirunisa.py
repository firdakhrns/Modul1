import math
#Diketahui
alas = 5 
tinggi = 12
miring = math.sqrt(5**2 + 12**2)
Keliling = alas+tinggi+miring
Luas = alas*tinggi/2

print("Sisi A =", tinggi, ("cm"))
print("Sisi B =", int(miring), "cm")
print("Sisi C =", alas, "cm")
print("Keliling =", int(Keliling), "cm")
print("Luas", int(Luas), "cm")