import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Product> products = new ArrayList<>();

        System.out.print("Enter the number of products: ");
        int numProducts = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        for (int i = 0; i < numProducts; i++) {
            System.out.println("\nEnter details for Product " + (i + 1) + ":");
            System.out.print("ID: ");
            int productId = scanner.nextInt();
            scanner.nextLine(); // Consume newline
            System.out.print("Name: ");
            String productName = scanner.nextLine();
            System.out.print("Brand: ");
            String productBrand = scanner.nextLine();
            System.out.print("Price: ");
            String productPrice = scanner.nextLine();

            System.out.println("\nEnter Clothing details:");
            System.out.print("Size: ");
            char clothingSize = scanner.next().charAt(0);
            scanner.nextLine(); // Consume newline
            System.out.print("Material: ");
            String clothingMaterial = scanner.nextLine();
            System.out.print("Gender: ");
            char clothingGender = scanner.next().charAt(0);

            System.out.println("\nEnter Shirt details:");
            System.out.print("Color: ");
            String shirtColor = scanner.next();
            System.out.print("Sleeve Type: ");
            String shirtSleeveType = scanner.next();

            Product product = new Product(productId, productName, productBrand, productPrice);
            Clothing clothing = new Clothing(clothingSize, clothingMaterial, clothingGender, productId, productName, productBrand, productPrice);
            Shirt shirt = new Shirt(shirtColor, shirtSleeveType, clothingSize, clothingMaterial, clothingGender, productId, productName, productBrand, productPrice);

            product.setClothing(clothing); // Mengatur objek Clothing ke objek Product
            product.setShirt(shirt); // Mengatur objek Shirt ke objek Product

            products.add(product); // Menambahkan produk ke dalam ArrayList
        }

        // Output tabel untuk semua produk
        System.out.println("\n-------------------------------------------------------------------------------------------");
        System.out.println("| ID  |    Name    |   Brand  |  Price  |  Size | Gender | Material | Color | Sleeve Type |");
        System.out.println("-------------------------------------------------------------------------------------------");
        for (Product product : products) {
            Clothing clothing = product.getClothing();
            Shirt shirt = product.getShirt();

            System.out.printf("| %-4d| %-11s| %-9s| %-8s| %-6c| %-7c| %-10s| %-6s| %-12s|\n",
                    product.getId(), product.getName(), product.getBrand(), product.getPrice(),
                    clothing.getSize(), clothing.getGender(), clothing.getMaterial(),
                    shirt.getColor(), shirt.getSleeveType());
        }
        System.out.println("-------------------------------------------------------------------------------------------");

        // Menutup scanner
        scanner.close();
    }
}