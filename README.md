### simple acs217 sketch for AC/DC Current
> for measuering DC Current Define DC.
```
	#define DC
```
> for measuering AC Current Define AC.
```
	#define AC
```
> note :
	* this lib uses RMS technique for measuering AC current.
	it smaples squares of current according to the freq of the current
	and then it retrun `RMS` root mean square of it.
	* the error margin when i tested it was about 0.05 A.
 
