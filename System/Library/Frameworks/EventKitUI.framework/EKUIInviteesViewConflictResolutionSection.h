/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKUIInviteesViewConflictResolutionSection <EKUIInviteesViewSection>
@required
-(void)setAvailabilitySearcher:(id)arg1;
-(id)availabilitySearcher;
-(void)clearCheckmark;
-(void)setShowPreviewOfEventAtTime:(/*^block*/id)arg1;
-(void)setNewTimeChosen:(/*^block*/id)arg1;
-(void)availabilitySearcherChangedState:(long long)arg1;
-(BOOL)injectNewRowsBeforeLastExistingRow;
-(void)refreshCellsAfterStateChange;

@end
