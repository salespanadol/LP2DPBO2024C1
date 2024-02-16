public class Clothing extends Product {
    private char size;
    private String material;
    private char gender;

    public Clothing(char size, String material, char gender, int id, String name, String brand, String price) {
        super(id, name, brand, price);
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    // Other getters and setters
    public char getSize() {
        return size;
    }

    public void setSize(char size) {
        this.size = size;
    }

    public String getMaterial() {
        return material;
    }

    public void setMaterial(String material) {
        this.material = material;
    }

    public char getGender() {
        return gender;
    }

    public void setGender(char gender) {
        this.gender = gender;
    }
}