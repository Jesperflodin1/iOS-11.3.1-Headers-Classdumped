/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAccessorySetting.h>
#import <libobjc.A.dylib/_HMAccesorySettingDelegate.h>

@class NSArray, NSString;

@interface HMAccessorySelectionSetting : HMAccessorySetting <_HMAccesorySettingDelegate>

@property (copy,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInternal:(id)arg1 ;
-(NSArray *)items;
-(void)_setting:(id)arg1 didAddConstraint:(id)arg2 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 items:(id)arg4 ;
-(void)addItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

