<?php

require_once 'Shirt.php';

// Membuat objek-objek untuk 3 data
$product1 = new Shirt("Red", "Long Sleeve");
$product1->set_id(123);
$product1->set_name("Shirt 1");
$product1->set_brand("Brand 1");
$product1->set_price("20");
$product1->set_size("XL");
$product1->set_materials("Cotton");
$product1->set_gender("Male");

$product2 = new Shirt("Blue", "Short Sleeve");
$product2->set_id(124);
$product2->set_name("Shirt 2");
$product2->set_brand("Brand 2");
$product2->set_price("25");
$product2->set_size("L");
$product2->set_materials("Polyester");
$product2->set_gender("Female");

$product3 = new Shirt("Green", "Long Sleeve");
$product3->set_id(125);
$product3->set_name("Shirt 3");
$product3->set_brand("Brand 3");
$product3->set_price("30");
$product3->set_size("M");
$product3->set_materials("Silk");
$product3->set_gender("Unisex");

// Menyimpan objek-objek dalam array
$products = array($product1, $product2, $product3);

// Mencetak output tabel bergaris
echo "<h2><b><center>Data Produk</center></b></h2>";

echo "<center><table border='2'>";
    echo "<tr>
        <th> ID </th>
        <th> Nama </th>
        <th> Merk </th>
        <th> Harga </th>
        <th> Ukuran </th>
        <th> Bahan </th>
        <th> Jenis Kelamin </th>
        <th> Warna </th>
        <th> Panjang Lengan </th>
    </tr>";

    //Isi Tabel
    for ($i = 0; $i < count($products); $i++)
    {
        echo "<tr><td>";
        echo $products[$i]->get_ID();
        echo "</td><td>";
        echo $products[$i]->get_name();
        echo "</td><td>";
        echo $products[$i]->get_brand();
        echo "</td><td>";
        echo $products[$i]->get_price();
        echo "</td><td>";
        echo $products[$i]->get_size();
        echo "</td><td>";
        echo $products[$i]->get_materials();
        echo "</td><td>";
        echo $products[$i]->get_gender();
        echo "</td><td>";
        echo $products[$i]->get_color();
        echo "</td><td>";
        echo $products[$i]->get_sleevetype();
        echo "</td>";
        echo "</tr>";
    }
echo "</table> </center>";
?>
