/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CMCallHandednessDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMCallHandednessManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	Dispatcher* fDispatcher;
	id<CMCallHandednessDelegate> _delegate;

}

@property (assign,nonatomic) id<CMCallHandednessDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isCallHandednessAvailable;
-(void)onCallHandednessStateUpdated:(const Sample*)arg1 ;
-(void)startCallHandednessUpdates;
-(void)stopCallHandednessUpdates;
-(id)init;
-(id<CMCallHandednessDelegate>)delegate;
-(void)setDelegate:(id<CMCallHandednessDelegate>)arg1 ;
-(void)dealloc;
@end

