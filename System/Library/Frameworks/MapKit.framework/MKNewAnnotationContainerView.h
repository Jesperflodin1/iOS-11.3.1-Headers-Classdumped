/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationContainerView.h>

@class NSMutableDictionary, NSMutableSet;

@interface MKNewAnnotationContainerView : MKAnnotationContainerView {

	BOOL _suppress;
	BOOL _isUpdating;
	double _lastUpdate;
	NSMutableDictionary* _clusterableAnnotationViews;
	NSMutableSet* _collidableAnnotationViews;
	NSMutableDictionary* _collidingAnnotationViews;
	NSMutableDictionary* _existingClusterAnnotationViews;

}
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)addAnnotationView:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)removeAnnotationView:(id)arg1 ;
-(void)_updateAnnotationView:(id)arg1 ;
-(void)_updateAnnotationViews:(id)arg1 ;
-(void)suppressUpdates;
-(void)stopSuppressingUpdates;
-(void)_updateAnnotationViewPositions;
-(id)_existingClusterViewsForClusterID:(id)arg1 ;
-(void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2 ;
-(void)_updateCollidableAnnotationViews;
-(void)_performStateUpdatesIfNeeded;
-(void)updateAnnotationViewsWithDelay;
-(void)updateAnnotationViewsForReason:(long long)arg1 ;
-(void)_updateAddedAnnotationRotation:(id)arg1 ;
-(void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2 ;
@end

