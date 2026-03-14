<?php

class LuckyNumbers
{
    public function sumUp(array $digitsOfNumber1, array $digitsOfNumber2): int
    {
        $a = implode("", $digitsOfNumber1);
        $b = implode("", $digitsOfNumber2);
        return (int) $a + (int) $b;
    }

    public function isPalindrome(int $number): bool
    {
        $string = (string) $number;
        return $string === strrev($string);
    }

    public function validate(string $input): string
    {
        if ($input === null || $input === "") return 'Required field';
        return (int) $input <= 0 ? 'Must be a whole number larger than 0' : '';
    }
}
