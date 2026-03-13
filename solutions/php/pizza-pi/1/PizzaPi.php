<?php

class PizzaPi
{
    public function calculateDoughRequirement($pizzas, $persons)
    {
        return $pizzas * (($persons * 20) + 200);
    }

    public function calculateSauceRequirement($pizza, $mL)
    {
        if ($ml === 0) return;
        return floor($pizza * 125 / $mL);
    }

    public function calculateCheeseCubeCoverage($cm, $thickness, $diameter)
    {
        $divider = ($thickness * pi() * $diameter);
        return $divider === 0 ? : floor(pow($cm, 3) / $divider);
    }

    public function calculateLeftOverSlices($pizzas, $friends)
    {
        return $pizzas * 8 % $friends;
    }
}
