<?php

function language_list(...$args)
{
    return $args;
}

function add_to_language_list($languages, $new_language){
    $languages[] = $new_language;
    return $languages;
}

function prune_language_list($list){
    array_shift($list);
    return $list;
}

function current_language($list){
    return $list[0];   
}

function language_list_length($array){
    return count($array);
}