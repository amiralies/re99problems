let length = xs => {
  let rec len = n =>
    fun
    | [] => n
    | [_, ...t] => len(n + 1, t);

  len(0, xs);
};
