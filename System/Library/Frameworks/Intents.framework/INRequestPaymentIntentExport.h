/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INPerson, INCurrencyAmount, NSString;


@protocol INRequestPaymentIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * payer; 
@property (nonatomic,copy) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * note; 
@required
-(id)init;
-(INPerson *)payer;
-(void)setPayer:(id)arg1;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(id)arg1;
-(void)setNote:(id)arg1;
-(NSString *)note;

@end
