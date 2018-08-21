/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class UIScrollView, NSHashTable, NSDate, ISVisibilityOffsetHelper;

@interface ISScrollViewVitalityController : NSObject {

	BOOL __isPerformingChanges;
	BOOL _scrolling;
	BOOL _decelerating;
	BOOL _hasTargetContentOffset;
	UIScrollView* __scrollView;
	NSHashTable* __playerViews;
	NSDate* _estimatedScrollEndDate;
	ISVisibilityOffsetHelper* _visibilityOffsetHelper;
	CGPoint _targetContentOffset;

}

@property (assign,setter=_setScrollView:,nonatomic,__weak) UIScrollView * _scrollView;              //@synthesize _scrollView=__scrollView - In the implementation block
@property (nonatomic,readonly) NSHashTable * _playerViews;                                          //@synthesize _playerViews=__playerViews - In the implementation block
@property (assign,setter=_setPerformingChanges:,nonatomic) BOOL _isPerformingChanges;               //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (assign,getter=isScrolling,nonatomic) BOOL scrolling;                                     //@synthesize scrolling=_scrolling - In the implementation block
@property (assign,getter=isDecelerating,nonatomic) BOOL decelerating;                               //@synthesize decelerating=_decelerating - In the implementation block
@property (assign,nonatomic) BOOL hasTargetContentOffset;                                           //@synthesize hasTargetContentOffset=_hasTargetContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                           //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (nonatomic,retain) NSDate * estimatedScrollEndDate;                                       //@synthesize estimatedScrollEndDate=_estimatedScrollEndDate - In the implementation block
@property (nonatomic,readonly) ISVisibilityOffsetHelper * visibilityOffsetHelper;                   //@synthesize visibilityOffsetHelper=_visibilityOffsetHelper - In the implementation block
@property (nonatomic,readonly) BOOL canPerformVitality; 
-(id)init;
-(BOOL)isDecelerating;
-(UIScrollView *)_scrollView;
-(BOOL)isScrolling;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)_isPerformingChanges;
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(void)addPlayerView:(id)arg1 ;
-(void)removePlayerView:(id)arg1 ;
-(void)_setScrollView:(id)arg1 ;
-(void)setEstimatedScrollEndDate:(NSDate *)arg1 ;
-(void)setDecelerating:(BOOL)arg1 ;
-(NSDate *)estimatedScrollEndDate;
-(NSHashTable *)_playerViews;
-(void)_updateVitalityFilters;
-(BOOL)hasTargetContentOffset;
-(BOOL)canPerformVitality;
-(ISVisibilityOffsetHelper *)visibilityOffsetHelper;
-(id)_newVitalityFilter;
-(void)didLayoutPlayerViews;
-(void)setHasTargetContentOffset:(BOOL)arg1 ;
-(void)canPerformVitalityDidChange;
-(void)setScrolling:(BOOL)arg1 ;
@end

