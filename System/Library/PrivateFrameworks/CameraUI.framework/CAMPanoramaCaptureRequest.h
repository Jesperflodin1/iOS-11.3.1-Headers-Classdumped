/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CAMPanoramaCaptureRequestDelegate;
@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {

	id<CAMPanoramaCaptureRequestDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<CAMPanoramaCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CAMPanoramaCaptureRequestDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
@end
