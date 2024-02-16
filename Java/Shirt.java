public class Shirt extends Clothing {
    private String color;
    private String sleeveType;

    public Shirt(String color, String sleeveType, char size, String material, char gender, int id, String name, String brand, String price) {
        super(size, material, gender, id, name, brand, price);
        this.color = color;
        this.sleeveType = sleeveType;
    }

    // Other getters and setters
    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public String getSleeveType() {
        return sleeveType;
    }

    public void setSleeveType(String sleeveType) {
        this.sleeveType = sleeveType;
    }
}