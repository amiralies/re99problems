open Jest;

describe("Problem01", () => {
  test("Empty list returns none", () =>
    Expect.(expect(Problem01.last([])) |> toBe(None))
  );

  test("Length-one list returns it's head", () =>
    Expect.(expect(Problem01.last(["a"])) |> toBe(Some("a")))
  );

  test("Length-four list returns last item", () =>
    Expect.(
      expect(Problem01.last(["a", "b", "c", "d"])) |> toBe(Some("d"))
    )
  );
});

describe("Problem02", () => {
  test("Empty list returns none", () =>
    Expect.(expect(Problem02.lastAndPenultimate([])) |> toBe(None))
  );

  test("Length-one returns none", () =>
    Expect.(expect(Problem02.lastAndPenultimate(["a"])) |> toBe(None))
  );

  test("Length-four list returns last and penultimate", () =>
    Expect.(
      expect(Problem02.lastAndPenultimate(["a", "b", "c", "d"]))
      |> toEqual(Some(("c", "d")))
    )
  );
});
