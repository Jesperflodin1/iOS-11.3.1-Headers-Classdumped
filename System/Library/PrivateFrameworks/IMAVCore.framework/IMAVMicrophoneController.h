/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray, IMAVMicrophone;

@interface IMAVMicrophoneController : NSObject {

	id _internal;
	NSMutableArray* _microphones;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain,readonly) NSArray * microphones; 
@property (nonatomic,retain) IMAVMicrophone * currentMicrophone; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSArray *)microphones;
-(void)setCurrentMicrophone:(IMAVMicrophone *)arg1 ;
-(void)_rebuildMicrophoneList;
-(void)_loadSavedMicrophone;
-(IMAVMicrophone *)currentMicrophone;
@end

