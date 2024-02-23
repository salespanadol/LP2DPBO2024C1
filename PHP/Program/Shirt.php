<?php

require_once 'Clothing.php';

class Shirt extends Clothing {
    private $color;
    private $sleevetype;

    public function __construct($color = "", $sleevetype = "") {
        parent::__construct(); // Panggil konstruktor dari kelas induk
        $this->color = $color;
        $this->sleevetype = $sleevetype;
    }

    public function get_color() {
        return $this->color;
    }

    public function set_color($color) {
        $this->color = $color;
    }

    public function get_sleevetype() {
        return $this->sleevetype;
    }

    public function set_sleevetype($sleevetype) {
        $this->sleevetype = $sleevetype;
    }

    public function __destruct() {
        
    }
}

?>