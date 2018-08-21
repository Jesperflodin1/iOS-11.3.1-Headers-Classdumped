//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

@class HKDisplayType, UIActivityIndicatorView, UIBarButtonItem, WDProfile, _UIContentUnavailableView;

@interface WDDataListViewController : HKTableViewController
{
    WDProfile *_profile;
    UIBarButtonItem *_deleteAllButtonItem;
    UIActivityIndicatorView *_spinner;
    long long _cellStyle;
    _UIContentUnavailableView *_noContentView;
    id <WDDataListViewControllerDataProvider> _dataProvider;
    HKDisplayType *_displayType;
}

@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) id <WDDataListViewControllerDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (_Bool)_hasSpinnerRowRowAtIndexPath:(id)arg1;
- (_Bool)_shouldShowSpinnerRowInSection:(long long)arg1;
- (void)_deleteAllWithOptions:(unsigned long long)arg1;
- (void)_deleteAssociatedSamplesConfirmationPlural:(_Bool)arg1 deleteBlock:(CDUnknownBlockType)arg2;
- (void)_deleteAllButtonTapped:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)_sampleAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)_defaultCellForTableView:(id)arg1 cellStyle:(long long)arg2 indexPath:(id)arg3 text:(id)arg4 secondaryText:(id)arg5 icon:(id)arg6;
- (id)_quantityCellForTableView:(id)arg1 dataObjectSource:(id)arg2;
- (id)_sourceIconForObject:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)_dataProviderEnabled;
- (void)_reloadAllData;
- (id)_sampleTypesForDeleteAll;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 dataProvider:(id)arg3;

@end
