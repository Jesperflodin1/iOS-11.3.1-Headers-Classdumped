/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFCharacteristicValueSource;
@class HMActionSet, NSString;

@interface HFActionSetItem : HFItem <HFHomeKitItemProtocol, NSCopying> {

	HMActionSet* _actionSet;
	unsigned long long _actionSetItemStyle;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,readonly) HMActionSet * actionSet;                                  //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSetItemStyle;                    //@synthesize actionSetItemStyle=_actionSetItemStyle - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
+(id)_primaryStateForActionSet:(id)arg1 valueSource:(id)arg2 logger:(id)arg3 ;
+(BOOL)_value:(id)arg1 isApproximatelyEqualToValue:(id)arg2 characteristicMetadata:(id)arg3 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1 ;
-(id)_mostCommonRoomForActionSet:(id)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)turnOffActionSet;
-(id)executeActionSet;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)actionSetItemStyle;
-(id)initWithActionSet:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 valueSource:(id)arg3 ;
-(id)rooms;
-(HMActionSet *)actionSet;
@end

