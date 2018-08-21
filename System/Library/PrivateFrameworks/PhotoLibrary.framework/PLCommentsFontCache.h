/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFontDescriptor, UIFont;

@interface PLCommentsFontCache : NSObject {

	UIFontDescriptor* __shortCaptionFontDescriptor;
	UIFontDescriptor* __emphasizedShortCaptionFontDescriptor;
	UIFontDescriptor* __shortSubheadlineFontDescriptor;
	UIFontDescriptor* __bodyFontDescriptor;
	UIFontDescriptor* __emphasizedBodyFontDescriptor;
	UIFontDescriptor* __shortBodyFontDescriptor;

}

@property (nonatomic,readonly) UIFont * youLikeFont; 
@property (nonatomic,readonly) UIFont * likeFont; 
@property (nonatomic,readonly) UIFont * commentTextFont; 
@property (nonatomic,readonly) UIFont * commentAttributionDateFont; 
@property (nonatomic,readonly) UIFont * commentAttributionNameFont; 
@property (nonatomic,readonly) UIFont * commentEntryFont; 
@property (nonatomic,readonly) UIFont * commentSendButtonFont; 
+(id)sharedCache;
-(id)init;
-(void)dealloc;
-(void)_invalidateCache;
-(void)_contentSizesDidChange:(id)arg1 ;
-(id)_shortCaptionFontDescriptor;
-(id)_bodyFontDescriptor;
-(id)_emphasizedShortCaptionFontDescriptor;
-(id)_shortSubheadlineFontDescriptor;
-(id)_shortBodyFontDescriptor;
-(id)_emphasizedBodyFontDescriptor;
-(UIFont *)likeFont;
-(UIFont *)youLikeFont;
-(UIFont *)commentAttributionNameFont;
-(UIFont *)commentAttributionDateFont;
-(UIFont *)commentTextFont;
-(UIFont *)commentEntryFont;
-(UIFont *)commentSendButtonFont;
@end
