/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDDemoDataFormula : NSObject
+(double)computeBasalMetabolicRateFromWeight:(double)arg1 height:(double)arg2 age:(double)arg3 sex:(long long)arg4 ;
+(double)computeBloodAlcoholContentForNumDrinks:(double)arg1 elapsedTime:(double)arg2 weight:(double)arg3 sex:(long long)arg4 ;
+(double)computeLeanBodyMassFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3 waistCircumference:(double)arg4 forearmCircumference:(double)arg5 wristCircumference:(double)arg6 hipCircumference:(double)arg7 ;
+(double)computeBodyFatPercentageFromWeight:(double)arg1 leanBodyMass:(double)arg2 ;
+(double)computeBodyMassIndexFromWeight:(double)arg1 height:(double)arg2 ;
+(double)_computeHumeLeanBodyWeightFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3 ;
+(double)_computeOther1LeanBodyWeightFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3 ;
+(double)_computeOther2LeanBodyWeightFromWeight:(double)arg1 sex:(long long)arg2 waistCircumference:(double)arg3 forearmCircumference:(double)arg4 wristCircumference:(double)arg5 hipCircumference:(double)arg6 ;
+(double)convertDegreeCelsiusToFahrenheit:(double)arg1 ;
+(double)convertDegreeFahrenheitToCelsius:(double)arg1 ;
@end

