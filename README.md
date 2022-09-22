## ietime

print a UTC RRSIG inception / expiration time in the form `YYYYMMDDHHMMSS` (the time is all zeroes).

```
Usage: ietime [-z] [+/- days]
```

### options

`-z` is zero, i.e. zero out the HHMMSS components

with days being a positive integer (negative values permitted but likely not useful) with a default of `30`.

```console
% ietime
20221022180915

% ietime 2
argc==2
20220924181204

% ietime -z 180
argc==2
20230321000000
```
