/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PXPlacesMapUpdatePlanResult <NSObject>
@property (readonly) NSSet * annotationsToAddImmediately; 
@property (readonly) NSSet * annotationsToRemoveImmediately; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasStarted; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasEnded; 
@property (readonly) NSSet * annotationsToRedraw; 
@property (readonly) NSSet * annotationsWithUpdatedIndex; 
@property (readonly) NSSet * overlaysToAddImmediately; 
@property (readonly) NSSet * overlaysToRemoveImmediately; 
@required
-(NSSet *)annotationsToAddImmediately;
-(NSSet *)annotationsToRemoveImmediately;
-(NSSet *)annotationsToRemoveAfterAnimationHasStarted;
-(NSSet *)annotationsToRemoveAfterAnimationHasEnded;
-(NSSet *)annotationsWithUpdatedIndex;
-(NSSet *)overlaysToAddImmediately;
-(NSSet *)overlaysToRemoveImmediately;
-(NSSet *)annotationsToRedraw;

@end
