/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetSeatSettingsInCarIntentExport.h>

@class NSNumber, NSString;

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enableHeating; 
@property (nonatomic,copy,readonly) NSNumber * enableCooling; 
@property (nonatomic,copy,readonly) NSNumber * enableMassage; 
@property (nonatomic,readonly) long long seat; 
@property (nonatomic,copy,readonly) NSNumber * level; 
@property (nonatomic,readonly) long long relativeLevelSetting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(id)domain;
-(void)setLevel:(NSNumber *)arg1 ;
-(NSNumber *)level;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setEnableHeating:(NSNumber *)arg1 ;
-(void)setEnableCooling:(NSNumber *)arg1 ;
-(void)setEnableMassage:(NSNumber *)arg1 ;
-(void)setSeat:(long long)arg1 ;
-(void)setRelativeLevelSetting:(long long)arg1 ;
-(NSNumber *)enableHeating;
-(NSNumber *)enableCooling;
-(NSNumber *)enableMassage;
-(long long)seat;
-(long long)relativeLevelSetting;
-(id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6 ;
-(void)setVerb:(id)arg1 ;
-(id)verb;
-(id)_metadata;
-(void)setDomain:(id)arg1 ;
@end

