from Shirt import Shirt

shirts = []
num_shirts = int(input("Masukkan jumlah data shirt yang ingin dimasukkan: "))

for i in range(num_shirts):
    print(f"\nData Shirt ke-{i+1}:")
    id = int(input("Masukkan ID: "))
    name = input("Masukkan Nama: ")
    brand = input("Masukkan Brand: ")
    price = input("Masukkan Harga: ")
    color = input("Masukkan Warna: ")
    sleevetype = input("Masukkan Jenis Lengan: ")
    size = input("Masukkan Ukuran: ")
    materials = input("Masukkan Material: ")
    gender = input("Masukkan Jenis Kelamin: ")

    shirt = Shirt(color, sleevetype, size, materials, gender)
    shirt.set_id(id)
    shirt.set_name(name)
    shirt.set_brand(brand)
    shirt.set_price(price)

    shirts.append(shirt)

print("\n=======================================================================================================================================================")
print("|    ID     |          Nama          |     Brand    |    Harga    |    Warna    |   Jenis Lengan   |    Ukuran   |    Material    |   Jenis Kelamin   |")
print("=======================================================================================================================================================")

for shirt in shirts:
    print(f"| {shirt.get_id():^9} | {shirt.get_name():^22} | {shirt.get_brand():^12} | {shirt.get_price():^11} | {shirt.get_color():^11} | {shirt.get_sleevetype():^16} | {shirt.get_size():^10} | {shirt.get_materials():^15} | {shirt.get_gender():^18}|")

print("=======================================================================================================================================================")