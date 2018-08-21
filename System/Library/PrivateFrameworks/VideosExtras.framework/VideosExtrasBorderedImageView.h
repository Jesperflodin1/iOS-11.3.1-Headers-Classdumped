/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtras-Structs.h>
#import <UIKit/UIImageView.h>

@class UIColor;

@interface VideosExtrasBorderedImageView : UIImageView {

	BOOL _shouldDeferSettingTransform;
	BOOL _shouldUseTransformWhenReplicatingState;
	BOOL _shouldSkipImageWhenReplicatingState;
	CGAffineTransform _deferredTransform;

}

@property (assign,nonatomic) CGAffineTransform deferredTransform;                      //@synthesize deferredTransform=_deferredTransform - In the implementation block
@property (assign,nonatomic) BOOL shouldDeferSettingTransform;                         //@synthesize shouldDeferSettingTransform=_shouldDeferSettingTransform - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTransformWhenReplicatingState;              //@synthesize shouldUseTransformWhenReplicatingState=_shouldUseTransformWhenReplicatingState - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipImageWhenReplicatingState;                 //@synthesize shouldSkipImageWhenReplicatingState=_shouldSkipImageWhenReplicatingState - In the implementation block
@property (nonatomic,copy) UIColor * borderColor; 
@property (assign,nonatomic) double borderWidth; 
-(void)setTransform:(CGAffineTransform)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(double)borderWidth;
-(void)setShouldSkipImageWhenReplicatingState:(BOOL)arg1 ;
-(void)setShouldUseTransformWhenReplicatingState:(BOOL)arg1 ;
-(void)setShouldDeferSettingTransform:(BOOL)arg1 ;
-(CGAffineTransform)deferredTransform;
-(void)setDeferredTransform:(CGAffineTransform)arg1 ;
-(void)replicateStateFromImageView:(id)arg1 ;
-(BOOL)shouldDeferSettingTransform;
-(BOOL)shouldSkipImageWhenReplicatingState;
-(BOOL)shouldUseTransformWhenReplicatingState;
@end

