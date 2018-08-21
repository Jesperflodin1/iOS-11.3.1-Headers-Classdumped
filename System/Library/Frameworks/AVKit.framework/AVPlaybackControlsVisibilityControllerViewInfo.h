/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AVPlaybackControlsVisibilityControllerViewInfo : NSObject {

	BOOL _initiallyHidden;
	NSArray* _controls;
	long long _visibilityBehaviorOptions;

}

@property (nonatomic,retain) NSArray * controls;                                         //@synthesize controls=_controls - In the implementation block
@property (assign,nonatomic) long long visibilityBehaviorOptions;                        //@synthesize visibilityBehaviorOptions=_visibilityBehaviorOptions - In the implementation block
@property (assign,getter=isInitiallyHidden,nonatomic) BOOL initiallyHidden;              //@synthesize initiallyHidden=_initiallyHidden - In the implementation block
-(long long)visibilityBehaviorOptions;
-(void)setVisibilityBehaviorOptions:(long long)arg1 ;
-(BOOL)isInitiallyHidden;
-(void)setInitiallyHidden:(BOOL)arg1 ;
-(void)setControls:(NSArray *)arg1 ;
-(NSArray *)controls;
@end

