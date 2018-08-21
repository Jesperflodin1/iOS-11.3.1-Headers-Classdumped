/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKCardSectionViewControllerDelegate <CRFeedbackListener>
@optional
-(BOOL)canPerformCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewControllerDidFinishLoading:(id)arg1;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
-(void)cardSectionViewController:(id)arg1 didHandleParameters:(id)arg2 forInteraction:(id)arg3;
-(void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
-(void)cardSectionViewControllerBoundsDidChange:(id)arg1;
-(CGSize*)boundingSizeForCardSectionViewController:(id)arg1;

@end
