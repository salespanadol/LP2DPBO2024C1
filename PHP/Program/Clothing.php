<?php

require_once 'Product.php';

class Clothing extends Product {
    private $size;
    private $materials;
    private $gender;

    public function __construct($size = "", $materials = "", $gender = "") {
        parent::__construct(); // Panggil konstruktor dari kelas induk
        $this->size = $size;
        $this->materials = $materials;
        $this->gender = $gender;
    }

    public function get_size() {
        return $this->size;
    }

    public function set_size($size) {
        $this->size = $size;
    }

    public function get_materials() {
        return $this->materials;
    }

    public function set_materials($materials) {
        $this->materials = $materials;
    }

    public function get_gender() {
        return $this->gender;
    }

    public function set_gender($gender) {
        $this->gender = $gender;
    }

    public function __destruct() {
        
    }
}

?>