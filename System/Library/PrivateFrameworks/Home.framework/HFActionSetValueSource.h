/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFCharacteristicValueSource.h>

@protocol HFActionSetBuilderProtocol, HFActionSetValueSourceDelegate;
@class HFItemBuilder, HMActionSet, NSString;

@interface HFActionSetValueSource : NSObject <HFCharacteristicValueSource> {

	HFItemBuilder*<HFActionSetBuilderProtocol> _actionSetBuilder;
	HMActionSet* _actionSet;
	id<HFActionSetValueSourceDelegate> _delegate;

}

@property (nonatomic,retain) HFItemBuilder*<HFActionSetBuilderProtocol> actionSetBuilder;                  //@synthesize actionSetBuilder=_actionSetBuilder - In the implementation block
@property (nonatomic,retain) HMActionSet * actionSet;                                                      //@synthesize actionSet=_actionSet - In the implementation block
@property (assign,nonatomic,__weak) id<HFActionSetValueSourceDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider; 
+(id)na_identity;
-(id<HFActionSetValueSourceDelegate>)delegate;
-(void)setDelegate:(id<HFActionSetValueSourceDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setActionSet:(HMActionSet *)arg1 ;
-(id)readValuesForCharacteristics:(id)arg1 ;
-(id)writeValuesForCharacteristics:(id)arg1 ;
-(void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3 ;
-(void)commitTransactionWithReason:(id)arg1 ;
-(id)cachedValueForCharacteristic:(id)arg1 ;
-(id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2 ;
-(void)setActionSetBuilder:(HFItemBuilder*<HFActionSetBuilderProtocol>)arg1 ;
-(id)_targetValueForCharacteristic:(id)arg1 ;
-(HFItemBuilder*<HFActionSetBuilderProtocol>)actionSetBuilder;
-(id)_existingActionBuilderForCharacteristic:(id)arg1 ;
-(id)_actionForCharacteristic:(id)arg1 ;
-(BOOL)_isCurrentStateCharacteristic:(id)arg1 ;
-(id)_valueForCurrentStateCharacteristic:(id)arg1 ;
-(id)initWithActionSetBuilder:(id)arg1 ;
-(id)initWithActionSet:(id)arg1 ;
-(HMActionSet *)actionSet;
@end

