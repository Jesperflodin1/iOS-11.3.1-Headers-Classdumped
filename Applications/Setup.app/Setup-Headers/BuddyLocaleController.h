//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddyTableViewController.h"

#import "BFFFlowItem.h"

@class BFFLocaleDataSource, NSMutableArray, NSString;

@interface BuddyLocaleController : BuddyTableViewController <BFFFlowItem>
{
    _Bool _fakeMode;
    NSMutableArray *_fakeViews;
    double _savedScrollPoint;
    id <BFFFlowItemDelegate> _delegate;
    NSString *_language;
    NSString *_selectedLanguage;
    BFFLocaleDataSource *_localeDataSource;
}

+ (id)localeScreenshotCachePath:(_Bool)arg1 tag:(id)arg2;
+ (_Bool)controllerNeedsToRun;
+ (id)cloudConfigSkipKey;
@property(retain, nonatomic) BFFLocaleDataSource *localeDataSource; // @synthesize localeDataSource=_localeDataSource;
@property(copy, nonatomic) NSString *selectedLanguage; // @synthesize selectedLanguage=_selectedLanguage;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)restoreScreenshot:(id)arg1;
- (void)takeScreenshots;
- (_Bool)takeScreenshot:(id)arg1 tag:(id)arg2;
- (void)switchToRealMode;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)countryAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)selectCountry:(id)arg1;
- (void)updateHeaderView;
- (id)titleText;
- (void)controllerWasPopped;
- (_Bool)isTitleAlignedByLastBaseline;
- (_Bool)useBottomEdgeInsetForTableView;
- (_Bool)useScreenFooter;
- (_Bool)useScreenHeader;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;
- (id)initInFakeMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
