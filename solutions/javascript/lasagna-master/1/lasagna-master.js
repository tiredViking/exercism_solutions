/// <reference path="./global.d.ts" />
// @ts-check

/**
 * Implement the functions needed to solve the exercise here.
 * Do not forget to export them so they are available for the
 * tests. Here an example of the syntax as reminder:
 *
 * export function yourFunction(...) {
 *   ...
 * }
 */

export function cookingStatus(time){
  if (time === undefined) return 'You forgot to set the timer.';
  else if (time > 0) return 'Not done, please wait.';
  else if (time == 0) return 'Lasagna is done.';
}

export function preparationTime(layers, timePerLayer){
  if (timePerLayer === undefined) return layers.length * 2;
  else return layers.length * timePerLayer;
}

export function quantities(layers){
  const quantity = {
    noodles: 0,
    sauce: 0
  }
  for (let i = 0; i < layers.length; i++){
    switch (layers[i]){
      case 'sauce': quantity.sauce += 0.2; break;
      case 'noodles': quantity.noodles += 50; break;
    }
  }
  return quantity;
}

export function addSecretIngredient(friendsList, myList) {
   myList.push(friendsList[friendsList.length - 1]);
}


export function scaleRecipe(recipe, portions) {
  const newRecipe = {};
  for (let key in recipe){
    newRecipe[key] = recipe[key]/2 * portions;
  }
  return newRecipe;    
}















  