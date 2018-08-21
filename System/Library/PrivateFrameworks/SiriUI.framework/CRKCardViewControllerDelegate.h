/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKCardViewControllerDelegate <CRFeedbackListener>
@optional
-(void)cardViewControllerDidLoad:(id)arg1;
-(void)cardViewControllerBoundsDidChange:(id)arg1;
-(void)cardViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
-(void)cardViewController:(id)arg1 didFailToLoadCard:(id)arg2;
-(CGSize*)cardViewController:(id)arg1 boundingSizeForCardSectionViewController:(id)arg2;
-(id)baseCardForCardViewController:(id)arg1;
-(BOOL)canPerformReferentialCommand:(id)arg1 forCardViewController:(id)arg2;
-(BOOL)performReferentialCommand:(id)arg1 forCardViewController:(id)arg2;
-(BOOL)performNextCardCommand:(id)arg1 forCardViewController:(id)arg2;
-(BOOL)performPunchoutCommand:(id)arg1 forCardViewController:(id)arg2;
-(unsigned long long)navigationIndexOfCardViewController:(id)arg1;
-(void)presentViewController:(id)arg1 forCardViewController:(id)arg2;

@end

