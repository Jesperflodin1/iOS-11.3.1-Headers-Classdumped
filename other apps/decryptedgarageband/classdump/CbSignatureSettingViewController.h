//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DfDocument, NSString, UITableView;

@interface CbSignatureSettingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    _Bool _didCheckSignature;
    DfDocument *_document;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property __weak DfDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)dynamicTypeChangedHandler:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)showExtraSignature;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)cleanup;
- (id)explanationText;
- (id)nibName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

