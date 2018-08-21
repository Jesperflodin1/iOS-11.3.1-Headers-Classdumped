/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFHomeKitTransformItem.h>
#import <libobjc.A.dylib/HFServiceVendor.h>
#import <libobjc.A.dylib/HFCharacteristicWriteActionBuilderFactory.h>

@class NSString;

@interface HUServiceGridTransformItem : HFHomeKitTransformItem <HFServiceVendor, HFCharacteristicWriteActionBuilderFactory>

@property (nonatomic,readonly) HFItem*<HFHomeKitItemProtocol>*<HFServiceVendor>*<HFCharacteristicWriteActionBuilderFactory> sourceServicePickerItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)services;
-(HFItem*<HFHomeKitItemProtocol>*<HFServiceVendor>*<HFCharacteristicWriteActionBuilderFactory>)sourceServicePickerItem;
-(BOOL)containsActionableCharacteristics;
-(BOOL)actionsMayRequireDeviceUnlock;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(id)accessories;
@end

