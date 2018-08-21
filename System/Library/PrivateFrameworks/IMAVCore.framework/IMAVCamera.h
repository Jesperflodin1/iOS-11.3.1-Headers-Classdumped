/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMAVCamera : NSObject {

	id _internalDevice;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) long long cameraStyle; 
@property (nonatomic,readonly) BOOL isWideScreen; 
@property (nonatomic,readonly) BOOL hasShutter; 
@property (nonatomic,readonly) BOOL isShutterOpen; 
@property (nonatomic,readonly) BOOL isSuspended; 
-(NSString *)uniqueID;
-(id)init;
-(BOOL)isSuspended;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(long long)cameraStyle;
-(id)_initWithAVCamera:(id)arg1 ;
-(BOOL)hasShutter;
-(BOOL)isShutterOpen;
-(id)_AVCamera;
-(BOOL)isWideScreen;
@end
