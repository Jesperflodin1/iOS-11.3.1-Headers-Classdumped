/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKFaceViewDelegate <NSObject>
@required
-(id)faceViewComplicationAppIdentifierForSlot:(id)arg1;
-(void)faceViewWantsToPresentViewController:(id)arg1;
-(void)faceViewWantsComplicationKeylineFramesReloaded;
-(void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(BOOL)arg2;
-(BOOL)faceViewComplicationIsEmptyForSlot:(id)arg1;
-(void)faceViewRequestedLaunchFromRect:(CGRect)arg1;
-(void)faceViewWantsStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
-(void)faceViewDidLayoutSubviews;
-(void)faceViewWillEnterTimeTravel;
-(void)faceViewDidScrubToDate:(id)arg1 forced:(BOOL)arg2;
-(void)faceViewWillExitTimeTravel;
-(void)faceViewWillUnloadSnapshotContentViews;
-(void)faceViewDidReloadSnapshotContentViews;
-(void)faceViewWantsUnadornedSnapshotViewRemoved;
-(void)faceViewDidHideOrShowComplicationSlot;
-(BOOL)faceView:(id)arg1 wantsToDismissPresentedViewControllerAnimated:(BOOL)arg2;

@end

