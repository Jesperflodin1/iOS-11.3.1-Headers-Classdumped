/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate> {

	MediaPlayerPrivateAVFoundationObjC* m_callback;
	NSObject*<OS_dispatch_semaphore> m_semaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)outputMediaDataWillChange:(AVPlayerItemVideoOutput*)arg1 ;
-(void)setCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
-(id)initWithCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
-(void)outputSequenceWasFlushed:(AVPlayerItemVideoOutput*)arg1 ;
@end
