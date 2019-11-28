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
