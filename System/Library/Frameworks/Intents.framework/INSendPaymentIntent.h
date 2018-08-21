/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendPaymentIntentExport.h>

@class INPerson, INCurrencyAmount, NSString;

@interface INSendPaymentIntent : INIntent <INSendPaymentIntentExport>

@property (nonatomic,copy,readonly) INPerson * payee; 
@property (nonatomic,copy,readonly) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy,readonly) NSString * note; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(id)domain;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INPerson *)payee;
-(void)setPayee:(INPerson *)arg1 ;
-(id)initWithPayee:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3 ;
-(void)setVerb:(id)arg1 ;
-(id)verb;
-(id)_metadata;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(INCurrencyAmount *)arg1 ;
-(void)setDomain:(id)arg1 ;
-(void)setNote:(NSString *)arg1 ;
-(NSString *)note;
@end

