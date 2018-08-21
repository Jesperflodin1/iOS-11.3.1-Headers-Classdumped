/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>
#import <libobjc.A.dylib/HFServiceLikeBuilderCreating.h>

@protocol HFCharacteristicValueSource;
@class HMAccessory, NSString;

@interface HFGenericAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating> {

	id<HFCharacteristicValueSource> _valueSource;
	HMAccessory* _accessory;

}

@property (nonatomic,readonly) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAccessory:(id)arg1 valueSource:(id)arg2 ;
-(id)services;
-(id<HFCharacteristicValueSource>)valueSource;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)copyWithValueSource:(id)arg1 ;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(HMAccessory *)accessory;
-(id)accessories;
@end

