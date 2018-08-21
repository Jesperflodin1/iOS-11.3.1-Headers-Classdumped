/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSParsecFeedbackDispatcher <NSObject>
@optional
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(BOOL)arg4;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 urlString:(id)arg3 headers:(id)arg4 endpoint:(unsigned long long)arg5;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1;
-(void)searchViewDisappearedBecauseOfEvent:(long long)arg1;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(BOOL)arg2;
-(void)userDidEngageWithCardShowingResult:(id)arg1 onCardOfType:(id)arg2 actionType:(id)arg3 actionTarget:(id)arg4 destination:(id)arg5;
-(void)userDidSelectCompletionListItem:(id)arg1;
-(void)userDidSelectCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 withCardActionDictionary:(id)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2 withEngagementActionDictionary:(id)arg3;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3;
-(void)userTypedURLDirectly:(id)arg1;
-(void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1;
-(void)didReceiveParsecResultsAfterTimeout:(id)arg1;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 endpoint:(unsigned long long)arg3;
-(void)userTypedGoToSearch:(id)arg1 endpoint:(unsigned long long)arg2;

@required
-(void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 forEvent:(long long)arg3;
-(void)userDidCancelSession;
-(void)userDidCancelSession:(long long)arg1;
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(id)arg5;
-(void)didReceiveLocalResultsForQuery:(id)arg1;

@end

