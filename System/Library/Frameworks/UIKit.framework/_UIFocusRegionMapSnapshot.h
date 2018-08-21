/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, _UIFocusRegionMapSnapshotRequest, UIView, NSArray, NSMutableArray;

@interface _UIFocusRegionMapSnapshot : NSObject <NSCopying> {

	BOOL _isFocusedRectEmpty;
	BOOL _didSetRegionClipFrame;
	CGRect _regionClipFrame;
	BOOL _committed;
	BOOL _privateSnaphot;
	BOOL _clipToSnapshotRect;
	UIImage* _visualRepresentation;
	_UIFocusRegionMapSnapshotRequest* _request;
	UIView* _rootView;
	NSArray* _sortedFocusContainerGuideMapEntries;
	NSMutableArray* _detectedFocusableViewMapEntries;
	NSMutableArray* _detectedFocusableGuideMapEntries;
	NSMutableArray* _detectedFocusContainerGuideMapEntries;
	NSMutableArray* _retainedPromiseRegions;
	unsigned long long _focusHeading;
	UIView* _focusableRegionAncestorView;
	NSArray* _finalFocusableRegionMapEntries;
	CGPoint _visualRepresentationScreenCenter;
	CGRect _mapEntriesFrame;
	CGRect _snapshottedRect;
	CGRect _focusedRect;
	CGRect _visualRepresentationMinimumArea;

}

@property (nonatomic,retain) NSMutableArray * detectedFocusableViewMapEntries;                    //@synthesize detectedFocusableViewMapEntries=_detectedFocusableViewMapEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFocusableGuideMapEntries;                   //@synthesize detectedFocusableGuideMapEntries=_detectedFocusableGuideMapEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFocusContainerGuideMapEntries;              //@synthesize detectedFocusContainerGuideMapEntries=_detectedFocusContainerGuideMapEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * retainedPromiseRegions;                             //@synthesize retainedPromiseRegions=_retainedPromiseRegions - In the implementation block
@property (assign,getter=isCommitted,nonatomic) BOOL committed;                                   //@synthesize committed=_committed - In the implementation block
@property (assign,nonatomic) CGRect focusedRect;                                                  //@synthesize focusedRect=_focusedRect - In the implementation block
@property (assign,nonatomic) unsigned long long focusHeading;                                     //@synthesize focusHeading=_focusHeading - In the implementation block
@property (assign,nonatomic) BOOL clipToSnapshotRect;                                             //@synthesize clipToSnapshotRect=_clipToSnapshotRect - In the implementation block
@property (assign,nonatomic) CGRect visualRepresentationMinimumArea;                              //@synthesize visualRepresentationMinimumArea=_visualRepresentationMinimumArea - In the implementation block
@property (assign,nonatomic,__weak) UIView * focusableRegionAncestorView;                         //@synthesize focusableRegionAncestorView=_focusableRegionAncestorView - In the implementation block
@property (nonatomic,readonly) CGRect mapEntriesFrame;                                            //@synthesize mapEntriesFrame=_mapEntriesFrame - In the implementation block
@property (assign,nonatomic) CGPoint visualRepresentationScreenCenter;                            //@synthesize visualRepresentationScreenCenter=_visualRepresentationScreenCenter - In the implementation block
@property (nonatomic,copy) NSArray * finalFocusableRegionMapEntries;                              //@synthesize finalFocusableRegionMapEntries=_finalFocusableRegionMapEntries - In the implementation block
@property (nonatomic,copy) NSArray * sortedFocusContainerGuideMapEntries;                         //@synthesize sortedFocusContainerGuideMapEntries=_sortedFocusContainerGuideMapEntries - In the implementation block
@property (nonatomic,copy,readonly) _UIFocusRegionMapSnapshotRequest * request;                   //@synthesize request=_request - In the implementation block
@property (nonatomic,__weak,readonly) UIView * rootView;                                          //@synthesize rootView=_rootView - In the implementation block
@property (nonatomic,readonly) CGRect snapshottedRect;                                            //@synthesize snapshottedRect=_snapshottedRect - In the implementation block
@property (assign,getter=isPrivateSnapshot,nonatomic) BOOL privateSnaphot;                        //@synthesize privateSnaphot=_privateSnaphot - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allFocusableRegionMapEntries; 
@property (nonatomic,readonly) UIImage * visualRepresentation;                                    //@synthesize visualRepresentation=_visualRepresentation - In the implementation block
+(id)combinedVisualRepresentationForSnapshots:(id)arg1 scaleFactor:(double)arg2 ;
-(_UIFocusRegionMapSnapshotRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugQuickLookObject;
-(unsigned long long)focusHeading;
-(void)setFocusHeading:(unsigned long long)arg1 ;
-(id)_initWithRequest:(id)arg1 ;
-(UIView *)rootView;
-(void)_commit;
-(CGRect)focusedRect;
-(void)setFocusedRect:(CGRect)arg1 ;
-(BOOL)clipToSnapshotRect;
-(void)setClipToSnapshotRect:(BOOL)arg1 ;
-(UIView *)focusableRegionAncestorView;
-(void)setFocusableRegionAncestorView:(UIView *)arg1 ;
-(CGRect)visualRepresentationMinimumArea;
-(void)setVisualRepresentationMinimumArea:(CGRect)arg1 ;
-(CGRect)snapshottedRect;
-(CGRect)_clippedRegionFrame:(CGRect)arg1 isFocusGuide:(BOOL)arg2 ;
-(NSMutableArray *)detectedFocusableGuideMapEntries;
-(void)_punchHoleInMap:(id)arg1 atFrame:(CGRect)arg2 ;
-(NSMutableArray *)detectedFocusableViewMapEntries;
-(NSMutableArray *)detectedFocusContainerGuideMapEntries;
-(id)_finalFocusableRegionMapEntriesFromMapEntries:(id)arg1 ;
-(id)_finalFocusableRegionMapEntriesFromViewMapEntries:(id)arg1 guideMapEntries:(id)arg2 ;
-(void)setFinalFocusableRegionMapEntries:(NSArray *)arg1 ;
-(id)_sortedEligibleFocusContainerGuidesInArray:(id)arg1 ;
-(void)setSortedFocusContainerGuideMapEntries:(NSArray *)arg1 ;
-(void)_updateFinalFocusableRegionMapEntries;
-(void)_updateSortedFocusContainerGuideMapEntries;
-(void)setCommitted:(BOOL)arg1 ;
-(NSArray *)finalFocusableRegionMapEntries;
-(void)_occludeFocusInFrame:(CGRect)arg1 ;
-(BOOL)isCommitted;
-(NSArray *)sortedFocusContainerGuideMapEntries;
-(id)visualRepresentationWithMinimumArea:(CGRect)arg1 ;
-(CGRect)mapEntriesFrame;
-(void)setVisualRepresentationScreenCenter:(CGPoint)arg1 ;
-(UIImage *)visualRepresentation;
-(CGPoint)visualRepresentationScreenCenter;
-(void)_addFocusableRegion:(id)arg1 isFocusGuide:(BOOL)arg2 withFrame:(CGRect)arg3 ;
-(void)_addFocusContainerGuide:(id)arg1 withFrame:(CGRect)arg2 ;
-(NSArray *)allFocusableRegionMapEntries;
-(id)focusableRegionMapEntriesLimitedByFocusContainerGuide:(id)arg1 ;
-(id)_snapshotByFulfillingPromiseFocusRegionEntry:(id)arg1 ;
-(void)_didChooseFocusCandidateRegion:(id)arg1 ;
-(BOOL)isPrivateSnapshot;
-(void)setPrivateSnaphot:(BOOL)arg1 ;
-(void)setDetectedFocusableViewMapEntries:(NSMutableArray *)arg1 ;
-(void)setDetectedFocusableGuideMapEntries:(NSMutableArray *)arg1 ;
-(void)setDetectedFocusContainerGuideMapEntries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)retainedPromiseRegions;
-(void)setRetainedPromiseRegions:(NSMutableArray *)arg1 ;
@end

