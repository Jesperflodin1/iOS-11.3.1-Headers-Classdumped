/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIAccessibilityCustomRotorItemResult;

@interface UIAccessibilityCustomRotorSearchPredicate : NSObject {

	UIAccessibilityCustomRotorItemResult* _currentItem;
	long long _searchDirection;

}

@property (nonatomic,retain) UIAccessibilityCustomRotorItemResult * currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) long long searchDirection;                                       //@synthesize searchDirection=_searchDirection - In the implementation block
-(UIAccessibilityCustomRotorItemResult *)currentItem;
-(void)setCurrentItem:(UIAccessibilityCustomRotorItemResult *)arg1 ;
-(long long)searchDirection;
-(void)setSearchDirection:(long long)arg1 ;
@end

