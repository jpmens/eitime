## eitime

print a timestamp in UTC `YYYYMMDDHHMMSS` for RRSIG expiration/inception times. The `HHMMSS` can be zeroes.

```
Usage: eitime [-z] [+/- days]
```

### options

`-z` is zero, i.e. zero out the HHMMSS components

with days being a positive integer (negative values permitted but likely not useful) with a default of `30`.

```console
% eitime
20221022180915

% eitime 2
argc==2
20220924181204

% eitime -z 180
argc==2
20230321000000
```

### name

What's with the name? `e`xpiration / `i`nception time. That's the order of the timestamps in an RRSIG. I pronounce it "eye-time". ;)
