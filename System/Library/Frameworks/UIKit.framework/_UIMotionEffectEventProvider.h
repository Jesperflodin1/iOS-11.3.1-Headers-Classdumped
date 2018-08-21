/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIMotionEffectEventConsumer;
@interface _UIMotionEffectEventProvider : NSObject {

	id<_UIMotionEffectEventConsumer> _consumer;

}

@property (assign) id<_UIMotionEffectEventConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)setConsumer:(id<_UIMotionEffectEventConsumer>)arg1 ;
-(BOOL)shouldLogEvents;
-(double)fastUpdateIntervalForLogs;
-(double)slowUpdateIntervalForLogs;
-(void)setSlowUpdatesEnabled:(BOOL)arg1 ;
-(BOOL)wantsSynchronizedUpdates;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(id)currentEvent;
-(id<_UIMotionEffectEventConsumer>)consumer;
@end
