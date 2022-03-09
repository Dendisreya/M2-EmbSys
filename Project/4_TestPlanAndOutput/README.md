
# TEST PLAN:

  ## Table no: High level test plan

| *Test ID* | *Description*                                              | *Exp I/P* | *Exp O/P* | *Actual Out* |*Type Of Test*  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Tested on measurement of distance between people or objects|3m distance| 3m distance|3m distance|Technical |
|  H_02      |find buzzer sound when distance less than 2m  | 1m distance|Buzzer sound|Buzzer sound|Technical |
|  H_03     |find display alert distance on OLED when distance less than 2m| 2m distance|Stay away|Stay away|Technical |
|  H_04     |find Turning on the LED when distance less than 2m	| 1.8m distance|LED glows|LED glows|Technical |


## Table no: Low level test plan

| *Test ID* | *HLT ID* |*Description*                                              | *Exp IN* | *Exp OUT* | *Actual Out* |*Type Of Test*  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01|Tested on measurement of distance between people or objects | 3m distance |SUCCESS|SUCCESS |Technical |
|  L_02       | H_02|find buzzer sound when ditance less than 2m | 1m distance |SUCCESS|SUCCESS |Technical |
|  L_03      | H_03|Find display alert  on the OLED when distance less than 2m| 2m distance |SUCCESS|SUCCESS |Technical |
|  L_04       | H_04|Find turning on the LED when distance less than 2m | 1.8m distance |SUCCESS|SUCCESS |Technical |

