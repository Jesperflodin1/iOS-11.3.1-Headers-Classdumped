/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@class NSIndexPath;

@interface UIKBCandidateCollectionView : UICollectionView

@property (nonatomic,readonly) NSIndexPath * selectedItemIndexPath; 
-(BOOL)delaysContentTouches;
-(void)configureAsCandidatesBar;
-(NSIndexPath *)selectedItemIndexPath;
-(BOOL)_selectAndScrollToItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
@end
