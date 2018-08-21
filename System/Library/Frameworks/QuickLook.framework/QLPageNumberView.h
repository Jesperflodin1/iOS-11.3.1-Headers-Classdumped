/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSNumberFormatter;

@interface QLPageNumberView : UIView {

	long long _pageNumber;
	long long _pageCount;
	UILabel* _backgroundLabel;
	UILabel* _label;
	NSNumberFormatter* _indexFormatter;

}

@property (assign) long long pageNumber; 
@property (assign) long long pageCount; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(long long)pageCount;
-(void)setPageCount:(long long)arg1 ;
-(long long)pageNumber;
-(id)_indexFormatter;
-(void)_updateString;
-(CGPathRef)_copyMutablePathForRoundedRect:(CGRect)arg1 radius:(double)arg2 inverted:(BOOL)arg3 ;
-(void)setPageNumber:(long long)arg1 ;
@end

