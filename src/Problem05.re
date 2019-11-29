let rev = xs => {
  let rec r = prev =>
    fun
    | [] => prev
    | [h, ...t] => r([h, ...prev], t);

  r([], xs);
};
