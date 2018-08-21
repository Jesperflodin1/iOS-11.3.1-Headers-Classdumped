/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLMercurySubBatchLayout : NFLSubBatchLayout {

	int _layoutType;
	NFLSingleComponentLayout* _largeSixComponent;
	NFLSingleComponentLayout* _leftThreeComponent;
	NFLSingleComponentLayout* _rightThreeComponent;
	NFLSingleComponentLayout* _bottomSixComponent;

}

@property (assign,nonatomic) int layoutType;                                              //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * largeSixComponent;                //@synthesize largeSixComponent=_largeSixComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * leftThreeComponent;               //@synthesize leftThreeComponent=_leftThreeComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * rightThreeComponent;              //@synthesize rightThreeComponent=_rightThreeComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * bottomSixComponent;               //@synthesize bottomSixComponent=_bottomSixComponent - In the implementation block
-(double)rank;
-(BOOL)isValid;
-(int)layoutType;
-(void)setLayoutType:(int)arg1 ;
-(NFLSingleComponentLayout *)bottomSixComponent;
-(NFLSingleComponentLayout *)leftThreeComponent;
-(NFLSingleComponentLayout *)rightThreeComponent;
-(id)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(void)setBottomSixComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setRightThreeComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setLeftThreeComponent:(NFLSingleComponentLayout *)arg1 ;
-(NFLSingleComponentLayout *)largeSixComponent;
-(id)initWithFeedSettings:(id)arg1 layoutType:(int)arg2 ;
-(void)setLargeSixComponent:(NFLSingleComponentLayout *)arg1 ;
-(unsigned long long)rowSpan;
@end

