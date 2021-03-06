/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDate;


@protocol INListRideOptionsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * rideOptions; 
@property (nonatomic,copy) NSArray * paymentMethods; 
@property (nonatomic,copy) NSDate * expirationDate; 
@required
-(long long)code;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(id)arg1;
-(NSArray *)paymentMethods;
-(void)setPaymentMethods:(id)arg1;
-(void)setRideOptions:(id)arg1;
-(NSArray *)rideOptions;

@end

