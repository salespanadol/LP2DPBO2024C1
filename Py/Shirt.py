from Clothing import Clothing

class Shirt(Clothing):
    def __init__(self, color="", sleevetype="", size="", materials="", gender=""):
        super().__init__(size, materials, gender)
        self.color = color
        self.sleevetype = sleevetype

    def get_color(self):
        return self.color

    def set_color(self, color):
        self.color = color

    def get_sleevetype(self):
        return self.sleevetype

    def set_sleevetype(self, sleevetype):
        self.sleevetype = sleevetype