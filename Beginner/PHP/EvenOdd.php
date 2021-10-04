<?php

function evenOrOdd(int $number): string {
  // If the remainder is 0, return Even, otherwise return Odd
  return ($number % 2 == 0) ? "Even" : "Odd";
}

?>