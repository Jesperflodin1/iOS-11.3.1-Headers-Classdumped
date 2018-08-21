/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUITableViewCell.h>

@class SearchUIIconViewContainer, TLKAuxilliaryTextView, NSLayoutConstraint, NSArray;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell {

	SearchUIIconViewContainer* _topContainer;
	SearchUIIconViewContainer* _bottomContainer;
	TLKAuxilliaryTextView* _folderLabelView;
	NSLayoutConstraint* _singleRowConstraint;
	NSLayoutConstraint* _doubleRowConstraint;
	NSArray* _results;
	long long _indexOfSelectedKeyboardIcon;

}

@property (retain) SearchUIIconViewContainer * topContainer;                     //@synthesize topContainer=_topContainer - In the implementation block
@property (retain) SearchUIIconViewContainer * bottomContainer;                  //@synthesize bottomContainer=_bottomContainer - In the implementation block
@property (retain) TLKAuxilliaryTextView * folderLabelView;                      //@synthesize folderLabelView=_folderLabelView - In the implementation block
@property (retain) NSLayoutConstraint * singleRowConstraint;                     //@synthesize singleRowConstraint=_singleRowConstraint - In the implementation block
@property (retain) NSLayoutConstraint * doubleRowConstraint;                     //@synthesize doubleRowConstraint=_doubleRowConstraint - In the implementation block
@property (retain) NSArray * results;                                            //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) long long indexOfSelectedKeyboardIcon;              //@synthesize indexOfSelectedKeyboardIcon=_indexOfSelectedKeyboardIcon - In the implementation block
+(unsigned long long)numberOfColumnsForCurrentOrientation;
+(void)removeDropShadowIconStateForView:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(BOOL)isExpandable;
-(unsigned long long)numberOfVisibleColumns;
-(id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3 ;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)canSetupKeyboardHandler;
-(void)setupKeyboardHandler;
-(BOOL)navigateKeyboardRight;
-(void)returnKeyPressed;
-(BOOL)navigateKeyboardLeft;
-(void)removeKeyboardHandler;
-(id)visibleResults;
-(void)updateExpanded:(BOOL)arg1 ;
-(void)setTopContainer:(SearchUIIconViewContainer *)arg1 ;
-(void)setSingleRowConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomContainer:(SearchUIIconViewContainer *)arg1 ;
-(void)setDoubleRowConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)doubleRowConstraint;
-(void)updateSpacerWidthsForPlatterInsets;
-(SearchUIIconViewContainer *)topContainer;
-(void)setIndexOfSelectedKeyboardIcon:(long long)arg1 ;
-(SearchUIIconViewContainer *)bottomContainer;
-(TLKAuxilliaryTextView *)folderLabelView;
-(void)setFolderLabelView:(TLKAuxilliaryTextView *)arg1 ;
-(void)updateNumberOfColumns;
-(unsigned long long)numberOfVisibleResults;
-(id)iconContainers;
-(NSLayoutConstraint *)singleRowConstraint;
-(long long)indexOfSelectedKeyboardIcon;
@end
