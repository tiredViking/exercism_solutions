//
// This is only a SKELETON file for the 'Line Up' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const format = (name, number) => {
  if (number % 100 >= 11 && number % 100 <= 13){
    return `${name}, you are the ${number}th customer we serve today. Thank you!`;
  }

  const suffixes = {
    1: "st",
    2: "nd",
    3: "rd"
  }

  const lastDigit = number % 10;
  const suffix = suffixes[lastDigit] || "th";
  return `${name}, you are the ${number}${suffix} customer we serve today. Thank you!`;
};
