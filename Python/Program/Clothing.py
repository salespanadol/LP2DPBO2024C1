from Product import Product

class Clothing(Product):
    def __init__(self, size="", materials="", gender="", id=0, name="", brand="", price=""):
        super().__init__(id, name, brand, price)
        self.size = size
        self.materials = materials
        self.gender = gender

    def get_size(self):
        return self.size

    def set_size(self, size):
        self.size = size

    def get_materials(self):
        return self.materials

    def set_materials(self, materials):
        self.materials = materials

    def get_gender(self):
        return self.gender

    def set_gender(self, gender):
        self.gender = gender
