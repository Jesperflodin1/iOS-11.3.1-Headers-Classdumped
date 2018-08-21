/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
@interface NFLCoverArticlesWidgetLayout : NSObject {

	BOOL _isCompact;
	double _widgetWidth;
	double _widgetHeight;
	double _footerHeight;
	double _portraitCoverMargin;
	double _landscapeCoverMargin;
	double _sideCoverMargin;
	double _focusedShadowRadius;
	double _focusedShadowOffset;
	double _sideCoverShadowRadius;
	double _sideCoverShadowOffset;
	double _sideCoverBleed;
	CGSize _bounds;

}

@property (nonatomic,readonly) CGSize bounds;                           //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) BOOL isCompact;                          //@synthesize isCompact=_isCompact - In the implementation block
@property (assign,nonatomic) double widgetWidth;                        //@synthesize widgetWidth=_widgetWidth - In the implementation block
@property (assign,nonatomic) double widgetHeight;                       //@synthesize widgetHeight=_widgetHeight - In the implementation block
@property (assign,nonatomic) double footerHeight;                       //@synthesize footerHeight=_footerHeight - In the implementation block
@property (assign,nonatomic) double portraitCoverMargin;                //@synthesize portraitCoverMargin=_portraitCoverMargin - In the implementation block
@property (assign,nonatomic) double landscapeCoverMargin;               //@synthesize landscapeCoverMargin=_landscapeCoverMargin - In the implementation block
@property (assign,nonatomic) double sideCoverMargin;                    //@synthesize sideCoverMargin=_sideCoverMargin - In the implementation block
@property (assign,nonatomic) double focusedShadowRadius;                //@synthesize focusedShadowRadius=_focusedShadowRadius - In the implementation block
@property (assign,nonatomic) double focusedShadowOffset;                //@synthesize focusedShadowOffset=_focusedShadowOffset - In the implementation block
@property (assign,nonatomic) double sideCoverShadowRadius;              //@synthesize sideCoverShadowRadius=_sideCoverShadowRadius - In the implementation block
@property (assign,nonatomic) double sideCoverShadowOffset;              //@synthesize sideCoverShadowOffset=_sideCoverShadowOffset - In the implementation block
@property (assign,nonatomic) double sideCoverBleed;                     //@synthesize sideCoverBleed=_sideCoverBleed - In the implementation block
+(id)layoutForFeedSettings:(id)arg1 ;
+(id)layoutForDevice;
-(CGSize)bounds;
-(double)footerHeight;
-(void)setFooterHeight:(double)arg1 ;
-(BOOL)isCompact;
-(id)initWithBounds:(CGSize)arg1 compactLayout:(BOOL)arg2 ;
-(void)setupCompactLayout;
-(void)setupRegularLayout;
-(double)calculateWidgetHeight;
-(double)portraitCoverMargin;
-(double)landscapeCoverMargin;
-(CGSize)coverBoundsConstrainedToSize:(CGSize)arg1 ;
-(double)widgetWidth;
-(void)setWidgetWidth:(double)arg1 ;
-(double)widgetHeight;
-(void)setWidgetHeight:(double)arg1 ;
-(void)setPortraitCoverMargin:(double)arg1 ;
-(void)setLandscapeCoverMargin:(double)arg1 ;
-(double)sideCoverMargin;
-(void)setSideCoverMargin:(double)arg1 ;
-(double)focusedShadowRadius;
-(void)setFocusedShadowRadius:(double)arg1 ;
-(double)focusedShadowOffset;
-(void)setFocusedShadowOffset:(double)arg1 ;
-(double)sideCoverShadowRadius;
-(void)setSideCoverShadowRadius:(double)arg1 ;
-(double)sideCoverShadowOffset;
-(void)setSideCoverShadowOffset:(double)arg1 ;
-(double)sideCoverBleed;
-(void)setSideCoverBleed:(double)arg1 ;
@end
