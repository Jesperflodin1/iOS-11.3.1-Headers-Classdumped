/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXViewportChangeListener.h>

@protocol SXMediaPlaybackDelegate;
@class SXViewport, NSString;

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener> {

	id<SXMediaPlaybackDelegate> _mediaPlaybackDelegate;
	SXViewport* _viewport;

}

@property (assign,nonatomic,__weak) id<SXMediaPlaybackDelegate> mediaPlaybackDelegate;              //@synthesize mediaPlaybackDelegate=_mediaPlaybackDelegate - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                               //@synthesize viewport=_viewport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(id)initWithViewport:(id)arg1 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(id<SXMediaPlaybackDelegate>)mediaPlaybackDelegate;
-(void)setMediaPlaybackDelegate:(id<SXMediaPlaybackDelegate>)arg1 ;
-(void)registerMediaPlayBack:(id)arg1 ;
@end

