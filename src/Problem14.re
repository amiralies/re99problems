let rec duplicate =
  fun
  | [] => []
  | [h, ...t] => [h, h, ...duplicate(t)];
