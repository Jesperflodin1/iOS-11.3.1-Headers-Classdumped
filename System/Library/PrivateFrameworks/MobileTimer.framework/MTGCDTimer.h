/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface MTGCDTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;

}
-(void)dealloc;
-(void)startTimer:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)cancelTimer;
@end

