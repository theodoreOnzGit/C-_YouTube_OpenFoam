# GeN-Foam differential-test references (`genfoam-vs-upstream-refs` branch)

This branch holds only data. It is unrelated to this repository's `master`
branch (the OpenFOAM C++ YouTube material), which it does not touch.

It is mounted as a git submodule of
[`outram-park-backend`](https://github.com/theodoreOnzGit/outram-park-backend) at

```
crates/outram-foam-appbuilder-lib/verification_and_validation/genfoam_vs_upstream_gh1361/refs
```

Fetch it from an `outram-park-backend` checkout with:

```bash
git submodule update --init crates/outram-foam-appbuilder-lib/verification_and_validation/genfoam_vs_upstream_gh1361/refs
```

## What the files are

Each `*.ref.txt.gz` is a gzipped text dump taken from a run of the **real,
unmodified upstream GeN-Foam binary** (or an instrumented driver that calls
upstream's own classes), against which the Rust port in
`outram-foam-appbuilder-lib` is compared value by value. Which run produced
which file, with methodology, protocol and results, is recorded round by
round in `verification_and_validation/genfoam_vs_upstream_gh1361/README.md`
of `outram-park-backend`, and the scripts that produce them are in that
folder's `scripts/` and `upstream_driver/`.

- **Upstream:** GeN-Foam commit `652b3da`
  (<https://gitlab.com/foam-for-nuclear/GeN-Foam>, EPFL / PSI), built on
  OpenFOAM-ESI v2506 (<https://www.openfoam.com>).
- **Cases:** GeN-Foam's own public tutorials (2D_MSFR, 3D_SmallESFR,
  1D_boiling, PSBT, 1D_CHF, GFHR pebble) and documented variants of them.
- **Processing:** extracted by the scripts named above; no hand edits.

## Licence

These files are generated output of GPL-3.0 software (GeN-Foam, OpenFOAM)
run on GeN-Foam's public tutorial inputs. They are distributed as part of
the `outram-park-backend` verification record under that project's
AGPL-3.0-only licence; see its `LICENSE`, `RESPONSIBLE_USE.md` and
`DATA_POLICY.md`. For research, education and V&V only.

Moved here from `outram-park-backend` on 2026-11-27 (maintainer decision),
to stop the reference data growing that repository's tree.
