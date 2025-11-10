// @ts-check
//
// The line above enables type checking for this file. Various IDEs interpret
// the @ts-check directive. It will give you helpful autocompletion when
// implementing this exercise.

/**
 * Determines how long it takes to prepare a certain juice.
 *
 * @param {string} name
 * @returns {number} time in minutes
 */
export function timeToMixJuice(name) {
  switch (name){
    case 'Pure Strawberry Joy': return 0.5;
    case 'Energizer': 
    case 'Green Garden': return 1.5;
    case 'Tropical Island': return 3;
    case 'All or Nothing': return 5;
    default: return 2.5;
  }
}

/**
 * Calculates the number of limes that need to be cut
 * to reach a certain supply.
 *
 * @param {number} wedgesNeeded
 * @param {string[]} limes
 * @returns {number} number of limes cut
 */
export function limesToCut(wedgesNeeded, limes) {
  let number_of_wedges_cut = 0;
  let number_of_limes_cut = 0;
  while (number_of_wedges_cut < wedgesNeeded && limes.length > 0) {
    switch (limes[0]){
      case 'small': number_of_wedges_cut += 6; number_of_limes_cut += 1; limes.shift(); break;
      case 'medium': number_of_wedges_cut += 8; number_of_limes_cut += 1; limes.shift(); break;
      case 'large': number_of_wedges_cut += 10; number_of_limes_cut += 1; limes.shift(); break;
    }
  }
  return number_of_limes_cut;
}

/**
 * Determines which juices still need to be prepared after the end of the shift.
 *
 * @param {number} timeLeft
 * @param {string[]} orders
 * @returns {string[]} remaining orders after the time is up
 */
export function remainingOrders(timeLeft, orders) {
  while (timeLeft > 0 && orders.length > 0) {
    const currentJuiceTime = timeToMixJuice(orders[0]);
    timeLeft -= currentJuiceTime;   
    orders.shift();                 
  }

  return orders;
}

