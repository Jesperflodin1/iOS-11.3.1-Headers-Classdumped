/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVFlashlightInternal;

@interface AVFlashlight : NSObject {

	AVFlashlightInternal* _internal;

}

@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (getter=isOverheated,nonatomic,readonly) BOOL overheated; 
@property (nonatomic,readonly) float flashlightLevel; 
+(BOOL)hasFlashlight;
+(void)initialize;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(float)flashlightLevel;
-(void)_setupFlashlight;
-(void)_teardownFlashlight;
-(BOOL)isOverheated;
-(BOOL)turnPowerOnWithError:(id*)arg1 ;
-(void)turnPowerOff;
-(BOOL)setFlashlightLevel:(float)arg1 withError:(id*)arg2 ;
-(void)_reconnectToServer;
-(id)init;
-(void)dealloc;
-(BOOL)isAvailable;
@end

