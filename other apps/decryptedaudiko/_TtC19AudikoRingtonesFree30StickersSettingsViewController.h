//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC19AudikoRingtonesFree21TrackedViewController.h"

@class UITableView;
@protocol _TtP19AudikoRingtonesFree38StickersSettingsViewControllerDelegate_;

@interface _TtC19AudikoRingtonesFree30StickersSettingsViewController : _TtC19AudikoRingtonesFree21TrackedViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: service
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: isUpToDate
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: delegate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)viewName;
- (void)closeAction;
- (void)editActionWithEditButtonItem:(id)arg1;
- (void)updateStickerPacksWithCompletion:(CDUnknownBlockType)arg1;
- (void)reorderPacks;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic) __weak id <_TtP19AudikoRingtonesFree38StickersSettingsViewControllerDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end

