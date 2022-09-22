## ietime

print an RRSIG inception / expiration time in the form `YYYYMMDD000000` (the time is all zeroes).

```
Usage: ietime offset
```

with offset being a number of days (negative values permitted but likely not useful)

```console
% ietime
20221022000000

% ietime 2
20220924000000

% ietime 180
20230321000000
```
