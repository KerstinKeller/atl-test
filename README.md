This repo is here to try and figure out why we have problem building an executable including atl headers.

The project can be build with
```
cmake --workflow --preset $PRESET
```
where `$PRESET` is one of `VS2019`, `VS2022`, `ninja`


## Current findings

Image  | windows-2022 | windows-2025
------|---------------|-------------------
v143  |    +          |   +
v142  |    -          |   -
v141  |    -          |   -

Basically, we can only use ATL headers with the most recent VS toolsets.

Trying to change the VS installation and install ATL during the setup for v141 / v142 so far has not been successful.





