/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoPassKit/NanoPassKit-Structs.h>
@class NSObject;

@interface NPKPMUButtonListener : NSObject {

	/*^block*/id _buttonHandler;
	IOHIDEventSystemClientRef _hidSystemClient;
	NSObject*<OS_dispatch_queue> _hidSystemQueue;

}

@property (nonatomic,copy) id buttonHandler;                                           //@synthesize buttonHandler=_buttonHandler - In the implementation block
@property (assign,nonatomic) IOHIDEventSystemClientRef hidSystemClient;                //@synthesize hidSystemClient=_hidSystemClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> hidSystemQueue;              //@synthesize hidSystemQueue=_hidSystemQueue - In the implementation block
-(void)dealloc;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)_initializeHIDClient;
-(void)_handleButtonEvent:(IOHIDEventRef)arg1 ;
-(void)setHidSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(void)setHidSystemQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)buttonHandler;
-(void)setButtonHandler:(id)arg1 ;
-(IOHIDEventSystemClientRef)hidSystemClient;
-(NSObject*<OS_dispatch_queue>)hidSystemQueue;
@end

