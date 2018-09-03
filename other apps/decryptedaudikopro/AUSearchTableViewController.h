//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"

@class AUAudikoRingtone, AUTableViewAdPlacer, NSMutableArray, NSString;

@interface AUSearchTableViewController : UITableViewController <UISearchBarDelegate, UISearchDisplayDelegate>
{
    _Bool _searching;
    _Bool _noResultsInSearch;
    NSMutableArray *_searchResults;
    AUAudikoRingtone *_currentPlayingRingtone;
    AUTableViewAdPlacer *_adPlacer;
}

@property(retain, nonatomic) AUTableViewAdPlacer *adPlacer; // @synthesize adPlacer=_adPlacer;
@property(nonatomic) _Bool noResultsInSearch; // @synthesize noResultsInSearch=_noResultsInSearch;
@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(retain, nonatomic) AUAudikoRingtone *currentPlayingRingtone; // @synthesize currentPlayingRingtone=_currentPlayingRingtone;
@property(retain, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (void)startPlaying:(id)arg1;
- (void)pauseRingtone;
- (void)stopPlayingRingtone;
- (void)resumePlayingRingtone;
- (void)playRingtone;
- (void)startRingtonePlaying;
- (void)reloadPlayingCell;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)cancelSearch;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)reloadSearchTable;
- (void)startSearch;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupAds;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

