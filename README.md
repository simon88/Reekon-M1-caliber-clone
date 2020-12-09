# Ongoing project

## Reekon M1 caliber clone

The idea is simple build a tool inspired by *Reekon M1 caliber tools* https://www.reekon.tools/

#### What are my needs ?

I need a tool to measure the lengths that I cut on my saw. Simple no ?  
Constraints :  
* Precision : 0.5mm < x < 1mm
* I must be able to measure different subjects (steel, wood, plastic...)
* As small as possible
* Build all I can
* Cheaper


#### Electronics and mechanic  

Just a little math for the precision calculation. I was inspired by for the design. So my tool will have a whell for the meseaurement. First problem, I have to find the compromise between precision and size because the precision is directly related to the wheel dimension.  
The smaller the wheel, the greater the precision but, the diameter of the wheel must not however be less than the diameter of the shaft of the encoder. The resolution is the circumference of the measuring wheel divided by the resolution of the encoder.

So let's try some example  


| Wheel diameter  | Circumference | Encoder 256cpr |  Encoder 600cpr |  Encoder 1000cpr | Encoder 2000cpr |
| ------------- | ------------- | -------------|  ------------- | ------------- | -------------|
| 15mm  | 47.1mm  | 0.184 | 0.0785 | 0.0471 | 0.0235 |
| 20mm  | 62.8mm  | 0.2453 | 0.1047 | 0.0628 | 0.0314 |
| 25mm  | 78.5mm  | 0.3066 | 0.1308 | 0.0785 | 0.0393 |
| 30mm  | 94.2mm  | 0.368 | 0.157 | 0.0942 | 0.0471 |
| 40mm  | 125.6mm  | 0.4906 | 0.2093 | 0.1256 | 0.0628 |

As you can see, the perferct combination is 2000cp encoder with 15mm wheel, but 15mm is too small, I think a good compromise is a wheel with a diameter of 30mm. So I have two chosse for the encoder 1000cpr or 2000cpr. I need to search and compare a price...

* Use STM32 maybe blue pill
* LCD to display the live measure
* Rotary optical encoder > 1000cpr

Stay tuned for update ! :)
