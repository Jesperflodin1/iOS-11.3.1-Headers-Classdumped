/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WBSCompletionQuery;


@protocol WBSParsecSearchSession <NSObject>
@property (assign,nonatomic,__weak) id<WBSParsecSearchSessionDelegate> delegate; 
@property (nonatomic,retain) WBSCompletionQuery * currentQuery; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,setter=setUIScale:,nonatomic) double uiScale; 
@property (nonatomic,readonly) id<WBSParsecFeedbackDispatcher> feedbackDispatcher; 
@required
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isValid;
-(double)uiScale;
-(void)setUIScale:(double)arg1;
-(id<WBSParsecFeedbackDispatcher>)feedbackDispatcher;
-(void)setCurrentQuery:(id)arg1;
-(WBSCompletionQuery *)currentQuery;

@end

