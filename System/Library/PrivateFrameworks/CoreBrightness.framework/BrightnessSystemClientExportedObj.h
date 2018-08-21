/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BacklightSystemDelegateXpcProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, BrightnessSystemClientInternal, NSString;

@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol> {

	/*^block*/id clientBlock;
	NSObject*<OS_dispatch_queue> queue;
	BrightnessSystemClientInternal* _target;

}

@property (assign,nonatomic) BrightnessSystemClientInternal * target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)notifyChangedProperty:(id)arg1 value:(id)arg2 ;
-(void)unregisterNotificationBlock;
-(void)dealloc;
-(BrightnessSystemClientInternal *)target;
-(void)setTarget:(BrightnessSystemClientInternal *)arg1 ;
@end

