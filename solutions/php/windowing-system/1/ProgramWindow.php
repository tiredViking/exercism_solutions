<?php

class ProgramWindow
{
    public $y;
    public $x;
    public $height;
    public $width;

    function __construct(){
        $this->y = 0;
        $this->x = 0;
        $this->height = 600;
        $this->width = 800;
    }

    function resize($Size){
        $this->height = $Size->height;
        $this->width = $Size->width;
    }

    function move($Position){
        $this->y = $Position->y;
        $this->x = $Position->x;
    }
}