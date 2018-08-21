/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@class NSString;

@interface NFLHeadlineImageOnSideAccessibilityCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes {

	NSString* _titleFontName;
	double _titleFontSize;
	double _titleLineHeight;
	NSRange _titleNextToImageRange;

}

@property (assign,nonatomic) NSRange titleNextToImageRange;              //@synthesize titleNextToImageRange=_titleNextToImageRange - In the implementation block
@property (assign,nonatomic) CGRect titleNextToImageFrame; 
@property (assign,nonatomic) CGRect titleBellowImageFrame; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExcerptFontName:(id)arg1 ;
-(void)setExcerptFontSize:(double)arg1 ;
-(id)excerptFontName;
-(double)excerptFontSize;
-(void)setExcerptLineHeight:(double)arg1 ;
-(double)excerptLineHeight;
-(id)protobufRepresentation;
-(void)populateWithProtobuf:(id)arg1 ;
-(NSRange)titleNextToImageRange;
-(void)setTitleNextToImageRange:(NSRange)arg1 ;
-(CGRect)titleNextToImageFrame;
-(void)setTitleNextToImageFrame:(CGRect)arg1 ;
-(CGRect)titleBellowImageFrame;
-(void)setTitleBellowImageFrame:(CGRect)arg1 ;
@end

